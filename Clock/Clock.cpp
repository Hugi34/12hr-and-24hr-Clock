#include <iostream>
#include <string>
using namespace std;


/**
 * Clock class
*/
class Clock{
    public: 
        int hour = 0; //Clock hour.
        int minute = 0; //Clock minute.
        int second = 0; //Clock second.
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
         * Displays Clock time.
        */
        string twelveHourTime(){
            std::string string_hour = std::to_string(this->hour); //Setting default hour to 12 hour time.
            std::string string_minute = std::to_string(this->minute); //Convert int minute to string.
            std::string string_second = std::to_string(this->second); //Convert int second to string.

            //Logic for clock.
            if (this->second >= 60){ //If minute is greater than 60.
                this->second = this->second - 60; //Reseting minute.
                this->minute = this->minute + 1; //Adding hour.
                string_second = std::to_string(this->second);
                string_minute = std::to_string(this->minute);
            }
           
            if (this->minute >= 60){ //If minute is greater than 60.
                this->minute = this->minute - 60; //Reseting minute.
                this->hour = this->hour + 1; //Adding hour.
                string_minute = std::to_string(this->minute);
                string_hour = std::to_string(this->hour);
            }

            if (this-> hour > 12){ //If hour is greater than 12.
                string_hour = std::to_string(this->hour % 12); //Set hour to 12 hour time.
            }

            return (string_hour  + " : " + string_minute + " : " + string_second); //Display time.
        }

        string twentyFourHourTime(){
            std::string string_hour = std::to_string(this->hour); //Setting default hour to 12 hour time.
            std::string string_minute = std::to_string(this->minute); //Convert int minute to string.
            std::string string_second = std::to_string(this->second); //Convert int second to string.

            //Logic for clock.
            if (this->second >= 60){ //If minute is greater than 60.
                this->second = this->second - 60; //Reseting minute.
                this->minute = this->minute + 1; //Adding hour.
                string_second = std::to_string(this->second);
                string_minute = std::to_string(this->minute);

            }
           
            if (this->minute >= 60){ //If minute is greater than 60.
                this->minute = this->minute - 60; //Reseting minute.
                this->hour = this->hour + 1; //Adding hour.
                string_minute = std::to_string(this->minute);
                string_hour = std::to_string(this->hour);
            }

            if (this-> hour >= 24){ //If hour is greater than 12.
                string_hour = std::to_string(this->hour % 24); //Set hour to 12 hour time.
            }

            return (string_hour  + " : " + string_minute + " : " + string_second); //Display time.
        }

};

