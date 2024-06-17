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


void Cursor::moveHorizontally(int n) { _x += n; }
void Cursor::moveVertically(int n) { _y += n; }
