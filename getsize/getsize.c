#include <ncurses.h>
#include <string.h>

int main()
{
	char mesg[]="Just a string";
	int row,col;

	initscr();
	getmaxyx(stdscr,row,col);
	mvprintw(row-1,0,"This screen has %d rows and %d columns\n",row,col);
	refresh();
	getch();
	endwin();

	return 0;
}
