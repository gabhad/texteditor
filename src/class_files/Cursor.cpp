#include "Cursor.hpp"

Cursor::Cursor() 
{
    _x = 1;
    _y = 1;
}
Cursor::Cursor(const Cursor &) {}
Cursor &Cursor::operator=(const Cursor &) { return *this; }

Cursor::~Cursor() {}

int Cursor::getX(void) { return _x; }
int Cursor::getY(void) { return _y; }


void Cursor::moveHorizontally(int n) {
    _x += n; 
    if (_x < 1)
        _x = 1;
    else if (_x > COLS - 2)
        _x = COLS - 2;
}
void Cursor::moveVertically(int n) {
    _y += n;
    if (_y < 1)
        _y = 1;
    else if (_y > LINES - 2)
        _y = LINES - 2;
}
