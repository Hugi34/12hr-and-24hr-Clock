#include <iostream>
#include <stdio.h>
using namespace std;
#include "./Clock/Clock.cpp"

int main() {
    Clock clock; //Create Clock object.
    std::cout << "*************" << endl;
    std::cout << * << clock.twelveHourTime() << * << endl;

    return 0;
}