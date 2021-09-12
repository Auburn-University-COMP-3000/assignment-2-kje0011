#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int yearIn);

int getCenturyValue(int yearIn);
// calculates the century 

int getYearValue(int yearIn);
// calulcates the year

int getMonthValue(int monthIn, int yearIn);
// returns the month value

int main()
{

    // variables
    int month =0, 
        day = 0, 
        year = 0,
        sum = 0,
        dayOfWeek = 0;
    string dayString = "";


    // input
    cout << "Enter a month:" << endl;
    cin >> month;

    while (month < 1 || month > 12){
        cout << "invalid month" << endl;
        cin >> month;
    }

    cout << "Enter a day:" << endl;
    cin >> day;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        while (day < 1 || day > 30){
        cout << "invalid day" << endl;
        cin >> day;
        }
    }
    else if (month == 2){
        while(day<1 || day >29){
            cout << "invalid day" << endl;
            cin >> day;
        }
    }
    else {
        while (day < 1 || day > 31) {
            cout << "invalid day" << endl;
            cin >> day;
        }
    }

    cout << "Enter a year" << endl; 
    cin >> year;


sum = day + getMonthValue(month,year) + getYearValue(year) + getCenturyValue(year);
	dayOfWeek = sum % 7;
	
	// Find corresponding day name
	switch(dayOfWeek) {

        case 0: 
           dayString = "Sunday"; 
           break; 

        case 1:
            dayString = "Monday";
            break;

        case 2:
            dayString = "Tuesday";
            break;

        case 3:
            dayString = "Wednesday";
            break;

        case 4:
            dayString = "Thursday";
            break;

        case 5:
            dayString = "Friday";
            break;

        case 6:
            dayString = "Saturday";
            break;
    }

    // output
    cout << "The day of the week is " << dayString;
    return 0; 

}

bool isLeapYear(int year)
{

    return ((year % 400 == 0 || year % 4 == 0 && year % 100 != 0));

    
}

int getCenturyValue(int year)
{
    int cent = 0, centValue = 0;
    cent = year/100;
    centValue = (3 - (cent % 4)) *2;
    return centValue;

}

int getYearValue(int year)
{
    int yearValue = 0, yr= 0;
    yr = (year%100)/4;
    yearValue = yr + year%100;
    return yearValue;
}

int getMonthValue(int month, int year)
{
    switch(month) {
		case 1:
			if (isLeapYear(year))
				return 6;
			else
				return 0;
		case 2:
			if (isLeapYear(year))
				return 2;
			else
				return 3;
		case 3:
			return 3;
		case 4:
			return 6;
		case 5:
			return 1;
		case 6:
			return 4;
		case 7:
			return 6;
		case 8:
			return 2;
		case 9:
			return 5;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 5;
	}			
            
    return 0;
}




