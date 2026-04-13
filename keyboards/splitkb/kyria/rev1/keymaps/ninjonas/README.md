# ninjonas Keymap for [Kyria rev1](https://github.com/splitkb/kyria)

This keymap lives in the `ninjonas-qmk-2026` External Userspace repo, so it compiles against QMK without touching the main `qmk_firmware` fork. Cleaner diffs, easier updates, and all shared logic (macros, tap dances, combos) lives in `users/ninjonas/` instead of being copy-pasted per-keyboard.

More info about the Kyria: [Introducing the Kyria](https://blog.splitkb.com/blog/introducing-the-kyria)

Custom macros and tap dances are documented in the [userspace README](../../../../users/ninjonas/README.md).

The keymap is built in stages. Each stage is functional on its own. Flash after Stage 1, add more when you're ready.

---

## Stage 1: Core Typing

**Goal:** Flash a working keyboard with everything needed for daily typing. QWERTY only, encoders, OLED, and one net-new macro.

### QWERTY

```
,-------------------------------------------.                              ,-------------------------------------------.
| Tab/CTL|   Q  |   W  |   E  |   R  |   T  |                              |  Y/NP|   U  |   I  |   O  |   P  |  \ |   |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
| Esc/CAP|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  |  ; : |  ' "  |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |   Z  |   X  |   C  |   V  |   B  |      | LAlt |  |T_CPAP|      |   N  |   M  |  , < |  . > |  / ? | =/RSft|
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       | LAlt |T_GUI | LCtl |LT_RAI|T_LBRC|  |T_RBRC|LT_LOW| BkSp | Del  | Mute |
                       `----------------------------------'  `----------------------------------'
```

> **Note:** `Tab/CTL`, `Esc/CAP`, `T_GUI`, `T_CPAP`, `Y/NP`, `T_LBRC`, and `T_RBRC` are tap dance keys. Full tap dance definitions land in Stage 2 and Stage 3. In Stage 1 these keys use basic double-tap definitions or are mapped to their primary action only.

### LOWER

Activated by holding `LT_LOW` (right thumb, inner).

```
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      | Bri+ | Play | Mute |                              | PgUp | Home |  Up  |  End |      |      |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |      |      | Bri- | FFwd | Vol+ |                              | PgDn | Left | Down | Rght | Lock |       |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |M_SHFT|      | Rwnd | Vol- |      |      |      |  |      |      |   N  | Term | Code |      |      |       |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

### RAISE

Activated by holding `LT_RAI` (right thumb, middle).

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

`K_CPRF` = Cmd+Shift+M (switch Google Chrome profiles).

### ADJUST

Activated by holding both `LT_LOW` and `LT_RAI` simultaneously.

```
,-------------------------------------------.                              ,-------------------------------------------.
| M_MAKE |EEP RST|     |      |      |      |                              |UG_TOG|      |      |COLEMAK|DVORAK|QWERTY|
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
| M_VRSN |M_MALL |UG_SPD+|UG_SAT+|UG_HUE+|UG_VAL+|                       |      |      |      |      |      |       |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| M_FLSH |      |UG_SPD-|UG_SAT-|UG_HUE-|UG_VAL-|      |      |  |      |      |UG_NXT|      |      |      |      |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

RGB keycodes use the modern `UG_*` prefix (unified lighting API, QMK 0.22+). `QK_CLEAR_EEPROM` resets persistent settings without a physical button press.

### NUMPAD

Activated by double-tapping `Y/NP` (tap dance, restored in Stage 3).

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

### Encoders (Stage 1)

| Layer  | Left encoder         | Right encoder         |
|--------|----------------------|-----------------------|
| QWERTY | Brightness down/up   | Volume down/up        |
| LOWER  | App switcher (Cmd+Tab) | Scroll up/down      |
| RAISE  | Page up/down         | Tab switcher (Ctrl+Tab) |
| ADJUST | RGB hue              | RGB brightness        |
| NUMPAD | (no action)          | (no action)           |

### OLED (Stage 1)

- Master side: full status display (layer, mods, lock state)
- Secondary side: custom logo scroll
- Auto-off after 15 seconds (`OLED_TIMEOUT 15000`)

### Macros (Stage 1)

| Key    | Action |
|--------|--------|
| M_EMJI | Opens macOS emoji picker (Cmd+Ctrl+Space). Net-new key, not in the old build. |

---

## Stage 2: Quality of Life

**Goal:** The daily-driver extras that make the board feel like home. Combos, essential macros, and the most-used tap dances.

### Combos (new in Stage 2)

| Combo | Keys | Action |
|-------|------|--------|
| EQ_QUIT  | E + Q | Cmd+Q (quit app) |
| RW_CLOSE | R + W | Cmd+W (close tab) |
| QT_TAB   | Q + T | Cmd+T (new tab)   |
| ZC_COPY  | Z + C | Cmd+C (copy)      |
| XV_PASTE | X + V | Cmd+V (paste)     |

Combo term: 60ms.

### Tap dances (new in Stage 2)

| Key    | Tap        | Double tap                        |
|--------|------------|-----------------------------------|
| T_CPAP | Cmd+V (paste) | Hold: Cmd+C (copy), double tap: opens Line app, triple tap: KC_MPLY (play/pause) |
| T_LBRC | `[`        | Cmd+`[` (browser back)            |
| T_RBRC | `]`        | Cmd+`]` (browser forward)         |

### Macros (new in Stage 2)

| Key    | Action |
|--------|--------|
| M_SHFT | macOS Sequoia native window tiling (Cmd+Ctrl+Left / Cmd+Ctrl+Right). Replaces old ShiftIt triple-mod combo. |

> `M_PYNV` is removed in Stage 2 and not coming back.

---

## Stage 3: Full Feature Parity

**Goal:** Everything the old keymap did, fully restored and updated.

### Tap dances (new in Stage 3)

| Key    | Tap        | Double tap              |
|--------|------------|-------------------------|
| T_TAB  | Tab        | Ctrl+Tab                |
| T_ESC  | Esc        | Caps Lock               |
| T_GRV  | `` ` ``    | Cmd+`` ` ``             |
| T_GUI  | Cmd        | Cmd+Space (Spotlight)   |
| T_Y    | Y          | Toggle NUMPAD layer     |

### RGB (new in Stage 3)

RGB re-enabled via `RGBLIGHT_ENABLE = yes`. Controls live on the ADJUST layer (already wired in Stage 1 with `UG_*` keycodes). Encoder on ADJUST maps left to hue and right to brightness.

### Macros (new in Stage 3)

| Key    | Action |
|--------|--------|
| M_CODE | `code .\n` to open VS Code in current directory |
| M_TERM | Spotlight then "terminal" (250ms delay) |
| M_MAKE | `qmk compile -kb splitkb/kyria/rev1 -km ninjonas` |
| M_FLSH | Flash command for External Userspace |
| M_MALL | Compile Kyria + crkbd in one shot |
| M_VRSN | Print QMK version info |
| M_XXX1-5 | Secret macros via optional `secrets.c` |

---

## Stage 4: Expansion

**Goal:** New features and additional hardware support.

### Alternate base layers (new in Stage 4)

Dvorak and Colemak are defined in `ninjonas.h` but commented out in `keymap.c` during Stages 1-3. Stage 4 uncomments them and wires the ADJUST layer switcher keys (already present as `DVORAK` and `COLEMAK` in the ADJUST layout above).

| Key on ADJUST | Action |
|---------------|--------|
| QWERTY | Switch to QWERTY base layer |
| DVORAK | Switch to DVORAK base layer |
| COLEMAK | Switch to COLEMAK base layer |

Combo definitions will also be updated to use physical positions instead of QWERTY keycodes so they work correctly on all base layers.

### crkbd support (new in Stage 4)

- New keymap at `keyboards/crkbd/rev1/keymaps/ninjonas/`
- QWERTY, Dvorak, Colemak layers ported across
- `M_MALL` updated to include crkbd compilation

### New QMK features (Stage 4)

| Feature | Notes |
|---------|-------|
| Caps Word (`CW_TOGG`) | Bind to a key (TBD) |
| Repeat Key (`QK_REP`) | Bind to a key (TBD) |
| WPM display | `WPM_ENABLE = yes`, call `get_current_wpm()` in `render_status()` |

---

## Building

```bash
qmk compile -kb splitkb/kyria/rev1 -km ninjonas
```

Or from the userspace root:

```bash
qmk userspace-compile
```
