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

	int getHour()
	{
		return hour;
	}

	int getMin()
	{
		return min;
	}

	int getSec()
	{
		return sec;
	}
};

void printWatch()
{
	for (int i = 0; i < 10;i++)
	{
		Clock clock(5, 5, i);
		cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec()<<endl;

	}
	
}

int main()
{
	printWatch();
	return 0;
}

//class Clock
//{
//private:
//	int hour;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hour = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHour()
//	{
//		return hour;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(5, 5, 6);
//	cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec();
//
//	return 0;
//}

//class Clock
//{
//private:
//	int hour;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hour = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHour()
//	{
//		return hour;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(15, 4, 8);
//	cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec();
//
//	return 0;
//}

//class Clock
//{
//private:
//	int hour;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hour = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHour()
//	{
//		return hour;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(5, 5, 50);
//		cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << clock.getSec();
//
//	return 0;
//}

//class Clock
//{
//private:
//	int hours;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hours = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHour()
//	{
//		return hours;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(8, 15, 3);
//	cout << setfill('0') << setw(2) << clock.getHour() << ":" << setfill('0') << setw(2) << clock.getMin() << ":" << setfill('0') << setw(2) << clock.getSec();
//
//	return 0;
//}

//class Clock
//{
//private:
//	int hours;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hours = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHours()
//	{
//		return hours;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(4, 14, 14);
//	cout << setfill('0') << setw(2) << clock.getHours()<< ":" << setfill('0') << setw(2)<< clock.getMin() <<":"<< setfill('0') << setw(2)  << clock.getSec();
//	system("pause");
//	return 0;
//}

//class Clock
//{
//private:
//	int hours;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hours = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHours()
//	{
//		return hours;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(15, 15, 15);
//	cout << clock.getHours() << ":" << clock.getMin() << ":" << clock.getSec() << endl;
//	
//	return 0;
//}


//class Clock
//{
//private:
//	int hours;
//	int min;
//	int sec;
//
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hours = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHours()
//	{
//		return hours;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(17, 50, 15);
//	cout << clock.getHours() << ":" << clock.getMin() << ":" << clock.getSec() << endl;
//
//	return 0;
//}


//class Clock
//{
//private:
//	int hours;
//	int sec;
//	int min;
//public:
//	Clock(int h, int m, int s)
//	{
//		this->hours = h;
//		this->min = m;
//		this->sec = s;
//	}
//
//	int getHours()
//	{
//		return hours;
//	}
//
//	int getMin()
//	{
//		return min;
//	}
//
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(16,28,30);
//	cout << clock.getHours() << ":" << clock.getMin() << ":" << clock.getSec() << endl;
//
//	return 0;
//}


//class Clock
//{
//private:
//	int h;
//	int min;
//	int sec;
//
//public:
//	Clock(int hours, int min, int sec)
//	{
//		this->h = hours;
//		this->min = min;
//		this->sec = sec;
//	}
//	
//	int getHours()
//	{
//		return h;
//	}
//	int getMin()
//	{
//		return min;
//	}
//	int getSec()
//	{
//		return sec;
//	}
//};
//
//int main()
//{
//	Clock clock(16, 8, 30);
//	cout << clock.getHours() << " " << clock.getMin() << " " << clock.getSec() << endl;
//
//	return 0;
//
//}
