#include <iostream>
#include "wakeup.h"
#include "vars.h"
using namespace std;
int wakeup() {
	string timetype;
	string period;
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
	cout << "In what hour do you want to go to bed. Answer in format of ex. '9'" << endl;
	cin >> bedtimehour;
	cout << "In what minutes do you want to go to bed. Answer in the range of 10-60" << endl;
	cin >> bedtimeminutes;
	if (age <= 12 && age >= 6) {
		bedtime24hr = bedtimehour + 12;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 5 && age >= 3) {
		bedtime24hr = bedtimehour + 13;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age == 1 || age == 2) {
		bedtime24hr = bedtimehour + 14;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.ignore();
	}
	if (age <= 18 && age >= 13) {
		bedtime24hr = bedtimehour + 10;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 60 && age > 18) {
		bedtime24hr = bedtimehour + 7;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age <= 64 && age >= 61) {
		bedtime24hr = bedtimehour + 9;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	if (age >= 65) {
		bedtime24hr = bedtimehour + 8;
		wakeuphour2 = bedtime24hr - 12;
		if (wakeuphour2 > 12) {
			wakeuphour2 = wakeuphour2 - 12;
			period = "pm.";
		}
		else {
			period = "am.";
		}
		cout << "You should wake up by ";
		cout << wakeuphour2;
		cout << ":";
		cout << bedtimeminutes;
		cout << " " + period + " Press ENTER to exit.";
		cin.get();
		cin.ignore();
	}
	return 0;
}