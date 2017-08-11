/*
 * THIEUROM'S KEYMAP
 * http://www.keyboard-layout-editor.com/#/gists/23441d7d4f6939d0eeb2f04609f97000
 */


#include "keymap_common.h"

/*
 * Keymaps
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|F13|F14|
     * |-----------------------------------------------------------|
     * |  `  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|   |   |  \  |
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|   |Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|Fn3|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |     Fn2/Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, F13, F14,   \
           GRV, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   NO,  NO,  BSLS,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,NO,  ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   FN3, DOT, SLSH,RSFT,FN1,             \
                LALT,LGUI,          FN2,                RGUI,RALT),

    /* Layer 1: Fn1 - modified HHKM mode
     * ,-----------------------------------------------------------.
     * |   |Slk|Pus|   |   |   |   |Prv|Ply|Nxt|Mut|VoD|VoU|   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |Caps  |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,TRNS,TRNS,  \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Fn2 - Numbers, Symbols & more Modifiers
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |  ~  | 1 | 2 | 3 | _ | + | ! | { | } | [ | ] |   |   |  |  |
     * |-----------------------------------------------------------|
     * |  ^   | 4 | 5 | 6 | = | - | ' | ( | ) |Bs | : |   |   $    |
     * |-----------------------------------------------------------|
     * |  Tab   | 7 | 8 | 9 | 0 | * |Esc| " | < | > | ? |  &   | @ |
     * `-----------------------------------------------------------'
     *       |   |  %  |                       |  #  |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
           FN27,1,   2,   3,   FN24,FN23,FN11,FN21,FN22,LBRC,RBRC,TRNS,TRNS,FN26,       \
           FN16,4,   5,   6,   EQL, MINS,QUOT,FN19,FN20,BSPC,FN28,TRNS,FN14,            \
           TAB, 7,   8,   9,   0,   FN18,ESC, FN25,FN29,FN30,FN31,FN17,FN12,            \
                TRNS,FN15,          TRNS,               FN13, TRNS),

    /* Layer 3: Fn3 - Navigation
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Up |Rig|   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       \
           TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0]  = ACTION_DEFAULT_LAYER_SET(0),           // Default layer
    [1]  = ACTION_LAYER_MOMENTARY(1),             // modified HHKB mode
    [2]  = ACTION_LAYER_TAP_KEY(2, KC_SPC),       // Numbers & Symbols
    [3]  = ACTION_LAYER_TAP_KEY(3, KC_COMM),      // Navigation
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),
    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),
};
