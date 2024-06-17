#ifndef FT_TEXTEDIT_HPP
# define FT_TEXTEDIT_HPP

#include <ncurses.h>
#include "TextEditor.hpp"

void    openEditor(void);
void    getInput(TextEditor *textEditor, int i);

#endif  // FT_TEXTEDIT_HPP