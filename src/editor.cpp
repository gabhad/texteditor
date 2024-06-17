#include "textedit.hpp"
#include "TextEditor.hpp"

void    openEditor() {
    WINDOW *editor = newwin(0, 0, 0, 0);
    TextEditor *textEditor = new TextEditor(editor);
    echo();
    clear();
    while (1) {
    //    clear(); // XXX empeche de memoriser l'input
    //    border('*', '*', '*', '*', '*', '*', '*', '*');
     //   move(textEditor->getCursX(), textEditor->getCursY());
        refresh();
        int i = getch();
        if (i == 27)
        {
            clear();
            break;
        }
        getInput(i);
    }

    delwin(editor);
    delete textEditor;
}