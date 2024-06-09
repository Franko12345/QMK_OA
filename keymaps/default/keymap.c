// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_2x4( OSL(1) ,  OSL(2) ,  OSL(3) ,  OSL(4) ,  OSL(5) ,  OSL(6) ,  KC_SPC ,  KC_BSPC ),
    [1] = LAYOUT_ortho_2x4( KC_Q ,  KC_W ,  KC_E ,  KC_R ,  KC_A ,  KC_S ,  KC_D ,  KC_F ), 
    [2] = LAYOUT_ortho_2x4( KC_T ,  KC_Y ,  KC_U ,  KC_I ,  KC_G ,  KC_H ,  KC_J ,  KC_K ), 
    [3] = LAYOUT_ortho_2x4( KC_C ,  KC_V ,  KC_O ,  KC_P ,  KC_Z ,  KC_X ,  KC_L ,  KC_SCLN ), 
    [4] = LAYOUT_ortho_2x4( KC_B ,  KC_N ,  KC_M ,  KC_UP ,  KC_COMM ,  KC_CAPS ,  KC_TAB ,  KC_DOWN ), 
    [5] = LAYOUT_ortho_2x4( KC_LBRC ,  KC_RBRC ,  KC_QUOT ,  KC_EQL ,  KC_MINS ,  KC_0 ,  KC_1 ,  OSL(7) ), 
    [6] = LAYOUT_ortho_2x4( KC_ESC ,  KC_ENT ,  OSM(MOD_LSFT) ,  OSM(MOD_LCTL) ,  KC_LGUI ,  OSM(MOD_LGUI) ,  KC_LEFT ,  KC_RGHT ), 
    [7] = LAYOUT_ortho_2x4( KC_2 ,  KC_3 ,  KC_4 ,  KC_5 ,  KC_6 ,  KC_7 ,  KC_8 ,  KC_9 )

};
