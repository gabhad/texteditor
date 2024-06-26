#ifndef TEXTEDITOR_HPP
# define TEXTEDITOR_HPP

#include <ncurses.h>
#include <stack>
#include <string>
#include "Cursor.hpp"

class TextEditor {
private:
    int                     _lines;
    int                     _cols;
    Cursor                 *_curs;
    std::stack<std::string> _lastActions;

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

    // Move Cursor
    void    moveCursLeft(void);
    void    moveCursRight(void);
    void    moveCursUp(void);
    void    moveCursDown(void);
};

#endif  // TEXTEDITOR_HPP