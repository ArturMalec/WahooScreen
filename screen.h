#ifndef SCREEN_H_
#define SCREEN_H_
#include <string>

//Wahoo Elemnt Bolt main screen//

//------------------------------------------------
using std::string;

class Screen
{
public:
	Screen(unsigned short d = 2, unsigned short p = 1, unsigned short d2 = 4) : data(d), page(p), data2(d2) {}
	void show_data();
	void button_more();
	void button_less();
	void button_page() {page++;}
	virtual ~Screen() {}
private:
	struct elements_one
	{
		string speed = "0.0 km/h";
		string distance = "0.0 km";
		string time = "00:00m";
		string HR = "0 BPM";
		string cadence = "0 RPM";
		string elevation_gain = "0";
		string grade = "0.0%";
		string intervals = "0";
		string int_time = "00:00m";
	};

	struct elements_two
	{
		string clock = "18:41";
		string temp = "21C";
		string elevation = "0";
		string max_kph = "0.0";
		string avg_hr = "0";
		string max_elev = "0";
		string calories = "0";
	};
	unsigned short data;
	unsigned short page;
	unsigned short data2;
};
//--------------------------------------------------

#endif /* SCREEN_H_ */

