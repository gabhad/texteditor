#ifndef TEXTEDITOR_HPP
# define TEXTEDITOR_HPP

#include <ncurses.h>

class TextEditor {
private:
    int     _lines;
    int     _cols;

public:
    TextEditor(WINDOW *editor);
    TextEditor(const TextEditor &);
    TextEditor &operator=(const TextEditor &);

    ~TextEditor();

    WINDOW  *editor;

    // Getters
    int     getLines(void);
    int     getCols(void);
};

#endif  // TEXTEDITOR_HPP