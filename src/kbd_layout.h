#ifndef KBD_LAYOUT_H
#define KBD_LAYOUT_H
#include "raylib.h"

enum KBD_Layout 
{
    EN=-1,//default
    FR=0,
    FR_BEL_VAR=1
};
typedef enum KBD_Layout KBD_Layout;

int Kbd_GetKeyPressed(KBD_Layout layout);
bool Kbd_IsKeyDown(KBD_Layout layout, int key);
bool Kbd_IsKeyPress(KBD_Layout layout, int key);
#endif