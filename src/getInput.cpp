#include <ncurses.h>
#include "TextEditor.hpp"

void    getInput(TextEditor *textEditor, int i)
{
    if (i >= 0 && i <= 63)
        ;
    else if (i == KEY_LEFT)
        textEditor->moveCursLeft();
    else if (i == KEY_RIGHT)
        textEditor->moveCursRight();
    else if (i == KEY_UP)
        textEditor->moveCursUp();
    else if (i == KEY_DOWN)
        textEditor->moveCursDown();
}