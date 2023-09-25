# Kbd_layout_raylib
## Features
  You can switch keyboard layout without edit function.
  ```cpp
int Kbd_GetKeyPressed(KBD_Layout layout);
bool Kbd_IsKeyDown(KBD_Layout layout, int key);
bool Kbd_IsKeyPressed(KBD_Layout layout, int key);
  ```
and make your own layout.
## Layout
- qwerty (default)
- minimal azerty (qasd -> zqsd)
- belgian variant (complete)

## Problems
There are some key can't be use with raylib (éèàç§ ...) 
