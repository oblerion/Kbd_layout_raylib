#ifndef KBD_LAYOUT_H
#define KBD_LAYOUT_H
#include "raylib.h"
// kbd_layout ver 0.1

enum KBD_Layout 
{
    EN_US=0,//default
    EN_UK,
    FR,
    FR_BEL_VAR
};
typedef enum KBD_Layout KBD_Layout;

int Kbd_GetKeyPressed(KBD_Layout layout);
bool Kbd_IsKeyDown(KBD_Layout layout, int key);
bool Kbd_IsKeyPressed(KBD_Layout layout, int key);
#endif
