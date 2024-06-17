CC = g++
CFLAGS = -g -Wall -Wextra -Werror -std=c++20
LDFLAGS = -lncurses
INCLUDES = include/
SRC = src/main.cpp 	\
		src/editor.cpp
		
TARGET = texteditor

all: $(TARGET)

$(TARGET):	$(SRC)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $^ -o $@ $(LDFLAGS)

clean:
	@rm -f $(TARGET)

fclean: clean

re: fclean all

.PHONY: all clean