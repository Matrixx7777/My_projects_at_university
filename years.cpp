#include <iostream>

using namespace std;

int main()
{
    int month;
    int year;

    cout << "Enter months from 1 to 12: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if(month >= 1 || month <=12){

        if(year%100==0){
            cout << "\nThe selected year is divisible by 100\n";

            if(year%400 == 0) {
                cout << "This is a leap year\n";

                if(month == 2){
                    cout << "February has 29 days a month\n" <<
                        "Year has 366 day";
                }else {
                    cout << "Other months have 30 days or 31 days\n" <<
                        "Year has 366 day";
                }
            }

            else {
                cout << "This isn't a leap year\n";

                if(month == 2){
                    cout << "February has 28 days a month\n" <<
                        "Year has 365 day";
                }else {
                    cout << "Other months have 30 days or 31 days\n" <<
                        "Year has 365 day";
                }
            }

        }else if(year%100 != 0) {
            cout << "The selected year is not divisible by 100\n";

            if(year%4 == 0){
                cout << "This is a leap year\n";

                if(month == 2){
                    cout << "February has 29 days a month\n" <<
                        "Year has 366 day";
                }else {
                    cout << "Other months have 30 days or 31 days\n" <<
                        "Year has 366 day";
                }

            }else{
                cout << "This isn't a leap year\n";

                if(month == 2){
                    cout << "February has 28 days a month\n" <<
                        "Year has 365 day";
                }else {
                    cout << "Other months have 30 days or 31 days\n" <<
                        "Year has 365 day";
                }
            }
        }

        }else{
            cout << "You selected wrong month";
        }

        return 0;
    }
