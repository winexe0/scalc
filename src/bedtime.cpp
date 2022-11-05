#include <iostream>
#include "bedtime.h"
#include "vars.h"
using namespace std;
int bedtimefn() {
	string timetype;
	unsigned int age;
	unsigned int wakeuphour;
	unsigned int wakeuphour24hr;
	unsigned int bedtime;
	unsigned int bedtimehour;
	unsigned int bedtimeminutes;
	unsigned int bedtime24hr;
	unsigned int wakeuphour2;
	unsigned int wakeupminutes;
	cout << "What is your age? We do not support ages under 1. Answer in numbers." << endl;
	cin >> age;
	cout << "In what hour do you want to wake up. Answer in format of ex. '9'" << endl;
	cin >> wakeuphour;
	cout << "In what minutes do you want to wake up. Answer in the range of 10-60" << endl;
	cin >> wakeupminutes;
	if (age <= 12 && age >= 6) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 9;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 5 && age >= 3) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 10;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age == 1 || age == 2) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 11;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 18 && age >= 13) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 8;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 60 && age > 18) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 7;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 64 && age >= 61) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 7;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age >= 65) {
		wakeuphour24hr = wakeuphour + 12;
		bedtime = wakeuphour24hr - 7;
		cout << "You should sleep by ";
		cout << bedtime;
		cout << ":";
		cout << wakeupminutes;
		cout << " pm. Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	return 0;
}