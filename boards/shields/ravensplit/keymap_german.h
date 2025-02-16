/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CIRC GRAVE // ^ (dead)
#define DE_1 N1       // 1
#define DE_2 N2       // 2
#define DE_3 N3       // 3
#define DE_4 N4       // 4
#define DE_5 N5       // 5
#define DE_6 N6       // 6
#define DE_7 N7       // 7
#define DE_8 N8       // 8
#define DE_9 N9       // 9
#define DE_0 N0       // 0
#define DE_SS MINUS   // ß
#define DE_ACUT EQUAL // ´ (dead)
// Row 2
#define DE_Q Q       // Q
#define DE_W W       // W
#define DE_E E       // E
#define DE_R R       // R
#define DE_T T       // T
#define DE_Z Y       // Z
#define DE_U U       // U
#define DE_I I       // I
#define DE_O O       // O
#define DE_P P       // P
#define DE_UDIA LBKT // Ü
#define DE_PLUS RBKT // +
// Row 3
#define DE_A A              // A
#define DE_S S              // S
#define DE_D D              // D
#define DE_F F              // F
#define DE_G G              // G
#define DE_H H              // H
#define DE_J J              // J
#define DE_K K              // K
#define DE_L L              // L
#define DE_ODIA SEMI        // Ö
#define DE_ADIA APOS        // Ä
#define DE_HASH NON_US_HASH // #
// Row 4
#define DE_LABK NON_US_BACKSLASH // <
#define DE_Y Z                   // Y
#define DE_X X                   // X
#define DE_C C                   // C
#define DE_V V                   // V
#define DE_B B                   // B
#define DE_N N                   // N
#define DE_M M                   // M
#define DE_COMM COMMA            // ,
#define DE_DOT DOT               // .
#define DE_MINS SLASH            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG LS(DE_CIRC) // °
#define DE_EXLM LS(DE_1)   // !
#define DE_DQUO LS(DE_2)   // "
#define DE_SECT LS(DE_3)   // §
#define DE_DLR LS(DE_4)    // $
#define DE_PERC LS(DE_5)   // %
#define DE_AMPR LS(DE_6)   // &
#define DE_SLSH LS(DE_7)   // /
#define DE_LPRN LS(DE_8)   // (
#define DE_RPRN LS(DE_9)   // )
#define DE_EQL LS(DE_0)    // =
#define DE_QUES LS(DE_SS)  // ?
#define DE_GRV LS(DE_ACUT) // ` (dead)
// Row 2
#define DE_ASTR LS(DE_PLUS) // *
// Row 3
#define DE_QUOT LS(DE_HASH) // '
// Row 4
#define DE_RABK LS(DE_LABK) // >
#define DE_SCLN LS(DE_COMM) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SUP2 RA(DE_2)  // ²
#define DE_SUP3 RA(DE_3)  // ³
#define DE_LCBR RA(DE_7)  // {
#define DE_LBRC RA(DE_8)  // [
#define DE_RBRC RA(DE_9)  // ]
#define DE_RCBR RA(DE_0)  // }
#define DE_BSLS RA(DE_SS) // (backslash)
// Row 2
#define DE_AT RA(DE_Q)      // @
#define DE_EURO RA(DE_E)    // €
#define DE_TILD RA(DE_PLUS) // ~
// Row 4
#define DE_PIPE RA(DE_LABK) // |
#define DE_MICR RA(DE_M)    // µ

// Workaround for stupid Win Remote Desktop problem
/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define _DEG DE_CIRC // °
#define _EXLM DE_1   // !
#define _DQUO DE_2   // "
#define _SECT DE_3   // §
#define _DLR DE_4    // $
#define _PERC DE_5   // %
#define _AMPR DE_6   // &
#define _SLSH DE_7   // /
#define _LPRN DE_8   // (
#define _RPRN DE_9   //
#define _EQL DE_0    // =
#define _QUES DE_SS  // ?
#define _GRV DE_ACUT // ` (dead)
// Row 2
#define _ASTR DE_PLUS // *
// Row 3
#define _QUOT DE_HASH // '
// Row 4
#define _RABK DE_LABK // >
#define _SCLN DE_COMM // ;
#define _COLN DE_DOT  // :
#define _UNDS DE_MINS // _

/* AltGr symbols RA(XXX)
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define _SUP2 DE_2  // ²
#define _SUP3 DE_3  // ³
#define _LCBR DE_7  // {
#define _LBRC DE_8  // [
#define _RBRC DE_9  // ]
#define _RCBR DE_0  // }
#define _BSLS DE_SS // (backslash)
// Row 2
#define _AT DE_Q      // @
#define _EURO DE_E    // €
#define _TILD DE_PLUS // ~
// Row 4
#define _PIPE DE_LABK // |
#define _MICR DE_M    // µ
