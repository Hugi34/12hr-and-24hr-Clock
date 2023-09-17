#include <iostream>
#include <string>
#include "Clock.cpp"
using namespace std;

int setTime(){
    Clock clock;
    int hour, minute, second;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> minute;
    cout << "Enter second: ";
    cin >> second;
    clock.hour = hour;
    clock.minute = minute;
    clock.second = second;
    return clock;};