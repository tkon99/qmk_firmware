/*
Copyright 2020 Dimitris Mantzouranis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE = 0,
    _FN1,
    _FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*    	        +--------------------------------------------------------------------------+----+----+
 				| ESC |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | INS| RGB|
 				+--------------------------------------------------------------------------+----+----+
 				|  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | END| DEL|
 				+--------------------------------------------------------------------------+----+----+
 				| CAPSLCK |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  RETURN | HME|PDUP|
 				+--------------------------------------------------------------------------+----+----+
 				| LSHIFT   |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / |   RSHIFT    | UP |PDDN|
 				+--------------------------------------------------------------------------+----+----+
 				|LCTRL| LGUI|  LALT|            SPACE             |RALT|LCTL| FN1| FN2| DWN| RGT|LEFT|
 				+--------------------------------------------------------------------------+----+----+
*/
    /*  Row:          0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15      */
    [_BASE] = { {   KC_ESC,    KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_INS,    RGB_MOD },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_END,    KC_DEL  },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_HOME,   KC_PGUP },
                {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_PGDN },
                {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_RALT,   KC_RCTL,   MO(_FN1),  MO(_FN2),  KC_LEFT,   KC_DOWN,   KC_RGHT }
              },

/*		        +--------------------------------------------------------------------------+----+----+
 				|  `  |SLCK|PAUS| APP|    |BRLR|BRIN|MPRV| PLY|MNXT|MUTE|VLDN|VLUP|        | SLP| TOG|
 				+--------------------------------------------------------------------------+----+----+
 				|       |    |    |    |    |    |    |    |    |    |    |    |    |      |    | HUE|
 				+--------------------------------------------------------------------------+----+----+
 				|         |    |    |    |    |    |    |    |    |    |    |    |         |    | SPD|
 				+--------------------------------------------------------------------------+----+----+
 				|          |    |    |    |    |    |    |    |    |    |    |             |    | SAT|
 				+--------------------------------------------------------------------------+----+----+
 				|     |     |      |                              |    |    | FN1| FN2|    |    |    |
 				+--------------------------------------------------------------------------+----+----+
*/
    /*  Row:          0          1          2         3        4         5         6         7         8         9          10          11         12         13        14       15      */
    [_FN1] =  { {    KC_GRV,  KC_SLCK,  KC_PAUS,   KC_APP,  _______,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC__MUTE, KC__VOLDOWN, KC__VOLUP,  _______,  KC_SLEP, RGB_TOG },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,  _______, RGB_HUI },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______, RGB_SPI },
                {   _______,    KC_NO,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______, RGB_SAI },
                {   _______,  KC_LALT,  KC_LGUI,    KC_NO,    KC_NO,    KC_NO,  _______,    KC_NO,    KC_NO,  _______,   _______,     MO(_FN1),  MO(_FN2), _______,  _______, _______ }
              },

/*		        +--------------------------------------------------------------------------+----+----+
 				|      |F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|        |    |    |
 				+--------------------------------------------------------------------------+----+----+
 				|       |    |    |    |    |    |    |    |    |    |    |    |    |      |    |    |
 				+--------------------------------------------------------------------------+----+----+
 				|         |    |    |    |    |    |    |    |    |    |    |    |         |    |    |
 				+--------------------------------------------------------------------------+----+----+
 				|          |    |    |    |    |    |    |    |    |    |    |             |    |    |
 				+--------------------------------------------------------------------------+----+----+
 				|     |     |      |                              |    |    | FN1| FN2|    |    |    |
 				+--------------------------------------------------------------------------+----+----+
*/

    /*  Row:          0          1          2         3        4         5         6         7         8         9          10          11         12         13        14       15      */
    [_FN2] =  { {     RESET,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,      KC_F11,    KC_F12,  _______,  _______, _______ },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,  _______, _______ },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______, _______ },
                {   _______,    KC_NO,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______, _______ },
                {   _______,  KC_LALT,  KC_LGUI,    KC_NO,    KC_NO,    KC_NO,  _______,    KC_NO,    KC_NO,  _______,   _______,     MO(_FN1),  MO(_FN2), _______,  _______, _______ }
              }

};
bool dip_switch_update_user(uint8_t index, bool active){
  switch(index){
    case 0:
      if(active){ // Win/Android mode
// do stuff
      }
      else{ // Mac/iOS mode
// do stuff
      }
      break;
    case 1:
      if(active){ //BT mode
// do stuff
      }
      else{ //Cable mode
// do stuff
      }
      break;
  }
  return true;
}
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
