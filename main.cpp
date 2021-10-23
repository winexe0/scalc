/*
 * main.cpp
 * 
 * Copyright 2021 winexe0 <aryan.chandna@icloud.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string timetype;
	int age;
	int wakeuptime;
	int wakeuptime24hr;
	int bedtime;
	int bedtimeforwake;
	int bedtime24hr;
	int wakeuptime2;
	cout << "This program is free software; you can redistribute it and/or modify\n"
			"it under the terms of the GNU General Public License version 2 as published by\n"
			"the Free Software Foundation.\n"
			"\n"
			"This program is distributed in the hope that it will be useful,\n"
			"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
			"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
			"GNU General Public License for more details.\n"
			"\n"
			"You should have received a copy of the GNU General Public License\n"
			"along with this program; if not, write to the Free Software\n"
			"Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA\n\n" << endl;
	cout << "Do you want to calcuate the bedtime or the wakeup time. Bedime or Wakeup?" << endl;
	cin >> timetype;
	if (timetype == "Bedtime" || timetype == "bedtime") {
		cout << "What is your age? We do not support ages under 1. Answer in numbers." << endl;
		cin >> age;
		cout << "What is the wakeup time. Answer in format of ex. '9'" << endl;
		cin >> wakeuptime;
		if (age <= 12 && age >= 6) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 9;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 5 && age >= 3) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 10;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age == 1 || age == 2) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 11;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 18 && age >= 13) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 8;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 60 && age > 18) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 7;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 64 && age >= 61) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 7;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age >= 65) {
			wakeuptime24hr = wakeuptime + 12;
			bedtime = wakeuptime24hr - 7;
			cout << "You should sleep by ";
			cout << bedtime;
			cout << "pm. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
	}
	if (timetype == "Wakeuptime" || timetype == "wakeuptime") {
		cout << "What is your age? We do not support ages under 1. Answer in numbers." << endl;
		cin >> age;
		cout << "What is the bedtime time. Answer in format of ex. '9'" << endl;
		cin >> bedtimeforwake;
		if (age <= 12 && age >= 6) {
			bedtime24hr = bedtimeforwake + 12;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 5 && age >= 3) {
			bedtime24hr = bedtimeforwake + 13;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age == 1 || age == 2) {
			bedtime24hr = bedtimeforwake + 14;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 18 && age >= 13) {
			bedtime24hr = bedtimeforwake + 10;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 60 && age > 18) {
			bedtime24hr = bedtimeforwake + 7;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up from ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age <= 64 && age >= 61) {
			bedtime24hr = bedtimeforwake + 9;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
		if (age >= 65) {
			bedtime24hr = bedtimeforwake + 8;
			wakeuptime2 = bedtime24hr - 12;
			cout << "You should wake up by ";
			cout << wakeuptime2;
			cout << "am. Press ENTER to exit.";
			cin.get();
			cin.ignore();
		}
	}
	return 0;
}

