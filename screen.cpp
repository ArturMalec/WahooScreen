#include <iostream>
#include "screen.h"

void Screen::show_data()
{
	elements_one e1;
	elements_two e2;
	if (data < 1)
		data = 1;
	else if (data > 5)
		data = 5;

	if (data2 < 1)
		data2 = 1;
	else if (data2 > 4)
		data2 = 4;

	if (page < 1)
		page = 1;
	else if (page > 2)
		page = 1;

	if (page == 1)
	{
		switch (data)
		{
		case 1 :
		{
		std::cout << ' ' << ' ' << ' ' << e1.speed << std::endl;
		break;
		}
		case 2 :
		{
		std::cout << ' ' << ' ' << ' ' << e1.speed << std::endl;
		std::cout << ' ' << ' ' << ' ' << e1.distance << std::endl;
		break;
		}
		case 3:
		{
		std::cout << ' ' << ' ' << ' ' << e1.speed << std::endl;
		std::cout << e1.distance << "\t" << e1.time << std::endl;
		std::cout << e1.HR << "\t" << e1.cadence << std::endl;
		break;
		}
		case 4:
		{
		std::cout << ' ' << ' ' << ' ' << e1.speed << std::endl;
		std::cout << e1.distance << "\t" << e1.time << std::endl;
		std::cout << e1.HR << "\t" << e1.cadence << std::endl;
		std::cout << e1.elevation_gain << "\t" << e1.grade << std::endl;
		break;
		}
		case 5:
		{
		std::cout << ' ' << ' ' << ' ' << e1.speed << std::endl;
		std::cout << e1.distance << "\t" << e1.time << std::endl;
		std::cout << e1.HR << "\t" << e1.cadence << std::endl;
		std::cout << e1.elevation_gain << "\t" << e1.grade << std::endl;
		std::cout << e1.intervals << "\t" << e1.int_time << std::endl;
		break;
		}
		}
	}
	else if (page == 2)
	{
		switch (data2)
		{
		case 1:
		{
			std::cout << ' ' << ' ' << ' ' << e2.clock << std::endl;
			break;
		}
		case 2:
		{
			std::cout << ' ' << ' ' << ' ' << e2.clock << std::endl;
			std::cout << ' ' << ' ' << ' ' << e2.temp << std::endl;
			break;
		}
		case 3:
		{
			std::cout << ' ' << ' ' << ' ' << e2.clock << std::endl;
			std::cout << e2.temp << "\t" << e2.elevation << std::endl;
			std::cout << e2.max_kph << "\t" << e2.avg_hr << std::endl;
			break;
		}
		case 4:
		{
			std::cout << ' ' << ' ' << ' ' << e2.clock << std::endl;
			std::cout << e2.temp << "\t" << e2.elevation << std::endl;
			std::cout << e2.max_kph << "\t" << e2.avg_hr << std::endl;
			std::cout << e2.max_elev << "\t" << e2.calories << std::endl;
			break;
		}
		}
	}
}

void Screen::button_more()
{
	if (page == 1)
		data++;
	else if (page == 2)
		data2++;
}

void Screen::button_less()
{
	if (page == 1)
		data--;
	else if (page == 2)
		data2--;
}

