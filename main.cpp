/*
Hugo D Leyva
CS-210
09/16/2023
Program 1
This Program will take a time from the user and display a clock (12-hr and 24hr) that allows
 the user to add hours, minutes, and seconds to the clock.
*/




#include <iostream>
#include <stdio.h>
using namespace std;
#include "./Clock/Clock.cpp"

int main() {
    Clock clock; //Create Clock object.

    //Pre loop prompt user for time.
    std::cout << "Enter hour: "; //Prompt user for hour.
    int hour; //Variable to store hour.
    std :: cin >> hour; //Get hour from user.
    clock.setHour(hour); //Set hour.

    std::cout << "Enter Minute: "; //Prompt user for minute.
    int minute; //Variable to store minute.
    std :: cin >> minute; //Get minute from user.
    clock.setMinute(minute); //Set minute.

    std::cout << "Enter Second: "; //Prompt user for second.
    int second; //Variable to store second.
    std :: cin >> second; //Get second from user.
    clock.setSecond(second); //Set second.


    while (true){ //While loop to display clock and options.



    //Displaying twelve hour clock and twenty four hour clock.
    std::cout << "*************       *************" << endl; //Display asterisks.
    std::cout << "* 12-Hour *         * 24-Hour *" << endl; //Display twelve hour and twenty-four hour.
    std::cout << "* " + clock.twelveHourTime() + " *" + "       * " + clock.twentyFourHourTime() + " *" << endl; //Display twelve  and twenty-four hour time.
    std::cout << "*************       *************" << endl; //Display asterisks.


    //Displaying options for user.
    std::cout << "*************" << endl; //Display asterisks.
    std::cout << "* 1. Add Hour *" << endl; //Display add hour option.
    std::cout << "* 2. Add Minute *" << endl; //Display add minute option.
    std::cout << "* 3. Add Second *" << endl; //Display add second option.
    std::cout << "* 4. Exit *" << endl; //Display exit option.
    std::cout << "*************" << endl; //Display asterisks.
    
    int input; //Variable to store input.
    std::cin >> input; //Get input from user.

    //Switch statement to determine what to do with input.
    switch (input){
        case 1: //If input is 1.
            clock.addHour(); //Add hour.
            break; //Break from switch statement.
        case 2: //If input is 2.
            clock.addMinute(); //Add minute.
            break; //Break from switch statement.
        case 3: //If input is 3.
            clock.addSecond(); //Add second.
            break; //Break from switch statement.
        case 4: //If input is 4.
            exit(0); //Exit program.
        default: //If input is not 1, 2, 3, or 4.
            std::cout << "Invalid input." << endl; //Display invalid input.
            break; //Break from switch statement.
            }
    }


    return 0; //Return 0 to end program.
}