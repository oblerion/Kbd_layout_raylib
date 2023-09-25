# Kbd_layout_raylib
## Features
  you can switch keyboard layout without edit function.
  ```c
int Kbd_GetKeyPressed(KBD_Layout layout);
bool Kbd_IsKeyDown(KBD_Layout layout, int key);
bool Kbd_IsKeyPressed(KBD_Layout layout, int key);
  ```
## Layout
- qwerty (default)
- minimal azerty (qasd -> zqsd)
- belgian variant (complete)
- make your own layout
  
## Problems
there are some key can't be use with raylib (éèàç§ ...) 
