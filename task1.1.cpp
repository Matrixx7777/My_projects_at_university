#include <iostream>

using namespace std;

int main()
{

    int moneyBrutto, moneyNetto;

    cout << "How much do you earn in brutto ?";
    cin >> moneyBrutto;
    moneyNetto = (moneyBrutto * 80)/100;


    cout << "Your earn in netto equals "<<moneyNetto;

    return 0;
}
