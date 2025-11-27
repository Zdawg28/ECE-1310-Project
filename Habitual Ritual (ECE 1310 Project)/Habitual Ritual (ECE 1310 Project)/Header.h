#pragma once 

#include <iostream> 

#include <ctime> 

#include <vector> 



using namespace std;



int datechecker()

{

    time_t now = time(0);            // get current time 

    tm* local = localtime(&now);     // convert to local time structure 

    vector<string> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    vector<string> months = { "January","Februay", "March", "April", "May", "June","July",

        "August", "September", "October,", "November", "December" };

    class DateChecker {

    public:

        string weekday;

        string month;

        int year;

        int date;

    };



    DateChecker myObj;

    int weekday = local->tm_wday;

    int month = local->tm_mon;



    myObj.weekday = days[weekday];  // 0 = Sunday, 1 = Monday, ... 

    myObj.date = local->tm_mday;  // 1–31 

    myObj.month = months[month]; // 0–11 → convert to 1–12 

    myObj.year = local->tm_year + 1900;



    cout << "Weekday: " << myObj.weekday << endl;

    cout << "Date   : " << myObj.date << endl;

    cout << "Month  : " << myObj.month << endl;

    cout << "Year   : " << myObj.year << endl;



    return 0;

}
