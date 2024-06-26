#include "TextEditor.hpp"

TextEditor::TextEditor(WINDOW *editor) : editor(editor) 
{
    Cursor  *curs = new Cursor;
    _curs = curs;
}
TextEditor::TextEditor(const TextEditor &) {}
TextEditor &TextEditor::operator=(const TextEditor &) { return *this; }

TextEditor::~TextEditor() 
{
    delete _curs;
}

int     TextEditor::getLines(void) { return _lines; }
int     TextEditor::getCols(void) { return _cols; }
int     TextEditor::getCursX(void) { return _curs->getX(); }
int     TextEditor::getCursY(void) { return _curs->getY(); }

void    TextEditor::moveCursLeft(void) { _curs->moveHorizontally(-1); }
void    TextEditor::moveCursRight(void) { _curs->moveHorizontally(1); }
void    TextEditor::moveCursUp(void) { _curs->moveVertically(-1); }
void    TextEditor::moveCursDown(void) { _curs->moveVertically(1); }

