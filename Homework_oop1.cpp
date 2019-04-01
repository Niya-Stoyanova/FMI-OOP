#include <iostream>
#include <iomanip>
using namespace std;

class Clock
{
private:
	int hour;
	int min;
	int sec;

public:
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
	for (int i = 0; i < 10;i++)
	{
		
		Clock clock;
		clock.setHour(15);
		clock.setMin(56);
		clock.setSec(i);
		clock.setMin(59);
		cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec()<<endl;

	}
	
}

int main()
{
	printWatch();
	return 0;
}

