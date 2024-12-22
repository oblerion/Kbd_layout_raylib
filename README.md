# Kbd_layout_raylib
## Features
  You can switch keyboard layout without edit function.
  ```cpp
int Kbd_GetKeyPressed(KBD_Layout layout);
bool Kbd_IsKeyDown(KBD_Layout layout, int key);
bool Kbd_IsKeyPressed(KBD_Layout layout, int key);
  ```
## Layout
- 0 US qwerty (default)
- 1 UK qwerty
- 2 minimal azerty (qasd -> zqsd)
- 3 belgian variant (complete)

## Problems
There are some key can't be use with raylib (éèàç§ ...) 
