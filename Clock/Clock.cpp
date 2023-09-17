#include <iostream>
using namespace std;


/**
 * Clock class
*/
class Clock{
    public: 
        int hour; //Clock hour.
        int minute; //Clock minute.
        int second; //Clock second.

        /**
         * Sets Clock hour.
         * @param set_hour Clock hour.
        */
        void Clock::setHour(int set_hour){
            hour = set_hour; //Set hour.
        }

        
        /**
         * Sets Clock minute.
         * @param set_minute Clock minute.
        */
        void Clock::setMinute(int set_minute){
            minute = set_minute; //Set minute.
        }

        /**
         * Sets Clock second.
         * @param set_second Clock second.
        */
        void Clock::setSecond(int set_second){
            second = set_second; //Set second.
        }

        /**
         * Displays Clock time.
        */
        int Clock::displayTime(){
            cout << hour << ":" << minute << ":" << second << endl; //Display time.
        }

};

