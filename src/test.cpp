#include <iostream>
#include <ncurses.h>

int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;

    initscr();
    noecho();
    curs_set(0);
    mvprintw(12, 30, "hello world ncurse_test package!");
    while (true)
    {
        int ch = getch();
        if (ch == 'q')
        {
            break;
        }
    }
    endwin();
    return 0;
}
