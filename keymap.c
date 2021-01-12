#include QMK_KEYBOARD_H

enum planck_layers {
    _QWERTY,
    _QWERTY_NUM,
    _MACROPAD,
    _MEDIA,
    _LOWER,
    _RAISE,
    _RNUM,
    _ADJUST,
    _FNC,
    _RE_SET,
    _RE_SETF
};

enum planck_keycodes {
    QWERTY = SAFE_RANGE,
    QWERTY_NUM,
    MACROPAD,
    ZZZ, ZTZ, ZGZ, ZEROS,
    LANG, SPOTLIGHT, SLEEP, EMOJI,
    SCRS, SCRS_PT, SCRS_SLT,
    COPY, PASTE, CUT, SLCT_A
};

#define MEDIA MO(_MEDIA)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define RNUM MO(_RNUM)
#define FNC MO(_FNC)
#define RE_SET MO(_RE_SET)
#define RE_SETF MO(_RE_SETF)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = {
    {
    ZZZ, ZTZ, ZGZ, ZEROS
    }
},

[1] = {
    {
    LANG, SPOTLIGHT, SLEEP, EMOJI
    }
},
    
[2] = {
    {
    SCRS, SCRS_PT, SCRS_SLT
    }
},
    
[3] = {
    {
    COPY, PASTE, CUT, SLCT_A
    }
},

[_QWERTY] = LAYOUT_planck_grid(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCMD, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_ESC,  KC_LOPT, FNC,     LOWER,   KC_SPC,  MEDIA,   RAISE,   KC_RCMD, KC_ROPT, RNUM,    KC_RCTL
),

[_QWERTY_NUM] = LAYOUT_planck_grid(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCMD, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_RSFT,
    KC_LCTL, KC_ESC,  KC_LOPT, FNC,     LOWER,   KC_SPC,  MEDIA,   RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RIGHT
),

[_MACROPAD] = LAYOUT_planck_grid(
    KC_CIRC, KC_P7,   KC_P8,   KC_P9,    KC_ASTR, KC_BSPC,  _______, _______, _______, _______, _______, _______,
    KC_MINS, KC_P4,   KC_P5,   KC_P6,    KC_PLUS, KC_ENT,   KC_LCBR, KC_RCBR, KC_MRWD, KC_MFFD, KC_MPLY, _______,
    KC_P0,   KC_P1,   KC_P2,   KC_P3,    KC_SLSH, SCRS,     KC_LPRN, KC_RPRN, KC_VOLD, KC_VOLU, KC_MUTE, KC_RSFT,
    KC_SPC,  ZEROS,   KC_COMM, KC_DOT,  LOWER,   SCRS_SLT, SCRS_PT, RAISE,   COPY,    CUT,     PASTE,   SLCT_A
),
    
[_LOWER] = LAYOUT_planck_grid(
    KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_7,    KC_8,    KC_9,    KC_PLUS, KC_ASTR,
    _______, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_4,    KC_5,    KC_6,    KC_EQL,  _______,
    _______, KC_LABK, KC_RABK, KC_LCBR, KC_RCBR, KC_EXLM, KC_0,    KC_1,    KC_2,    KC_3,    KC_EXLM, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, KC_GRV,  KC_UP,   KC_BSLASH, KC_TILD,  KC_ASTR,
    _______, _______, _______, _______, _______, _______, KC_AMPR, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_QUOTE, _______,
    _______, ZZZ,     ZGZ,     ZTZ,     _______, _______, KC_PIPE, LANG,    KC_VOLD, KC_VOLU,   KC_MUTE,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,  _______
),

[_MEDIA] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, KC_BRIU, _______, KC_HOME, KC_PGUP, SCRS_SLT, SCRS_PT, _______,
    _______, _______, _______, _______, _______, KC_BRID, SLCT_A,  KC_END,  KC_PGDN, KC_CAPS,  SCRS,    _______,
    _______, _______, _______, _______, _______, CUT,     COPY,    PASTE,   KC_MRWD, KC_MFFD,  KC_MPLY, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______
),

[_ADJUST] = LAYOUT_planck_grid(
    _______, QWERTY,  QWERTY_NUM, MACROPAD, RE_SET,  _______, _______, _______,   _______, _______, _______, _______,
    _______, _______, _______,    _______,  _______, _______, _______, SPOTLIGHT, EMOJI,   _______, _______, _______,
    _______, _______, _______,    _______,  _______, _______, _______, _______,   _______, _______, _______, _______,
    _______, _______, _______,    _______,  _______, _______, _______, _______,   _______, _______, _______, _______
),

[_FNC] = LAYOUT_planck_grid(
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F12,  _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F12,  _______,
    _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______, _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F10,  _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F10,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RNUM] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    
    _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RE_SET] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, RE_SETF, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
    
[_RE_SETF] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
    
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                print("mode just switched to qwerty and this is a huge string\n");
                set_single_persistent_default_layer(_QWERTY);
            }
            
            return false;
        case QWERTY_NUM:
            if (record->event.pressed) {
                print("mode just switched to qwerty and this is also a huge string\n");
                set_single_persistent_default_layer(_QWERTY_NUM);
            }
            
            return false;
        case MACROPAD:
            if (record->event.pressed) {
                print("mode just switched to qwerty and this is also a huge string\n");
                set_single_persistent_default_layer(_MACROPAD);
            }
            
            return false;
        case ZZZ:
            if (record->event.pressed) {
                SEND_STRING("zzzzzzzzzzzz");
            }
            
            break;
        case ZGZ:
            if (record->event.pressed) {
                SEND_STRING("zgzgzgzgzgzg");
            }
            
            break;
        case ZTZ:
            if (record->event.pressed) {
                SEND_STRING("ztztztztztzt");
            }
            
            break;
        case ZEROS:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_P0));
                SEND_STRING(SS_TAP(X_P0));
                SEND_STRING(SS_TAP(X_P0));
            }
            
            break;
        case LANG:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_SPC));
            } else {
                SEND_STRING(SS_UP(X_SPC));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SPOTLIGHT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_SPC));
            } else {
                SEND_STRING(SS_UP(X_SPC));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SLEEP:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_Q));
            } else {
                SEND_STRING(SS_DOWN(X_Q));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_LCTL));
            }
            
            break;
        case EMOJI:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_SPC));
            } else {
                SEND_STRING(SS_UP(X_SPC));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LCTL));
            }
            
            break;
        case COPY:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_C));
            } else {
                SEND_STRING(SS_UP(X_C));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_V));
            } else {
                SEND_STRING(SS_UP(X_V));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case CUT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_X));
            } else {
                SEND_STRING(SS_UP(X_X));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SLCT_A:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_A));
            } else {
                SEND_STRING(SS_UP(X_A));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SCRS:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_3));
            } else {
                SEND_STRING(SS_UP(X_3));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        case SCRS_PT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_5));
            } else {
                SEND_STRING(SS_UP(X_5));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        case SCRS_SLT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_4));
            } else {
                SEND_STRING(SS_UP(X_4));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        default:
            break;
    }
    
    return true;
}
