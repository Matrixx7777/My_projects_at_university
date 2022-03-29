#include <iostream>

using namespace std;

double salary(double money, double hour){

    return (money * hour);
}

int main()
{
    double money,hour,result;

    cout << "How much do you earn money for hour ?";
    cin >> money;
    cout << "How many hours do you work ? ";
    cin >> hour;

    result = salary(money,hour);
    cout << "\nYour salary in a month is equals " << result;

    return 0;
}

