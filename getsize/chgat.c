#include <ncurses.h>

int main(int argc, char *argv[])
{
	initscr();
	start_color();

	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("You made it to the next level!");
	mvchgat(0,0,-1, A_BLINK, 1, NULL);
	// 1 is the color index in the init pair
	refresh();
	getch();
	endwin();

	return 0;
}
