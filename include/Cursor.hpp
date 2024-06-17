#ifndef CURSOR_HPP
# define CURSOR_HPP

#include <ncurses.h>

class Cursor {
private:
    int _x;
    int _y;
public:
    Cursor();
    Cursor(const Cursor &);
    Cursor &operator=(const Cursor &);

    ~Cursor();

    // Getters
    int     getX(void);
    int     getY(void);

    // Move
    void    moveHorizontally(int n);
    void    moveVertically(int n);
};

#endif  // CURSOR_HPP