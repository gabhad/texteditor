#include "textedit.hpp"
#include <stdlib.h>
#include <string.h>

void    openEditor() {
    const char  *msg = "Merci d'agrandir votre terminal pour profiter";
    const char  *msg2= "d'une meilleur expérience de jeu";
    int         taille = strlen(msg);
    int         taille2 = strlen(msg2);
    while (LINES < 50 || COLS < 100) {
        clear();
        mvprintw(LINES / 2 - 2, COLS/2 - 26, 
                "Le terminal actuel comporte %d lignes et %d colonnes", LINES, COLS);
        mvprintw(LINES/2, COLS/2 - taille/2, "%s", msg);
        mvprintw(LINES/2 + 1, COLS/2 - taille2/2,  "%s", msg2);
        refresh();
        getch();
    }
    clear();
   
}