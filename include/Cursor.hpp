#ifndef CURSOR_HPP
# define CURSOR_HPP

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
    int getX(void);
    int getY(void);
};

#endif  // CURSOR_HPP