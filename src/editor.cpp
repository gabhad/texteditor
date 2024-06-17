#include "textedit.hpp"
#include "TextEditor.hpp"

void    openEditor() {
    WINDOW *editor = newwin(0, 0, 0, 0);
    TextEditor *textEditor = new TextEditor(editor);
    
    clear();
    while (1) {
        clear();
        border('*', '*', '*', '*', '*', '*', '*', '*');
        move(textEditor->getCursX(), textEditor->getCursY());
        refresh();
        int i = getch();
        getInput(i);
    }

    delwin(editor);
    delete textEditor;
}