#!/bin/bash

# Script de compilação para o keymap US-Português Hybrid
# Para o teclado splitkb/halcyon/elora

echo "🔧 Compilando firmware US-Português Hybrid para Elora..."
echo ""

# Verificar se o QMK está instalado
if ! command -v qmk &> /dev/null; then
    echo "❌ QMK CLI não encontrado. Por favor, instale o QMK primeiro:"
    echo "   https://docs.qmk.fm/#/newbs_getting_started"
    exit 1
fi

# Compilar o firmware
echo "📦 Compilando..."
qmk compile -kb splitkb/elora/rev1 -km us_pt_hybrid

# Verificar se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo ""
    echo "✅ Compilação concluída com sucesso!"
    echo ""
    echo "📁 Arquivos gerados:"
    ls -la *.hex *.uf2 2>/dev/null || echo "   Nenhum arquivo .hex ou .uf2 encontrado"
    echo ""
    echo "🚀 Para instalar o firmware:"
    echo "   1. Coloque o teclado em modo de bootloader"
    echo "   2. Carregue o arquivo .hex ou .uf2 gerado"
    echo ""
    echo "💡 Dica: Use 'qmk flash' para instalação automática"
else
    echo ""
    echo "❌ Erro na compilação. Verifique os logs acima."
    exit 1
fi 