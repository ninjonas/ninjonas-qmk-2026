# QMK Userspace for [ninjonas](https://github.com/ninjonas/ninjonas-qmk-2026)

Shared macros, tap dances, combos, and OLED logic that I used to copy-paste into every keymap. Now it lives here, compiled once, and pulled in by each keyboard's `keymap.c`.

This userspace uses the [QMK External Userspace](https://docs.qmk.fm/newbs_external_userspace) format, so it tracks against `qmk_firmware` without forking it.

---

## Supported Keyboards

| Keyboard | Status |
|----------|--------|
| Splitkb Kyria rev1 | Active (Stage 1) |
| Crkbd | Coming in Stage 4 |

Hotdox, Pinky3, and Lily58 are not part of this migration.

---

## Features

### Keys

Custom shortcut keys defined in `ninjonas.h`:

| Key | Description |
|-----|-------------|
| `K_LOCK` | Cmd+Ctrl+Q — locks the screen on macOS |
| `K_CSCN` | Cmd+Ctrl+Shift+4 — copies a screen region to clipboard |
| `K_CPRF` | Cmd+Shift+M — switches Google Chrome profiles |
| `K_MDSH` | Shift+Alt+Minus — types an em-dash |

---

### Layers

| Layer | Number | Notes |
|-------|--------|-------|
| QWERTY | 0 | Active base layer |
| DVORAK | 1 | Defined, commented out until Stage 4 |
| COLEMAK | 2 | Defined, commented out until Stage 4 |
| LOWER | 3 | Nav, media, window management |
| RAISE | 4 | Numbers, symbols, function keys |
| ADJUST | 5 | RGB, EEPROM, compile macros, base layer switching |
| NUMPAD | 6 | Numpad toggled by double-tapping Y |

---

### Mod-Taps

| Key | Behavior |
|-----|----------|
| `MT_DEL` | Hold: Alt+Shift. Tap: Delete |
| `MT_EQL` | Hold: Right Shift. Tap: = |

---

### Layout Blocks

Shared layout macros live in `ninjonas.h` and are used across keymaps via `LAYOUT_wrapper`. This avoids repeating the same key definitions in every `keymap.c`.

Examples: `_____________________QWERTY_L1______________________`, `_____________________LOWER_R3_______________________`, etc.

---

### Macros

Defined in `process_records.c`:

| Macro | Description |
|-------|-------------|
| `M_SHFT` | Sends Cmd+Ctrl+Left or Right for macOS Sequoia native window tiling |
| `M_EMJI` | Cmd+Ctrl+Space — opens macOS emoji picker |
| `M_MAKE` | Runs `qmk compile -kb splitkb/kyria/rev1 -km ninjonas` |
| `M_FLSH` | Same as M_MAKE but targets the correct bootloader and calls `reset_keyboard()` |
| `M_MALL` | Compiles all registered userspace targets at once |
| `M_VRSN` | Types `QMK_KEYBOARD/QMK_KEYMAP @ QMK_VERSION` |
| `M_CODE` | Types `code .` and hits Enter — opens VS Code in current directory |
| `M_TERM` | Opens Terminal via Spotlight |

`M_PYNV` (pyenv activate) was removed — no longer needed.

---

### Tap Dance

Defined in `tap_dances.c` and `tap_dances.h`:

| Key | Single Tap | Hold | Double Tap | Triple Tap |
|-----|------------|------|------------|------------|
| `T_ESC` | Esc | | Caps Lock | |
| `T_TAB` | Tab | | Ctrl+Tab | |
| `T_GRV` | `` ` `` | | Cmd+`` ` `` | |
| `T_GUI` | Cmd | | Cmd+Space | |
| `T_LBRC` | `[` | | Cmd+`[` (browser back) | |
| `T_RBRC` | `]` | | Cmd+`]` (browser forward) | |
| `T_CPAP` | Cmd+V (paste) | Cmd+C (copy) | Opens Line app | KC_MPLY (play/pause) |
| `T_Y` | Y | Hold Y | Toggle NUMPAD layer | |

---

### Combos

Defined in `combos.c`:

| Name | Keys | Action |
|------|------|--------|
| `EQ_QUIT` | E + Q | Cmd+Q (quit app) |
| `RW_CLOSE` | R + W | Cmd+W (close window) |
| `QT_TAB` | Q + T | Cmd+T (new tab) |
| `ZC_COPY` | Z + C | Cmd+C (copy) |
| `XV_PASTE` | X + V | Cmd+V (paste) |

---

### Secrets

Secret macros (passwords, personal strings) live in `secrets.c`, which is not committed to the repo. Create it locally:

```c
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M_XXX1:
      if (record->event.pressed) {
        SEND_STRING("your secret here");
      }
      break;
    // M_XXX2, M_XXX3, M_XXX4, M_XXX5...
  }
  return true;
}
```

`M_XXX1` through `M_XXX5` are the available secret slots. They're declared in `process_records.h` and weakly linked so the build succeeds without `secrets.c`.
