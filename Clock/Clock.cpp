/*
Hugo D Leyva
CS-210
09/16/2023
Program 1
This Class contains the clock parameters and functions.
*/



#include <iostream>
#include <string>
using namespace std;


/**
 * Clock class.
*/
class Clock{
    public: 
        int hour = 0; //Clock hour default 0.
        int minute = 0; //Clock minute default 0.
        int second = 0; //Clock second default 0.
        /**
         * Sets Clock hour.
         * @param set_hour Clock hour.
        */
        void setHour(int set_hour){
            this->hour = set_hour; //Set hour.
        }

        
        /**
         * Sets Clock minute.
         * @param set_minute Clock minute.
        */
        void setMinute(int set_minute){
            minute = set_minute; //Set minute.
        }

        /**
         * Sets Clock second.
         * @param set_second Clock second.
        */
        void setSecond(int set_second){
            second = set_second; //Set second.
        }
        
        /**
         * Adds Clock hour.
        */
        void addHour (){
            this->hour += 1; //Add hour.
        }

        /**
         * Adds Clock minute.
        */
        void addMinute (){
            this->minute += 1; //Add minute.
        }

        /**
         * Adds Clock second.
        */
        void addSecond (){
            this->second += 1; //Add second.
        }

        /**
         * Displays 12-hr clock time.
        */
        string twelveHourTime(){
            std::string string_hour = std::to_string(this->hour); //Setting default hour to 12 hour time.
            std::string string_minute = std::to_string(this->minute); //Convert int minute to string.
            std::string string_second = std::to_string(this->second); //Convert int second to string.

            //Logic for clock.
            if (this->second >= 60){ //If minute is greater than 60.
                this->second = this->second % 60; //Reset second count.
                this->minute = this->minute + 1; //Add hour.
                string_second = std::to_string(this->second); //Convert int second to string.
                string_minute = std::to_string(this->minute); //Convert int minute to string.
            }
           
            if (this->minute >= 60){ //If minute is greater than 60.
                this->minute = this->minute % 60; //Reset minute count.
                this->hour = this->hour + 1; //Add hour.
                string_minute = std::to_string(this->minute); //Convert int minute to string.
                string_hour = std::to_string(this->hour); //Convert int hour to string.
            }

            if (this-> hour > 12){ //If hour is greater than 12.
                string_hour = std::to_string(this->hour % 12); //Rest 12-hr time
            }

            return (string_hour  + " : " + string_minute + " : " + string_second); //Display time.
        }


        /**
         * Displays 24-hr clock time.
        */
        string twentyFourHourTime(){
            std::string string_hour = std::to_string(this->hour); //Setting default hour to 12 hour time.
            std::string string_minute = std::to_string(this->minute); //Convert int minute to string.
            std::string string_second = std::to_string(this->second); //Convert int second to string.

            //Logic for clock.
            if (this->second >= 60){ //If minute is greater than 60.
                this->second = this->second % 60; //Reset second count.
                this->minute = this->minute + 1; //Add hour.
                string_second = std::to_string(this->second); //Convert int second to string.
                string_minute = std::to_string(this->minute); //Convert int minute to string.

            }
           
            if (this->minute >= 60){ //If minute is greater than 60.
                this->minute = this->minute % 60; //Reset minute count.
                this->hour = this->hour + 1; //Adding hour.
                string_minute = std::to_string(this->minute); //Convert int minute to string.
                string_hour = std::to_string(this->hour); //Convert int hour to string.
            }

            if (this-> hour >= 24){ //If hour is greater than 12.
                string_hour = std::to_string(this->hour % 24); //Reset 24-hr time
            }

            return (string_hour  + " : " + string_minute + " : " + string_second); //Display time.
        }

};

