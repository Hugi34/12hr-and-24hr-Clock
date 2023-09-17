// C++ program to illustrate the digital
// clock starting from the entered time
  
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#include "./Clock/Clock.cpp"
  
// Driver Code
int main()
{
    Clock clock;
    clock.displayTime();
}