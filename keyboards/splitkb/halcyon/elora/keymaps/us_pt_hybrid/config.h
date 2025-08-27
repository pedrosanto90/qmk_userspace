// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Configurações específicas para o keymap US-Português
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

// Ativar funcionalidades úteis para caracteres especiais
#define UNICODE_ENABLE
#define UNICODE_SELECTED_MODES UC_WINC

// Configurações de LED e RGB (se aplicável)
#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
    #define RGBLIGHT_DEFAULT_HUE 0
    #define RGBLIGHT_DEFAULT_SAT 0
    #define RGBLIGHT_DEFAULT_VAL 128
#endif

// Configurações de OLED (se aplicável)
#ifdef OLED_ENABLE
    #define OLED_TIMEOUT 30000
    #define OLED_BRIGHTNESS 128
#endif 