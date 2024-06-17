#include "textedit.hpp"
#include "TextEditor.hpp"

void    openEditor() {
    WINDOW *editor = newwin(0, 0, 0, 0);
    TextEditor *textEditor = new TextEditor(editor);
    clear();
    while (1) {
        clear(); // XXX empeche de memoriser l'input
        border('*', '*', '*', '*', '*', '*', '*', '*');
        move(textEditor->getCursY(), textEditor->getCursX());
        refresh();
        int i = getch();
        if (i == 27)
        {
            clear();
            break;
        }
        getInput(textEditor, i);
    }

    delwin(editor);
    delete textEditor;
}