#include "TextEditor.hpp"

TextEditor::TextEditor(WINDOW *editor) : editor(editor) {}
TextEditor::TextEditor(const TextEditor &) {}
TextEditor &TextEditor::operator=(const TextEditor &) {}

TextEditor::~TextEditor() {}

int     TextEditor::getLines(void) { return _lines; }
int     TextEditor::getCols(void) { return _cols; }
