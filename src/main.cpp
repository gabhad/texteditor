#include <ncurses.h>
#include "textedit.hpp"

int main(void)
{
    initscr();
    keypad(stdscr, TRUE); 
    openEditor();
    endwin();
    return 0;
}