#include <iostream>
#include <iomanip>

using namespace std;

double convertToMPH(int minutes, int seconds);

double convertToMPH(double kph);

int main() {

    int minutes = 0, seconds = 0;
    double kph = 0.0;

    cout << "Enter a running pace in minutes and seconds: " << endl;
    cout << "minutes: ";
    cin >> minutes;
    cout << "seconds: ";
    cin >> seconds;

    convertToMPH(minutes, seconds);

    cout << "Enter a running pace in kph:" << endl;
    cin >> kph;

    convertToMPH(kph);

    return 0;
}

double convertToMPH(int minutes, int seconds){
    double miles = 0;
    miles = (3600.0 / ((minutes * 60.0) + seconds));
    cout << minutes << ":" << seconds << " to " << miles << " mph." << endl;
    return 0; 
}

double convertToMPH(double kph){
    double miles = 0;
    miles = (kph / 1.61);
    cout << kph << " kph to " << miles << " mph" << endl;
    return 0;
}