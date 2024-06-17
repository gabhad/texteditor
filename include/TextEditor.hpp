#ifndef TEXTEDITOR_HPP
# define TEXTEDITOR_HPP

#include <ncurses.h>
#include "Cursor.hpp"

class TextEditor {
private:
    int     _lines;
    int     _cols;
    Cursor  *_curs;

public:
    TextEditor(WINDOW *editor);
    TextEditor(const TextEditor &);
    TextEditor &operator=(const TextEditor &);

    ~TextEditor();

    WINDOW  *editor;

    // Getters
    int     getLines(void);
    int     getCols(void);
    int     getCursX(void);
    int     getCursY(void);
};

#endif  // TEXTEDITOR_HPP