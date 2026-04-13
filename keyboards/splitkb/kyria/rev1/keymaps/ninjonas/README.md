# ninjonas Keymap for [Kyria rev1](https://github.com/splitkb/kyria)

This keymap lives in the `ninjonas-qmk-2026` External Userspace repo, so it compiles against QMK without touching the main `qmk_firmware` fork. That means cleaner diffs, easier updates, and all shared logic (macros, tap dances, combos) lives in `users/ninjonas/` instead of being copy-pasted per-keyboard.

More info about the Kyria: [Introducing the Kyria](https://blog.splitkb.com/blog/introducing-the-kyria)

Custom macros and tap dances are documented in the [userspace README](../../../../users/ninjonas/README.md).

---

## Keymap

This layout is built around my actual typing habits and changes when those habits do. QWERTY is the only active base layer right now. DVORAK and COLEMAK are defined but commented out in Stage 1 and will be re-enabled in Stage 4.

### QWERTY

```
,-------------------------------------------.                              ,-------------------------------------------.
| Tab/CTL|   Q  |   W  |   E  |   R  |   T  |                              |  Y/NP|   U  |   I  |   O  |   P  |  \ |   |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
| Esc/CAP|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  |  ; : |  ' "  |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |   Z  |   X  |   C  |   V  |   B  |      | LAlt |  |T_CPAP|      |   N  |   M  |  , < |  . > |  / ? | =/RSft|
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       | LAlt |T_GUI | LCtl |LT_RAI| T_LBRC|  |T_RBRC| LT_LOW|BkSp | Del  | Mute |
                       `----------------------------------'  `----------------------------------'
```

**Tap dance keys:**
- `Tab/CTL` — tap: Tab, double tap: Ctrl+Tab
- `Esc/CAP` — tap: Esc, double tap: Caps Lock
- `T_GUI` — tap: Cmd, double tap: Cmd+Space
- `T_CPAP` — tap: Cmd+V (paste), hold: Cmd+C (copy), double tap: opens Line app, triple tap: KC_MPLY (play/pause)
- `Y/NP` — tap: Y, double tap: toggle NUMPAD layer
- `T_LBRC` — tap: `[`, double tap: Cmd+`[` (browser back)
- `T_RBRC` — tap: `]`, double tap: Cmd+`]` (browser forward)

---

### DVORAK

Coming in Stage 4. The layer is defined in `ninjonas.h` but commented out in `keymap.c`.

### COLEMAK

Coming in Stage 4. Same situation as DVORAK.

---

### LOWER

Activated by holding `LT_LOW` (right thumb, inner).

```
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      | Bri+ | Play | Mute |  Scn |                        | PgUp | Home |  Up  |  End |      |  —   |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |      |      | Bri- | FFwd | Vol+ |      |                        | PgDn | Left | Down | Rght | Lock |       |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift | M_SHFT|     | Rwnd | Vol- |      | T_LBRC|      |  |      | T_RBRC|  M  | Term | Code |      |      |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

`M_SHFT` sends Cmd+Ctrl+Left / Cmd+Ctrl+Right for macOS Sequoia native window tiling. See the [userspace README](../../../../users/ninjonas/README.md) for the full macro list.

---

### RAISE

Activated by holding `LT_RAI` (right thumb, middle position while on left half).

```
,-------------------------------------------.                              ,-------------------------------------------.
|  ` ~/^ |   1  |   2  |   3  |   4  |   5  |                              |   6  |   7  |   8  |   9  |   0  |   -  |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|   ~    |   !  |   @  |   #  |   $  |   %  |                              |   ^  |   &  |   *  |   (  |   )  |   _  |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|  F11   |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |  |K_CPRF|      |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

`K_CPRF` = Cmd+Shift+M — switches Google Chrome profiles.

---

### ADJUST

Activated by holding both `LT_LOW` and `LT_RAI` simultaneously.

```
,-------------------------------------------.                              ,-------------------------------------------.
| M_MAKE |EEP RST|     |      |      |      |                              |UG_TOG|      |      |COLEMAK|DVORAK|QWERTY|
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
| M_VRSN | M_MALL|UG_SPD+|UG_SAT+|UG_HUE+|UG_VAL+|                       |      |      |      |      |      |       |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| M_FLSH |      |UG_SPD-|UG_SAT-|UG_HUE-|UG_VAL-|      |      |  |      |      |UG_NXT|      |      |      |      |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

RGB keycodes use the modern `UG_*` prefix (unified lighting API, QMK 0.22+). `QK_CLEAR_EEPROM` resets persistent settings without a physical button press.

---

### NUMPAD

Activated by double-tapping `Y/NP`.

```
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |      |      |      |                              |  Y   |  P7  |  P8  |  P9  |  P+  |  P*  |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |      |      |      |      |      |                              |      |  P4  |  P5  |  P6  |  P-  |  P/  |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |      |      |      |      |      |  |      |      |  P0  |  P1  |  P2  |  P3  |  P.  |  P:  |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

Double-tap `Y/NP` again to return to QWERTY.

---

## Building

```bash
qmk compile -kb splitkb/kyria/rev1 -km ninjonas
```

Or from the userspace root:

```bash
qmk userspace-compile
```
