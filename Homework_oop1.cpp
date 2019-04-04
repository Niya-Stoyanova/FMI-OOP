#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Clock
{


private:
	int hour;
	int min;
	int sec;

public:
	const int HOUR = 11;
	const int MIN = 59;
	const int SEC = 59;

	Clock(int h, int m, int s)
	{
		this->hour = h;
		this->min = m;
		this->sec = s;
	}

	Clock()
	{

	}

	int getHour()
	{
		return hour;
	}
	void setHour(int value)
	{
		hour = value;
	}

	int getMin()
	{
		return min;
	}
	void setMin(int value)
	{
		min = value;
	}

	int getSec()
	{
		return sec;
	}

	void setSec(int value)
	{
		sec = value;
	}
};

void printWatch()
{

	Clock clock;
	for (int i = 0; i <= clock.HOUR; i++)
	{
		clock.setHour(i);
		for (int min = 0; min <= clock.MIN; min++)
		{
			clock.setMin(min);
			for (int sec = 0; sec <= clock.SEC; sec++)
			{
				clock.setSec(sec);
				cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec() << endl;
			}
		}
	}
}

int main()
{

	printWatch();
	return 0;
}
