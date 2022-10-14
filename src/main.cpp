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


#define VERSION "Scalc v1.4.5"
#define USAGE "\
Usage: scalc [--bedtime] [--wakeup] [-h] [--help] [--version]\n\
Options: --bedtime (Calculates the Bedtime) --wakeup (Calculates the Wakeup time) --help or -h (Prints this exact messaage) --version (Prints out the version of this Scalc binary)"
#define COPYRIGHT "Copyright (c) 2021-2022 winexe0 aryan.chandna@icloud.com"
#include <iostream>
#include <string>
#include "bedtime.h"
#include "wakeup.h"
#include "vars.h"
using namespace std;
int main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i) {
		string arg = argv[i];
		if (arg == "--help" || arg == "-h") {
			cout << VERSION << endl;
			cout << USAGE << endl;
			exit(0);
		}
		if (arg == "--version") {
			cout << VERSION << endl;
			cout << COPYRIGHT << endl;
			exit(0);
		}
		if (arg == "--bedtime") {
			cout << "This program is free software; you can redistribute it and/or modify\n"
				"it under the terms of the GNU General Public License version 3 as published by\n"
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
			bedtimefn();
			exit(0);
		}
		if (arg == "--wakeup") {
			cout << "This program is free software; you can redistribute it and/or modify\n"
				"it under the terms of the GNU General Public License version 3 as published by\n"
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
			wakeup();
			exit(0);
		}
		else {
			cout << VERSION << endl;
			cout << "Invalid argument" << endl;
			cout << USAGE << endl;
			exit(0);
		}
	}
	string timetype;
	cout << "This program is free software; you can redistribute it and/or modify\n"
			"it under the terms of the GNU General Public License version 3 as published by\n"
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
	cout << "Do you want to calcuate the bedtime or the wakeup time. Bedtime or Wakeup?" << endl;
	cin >> timetype;
	if (timetype == "Bedtime" || timetype == "bedtime") {
		bedtimefn();
	}
	if (timetype == "Wakeuptime" || timetype == "wakeuptime" || timetype == "wakeup" || timetype == "Wakeup") {
		wakeup();
	}
	return 0;
}

