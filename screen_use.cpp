#include <conio.h>
#include <windows.h>
#include "screen.h"

const int KEY_UP = 72;
const int KEY_DOWN = 80;
const int KEY_PAGE = 77;

int main()
{
	Screen * object = new Screen;
	object->show_data();
	int c = false;

	while (true)
	{
		c = false;
		switch ((c=getch()))
		{
		case KEY_UP:
			system("cls");
			object->button_less();
			object->show_data();
			break;
		case KEY_DOWN:
			system ("cls");
			object->button_more();
			object->show_data();
			break;
		case KEY_PAGE:
			system ("cls");
			object->button_page();
			object->show_data();
			break;
		}
	}
	delete object;
	return 0;
}

