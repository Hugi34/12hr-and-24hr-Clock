#include <iostream>
#include <stdio.h>
using namespace std;
#include "./Clock/Clock.cpp"

int main() {
    Clock clock; //Create Clock object.

    //Prompting user for hour.
    std::cout << "Enter hour: "; //Prompt user for hour.
    int hour; //Variable to store hour.
    std :: cin >> hour; //Get hour from user.
    clock.setHour(hour); //Set hour.

    //Prompting user for minute.
    std::cout << "Enter Minute: "; //Prompt user for minute.
    int minute; //Variable to store minute.
    std :: cin >> minute; //Get minute from user.
    clock.setMinute(minute); //Set minute.

    //Prompting user for second.
    std::cout << "Enter Second: "; //Prompt user for second.
    int second; //Variable to store second.
    std :: cin >> second; //Get second from user.
    clock.setSecond(second); //Set second.


    bool run = true; //Parameter to run while loop.
    while (run = true){



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
            run = false; //Set run to false.
            break; //Break from switch statement.
        default: //If input is not 1, 2, 3, or 4.
            std::cout << "Invalid input." << endl; //Display invalid input.
            break; //Break from switch statement.
            }
    }


    return 0;
}