#include "Time_Conversion.h"

string timeConversion(string s) {
	/*
	 * Write your code here.
	 */

	//stringstream str(s);
	string cvt; // converted string
	if (s == "12:00:00AM")
		cvt = "00:00:00";
	else if (s == "12:00:00PM")
		cvt = "12:00:00";
	else {
		int idx = (int)s.find("M") - 1;
		string specific = s.substr(idx, 2);

			cvt = s.substr(0, idx);

			int hour = stoi(cvt.substr(0, 2));

			if (specific == "PM") {
				if (hour != 12) hour += 12;
				cvt.replace(0, 2, to_string(hour));
			}
			else if (hour == 12) {
				cvt.replace(0, 2, "00");
			}
	}

	return cvt;
}