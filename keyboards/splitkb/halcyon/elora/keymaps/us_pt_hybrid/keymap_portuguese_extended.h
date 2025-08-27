// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Extensões adicionais para caracteres portugueses
// Estes podem ser adicionados ao keymap principal conforme necessário

// Caracteres especiais adicionais
#define PT_AGRAVE KC_GRV  // à
#define PT_ACUTE KC_EQL  // á
#define PT_ATILDE KC_LBRC // ã
#define PT_ACIRC KC_RBRC // â

// Combinações úteis para dead keys
#define PT_DEAD_ACUTE KC_QUOT // ´ (dead key)
#define PT_DEAD_GRAVE KC_GRV  // ` (dead key)
#define PT_DEAD_TILDE KC_LBRC // ~ (dead key)
#define PT_DEAD_CIRC KC_RBRC // ^ (dead key)

// Símbolos monetários e comerciais
#define PT_EURO_SYM KC_E    // € (através de AltGr+E)
#define PT_CENT_SYM KC_4    // ¢ (através de AltGr+4)
#define PT_POUND_SYM KC_3   // £ (através de AltGr+3)

// Pontuação específica do português
#define PT_QUOTES KC_2      // " (aspas)
#define PT_APOSTROPHE KC_7  // ' (apóstrofo)
#define PT_QUESTION KC_MINS // ? (interrogação)
#define PT_EXCLAMATION KC_1 // ! (exclamação)

// Caracteres acentuados comuns
#define PT_A_ACUTE LALT(KC_A) // á
#define PT_A_GRAVE LALT(KC_GRAVE) // à
#define PT_A_TILDE LALT(KC_LBRC) // ã
#define PT_A_CIRC LALT(KC_RBRC) // â

#define PT_E_ACUTE LALT(KC_E) // é
#define PT_E_GRAVE LALT(KC_QUOT) // è
#define PT_E_CIRC LALT(KC_6) // ê

#define PT_I_ACUTE LALT(KC_I) // í
#define PT_I_CIRC LALT(KC_5) // î

#define PT_O_ACUTE LALT(KC_O) // ó
#define PT_O_GRAVE LALT(KC_SCLN) // ò
#define PT_O_TILDE LALT(KC_9) // õ
#define PT_O_CIRC LALT(KC_0) // ô

#define PT_U_ACUTE LALT(KC_U) // ú
#define PT_U_CIRC LALT(KC_7) // û

// Combinações para caracteres especiais
#define PT_CCED_MAJ LALT(KC_SCLN) // Ç (cedilha maiúscula)
#define PT_CCED_MIN KC_SCLN // ç (cedilha minúscula)

// Símbolos matemáticos e científicos
#define PT_DEGREE LALT(KC_0) // °
#define PT_MICRO LALT(KC_M) // µ
#define PT_SQUARED LALT(KC_2) // ²
#define PT_CUBED LALT(KC_3) // ³

// Notas de rodapé
#define PT_FOOTNOTE_A LALT(KC_1) // ¹
#define PT_FOOTNOTE_B LALT(KC_2) // ²
#define PT_FOOTNOTE_C LALT(KC_3) // ³ 