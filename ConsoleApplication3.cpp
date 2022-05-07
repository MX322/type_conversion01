#include <iostream>
using namespace std;

int ton()
{
	double ton;
	
	cout << "enter count : ";
	cin >> ton;

	int tonNum = ton;

	double kg = (ton - tonNum) * 1000;

	double g = kg*10;


	cout << "ton " << tonNum << "\n";
	cout << "kg  " << (int)kg << "\n";
	cout << "g " << (int)g % 10 << "\n\n";
	
	return 0;
}


int time()
{
	int val;

	cout << "enter sec : ";
	cin >> val;

	int day = val / 86400;
	int hour = (val - (day * 86400)) / 3600;
	int min = (val - ((day * 86400) + (hour * 3600))) / 60;
	int sec = val - ((day * 86400) + (hour * 3600) + (min * 60));

	cout << "days : " << day << "\n";
	cout << "hours : " << hour << "\n";
	cout << "minutes : " << min << "\n";
	cout << "seconds : " << sec << "\n\n";

	return 0;
}


int phone()
{
	double price = 0.15;

	int inHours;
	int inMinutes;
	int inSeconds;

	int outHours;
	int outMinutes;
	int outSeconds;

	cout << "enter what hour the phone conversation started : ";
	cin >> inHours;
	cout << "enter what minutes the phone conversation started : ";
	cin >> inMinutes;
	cout << "enter what seconds the phone conversation started : ";
	cin >> inSeconds;

	cout << "enter what hour the phone conversation finished : ";
	cin >> outHours;
	cout << "enter what minutes the phone conversation finished : ";
	cin >> outMinutes;
	cout << "enter what seconds the phone conversation finished : ";
	cin >> outSeconds;


	int hours = outHours - inHours;
	int minutes = outMinutes + inMinutes;
	int seconds = outSeconds + inSeconds;

	double payHours = (hours / 60) * price;
	double payMinutes = minutes * price;
	double paySeconds = (seconds * 60) * price;

	cout << "you have to pay : " << payHours + payMinutes + paySeconds << "\n\n";
	
	return 0;

}


int main()
{
	ton();
	time();
	phone();
}