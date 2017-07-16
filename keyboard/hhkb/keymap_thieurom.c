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
     * |Esc  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Fn2     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn2   |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Fn3  |     Space/Shift       |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, F13, F14,   \
           ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   NO,  NO,  BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,NO,  ENT,             \
           FN2, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN2, FN1,             \
                LALT,FN3,           FN4,                RGUI,RALT),

    /* Layer 1: Fn1 - modified HHKM mode
     * ,-----------------------------------------------------------.
     * |   |Slk|Pus|   |   |   |   |Prv|Ply|Nxt|Mut|VoD|VoU|   |   |
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |   |   |   |   |   |Del  |
     * |-----------------------------------------------------------|
     * |Tab   |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,TRNS,TRNS,  \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DELETE,     \
           TAB ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Fn2 - Numbers & Symbols
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |  {  | 1 | 2 | 3 | + | = | | | ! | @ | # | \ |   |   |  }  |
     * |-----------------------------------------------------------|
     * |  (   | 4 | 5 | 6 | _ | - | " | $ | % | ^ | : |   |    )   |
     * |-----------------------------------------------------------|
     * |   [    | 7 | 8 | 9 | 0 | * | ' | & | < | > | ? |  ]   |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |  `  | ~ |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
           LBRC,1,   2,   3,   FN23,EQL, FN26,FN11,FN12,FN13,BSLS,TRNS,TRNS,RBRC,       \
           FN19,4,   5,   6,   FN24,MINS,FN25,FN14,FN15,FN16,FN28,TRNS,FN20,            \
           FN21,7,   8,   9,   0,   FN18,QUOT,FN17,FN29,FN30,FN31,FN22,TRNS,            \
                TRNS,TRNS,          TRNS,               GRV, FN27),

    /* Layer 3: Fn3 - Navigation
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Hom|PgU|   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Ws1|Ws2|Ws3|Ws4|   |Lef|Dow|Up |Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |End|PgD|   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     * Ws: Workspace
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       \
           TRNS,FN5, FN6, FN7, FN8, TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END, PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



/*
 * id for user defined funtions
 */
enum macro_id {
    KWM_WSPC_1,
    KWM_WSPC_2,
    KWM_WSPC_3,
    KWM_WSPC_4,
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
    [1]  = ACTION_LAYER_MOMENTARY(1),             // FN1
    [2]  = ACTION_LAYER_MOMENTARY(2),             // FN2 
    [3]  = ACTION_LAYER_MOMENTARY(3),             // FN3
    [4]  = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPC),
    [5]  = ACTION_MACRO_TAP(KWM_WSPC_1),
    [6]  = ACTION_MACRO_TAP(KWM_WSPC_2),
    [7]  = ACTION_MACRO_TAP(KWM_WSPC_3),
    [8]  = ACTION_MACRO_TAP(KWM_WSPC_4),
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


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case KWM_WSPC_1:
            return (record->event.pressed ?
                MACRO( D(LCTL), D(S), U(LCTL), U(S), I(25), D(1), U(1), END ) :
                MACRO_NONE);
        case KWM_WSPC_2:
            return (record->event.pressed ?
                MACRO( D(LCTL), D(S), U(LCTL), U(S), I(25), D(2), U(2), END ) :
                MACRO_NONE);
        case KWM_WSPC_3:
            return (record->event.pressed ?
                MACRO( D(LCTL), D(S), U(LCTL), U(S), I(25), D(3), U(3), END ) :
                MACRO_NONE);
        case KWM_WSPC_4:
            return (record->event.pressed ?
                MACRO( D(LCTL), D(S), U(LCTL), U(S), I(25), D(4), U(4), END ) :
                MACRO_NONE);
    }
    return MACRO_NONE;
}
