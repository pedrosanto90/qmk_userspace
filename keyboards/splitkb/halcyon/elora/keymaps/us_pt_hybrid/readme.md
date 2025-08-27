# US-Português Hybrid Keymap para Elora

Este keymap combina o layout US padrão com caracteres portugueses essenciais, permitindo que você use o teclado tanto em inglês quanto em português sem perder a familiaridade do layout US.

## Características

- **Layout Base**: QWERTY US padrão
- **Caracteres Portugueses**: Acesso fácil a ç, €, e outros símbolos
- **Camadas Inteligentes**: Sistema de camadas otimizado para produtividade
- **Compatibilidade**: Funciona perfeitamente com sistemas em inglês e português

## Camadas

### Camada Base (_QWERTY)
Layout US padrão com acesso rápido à camada portuguesa através da tecla `PT` (localizada onde normalmente está o Menu).

### Camada Portuguesa (_PORTUGUESE)
- **E** → **€** (símbolo do euro)
- **;** → **Ç** (cedilha)
- Acesso através da tecla `PT` ou mantendo pressionado

### Camada de Navegação (_NAV)
- Teclas de seta direcionais
- Navegação por página
- Ativada com a tecla `Nav`

### Camada de Símbolos (_SYM)
- Números e símbolos especiais
- Pontuação
- Ativada com a tecla `Sym`

### Camada de Função (_FUNCTION)
- Teclas de função (F1-F12)
- Controles de mídia
- Ativada com a tecla `F-keys`

### Camada de Ajuste (_ADJUST)
- Configurações do teclado
- Controles RGB
- Ativada com a tecla `Adjust`

## Como Usar

1. **Layout Normal**: Use normalmente como um teclado US
2. **Caracteres Portugueses**: Pressione a tecla `PT` para acessar a camada portuguesa
3. **Navegação**: Use a tecla `Nav` para acessar as setas direcionais
4. **Símbolos**: Use a tecla `Sym` para acessar símbolos especiais

## Compilação

Para compilar este firmware:

```bash
qmk compile -kb splitkb/halcyon/elora -km us_pt_hybrid
```

## Instalação

1. Compile o firmware
2. Coloque o teclado em modo de bootloader
3. Carregue o arquivo `.hex` ou `.uf2` gerado

## Personalização

Você pode facilmente modificar este keymap para adicionar mais caracteres portugueses ou ajustar as camadas conforme suas necessidades. Os arquivos principais são:

- `keymap.c` - Definição das camadas e teclas
- `keymap_portuguese.h` - Definições dos caracteres portugueses
- `rules.mk` - Configurações de compilação

## Suporte

Para dúvidas ou sugestões, consulte a documentação do QMK ou entre em contato através dos canais oficiais. 