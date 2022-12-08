#include <iostream>
#include <string>
#include "bedtime.h"
#include "wakeup.h"
#include "vars.h"
#include "notany.h"
using namespace std;
void notany() {
	string timetype;
	cout << "Unrecognized Option. Do you want to calcuate the bedtime or the wakeup time. Bedtime or Wakeup?" << endl;
	cin >> timetype;
	if (timetype == "Bedtime" || timetype == "bedtime") {
		bedtimefn();
		exit(0);
	}
	if (timetype == "Wakeuptime" || timetype == "wakeuptime" || timetype == "wakeup" || timetype == "Wakeup") {
		wakeup();
		exit(0);
	}
	else {
		notany();
	}
}