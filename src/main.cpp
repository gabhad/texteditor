#include <ncurses.h>
#include "textedit.hpp"

int main(void)
{
    initscr();
    keypad(stdscr, TRUE); 
    // Main function
    endwin();
    return 0;
}