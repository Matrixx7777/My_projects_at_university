#include <iostream>

using namespace std;

int main()
{
    int ticketA = 15;
    int ticketB = 12;
    int ticketC = 9;
    int a,b,c,result;

    cout << "How many tickets A have been sold?";
    cin >> a;
    cout << "How many tickets B have been sold?";
    cin >> b;
    cout << "How many tickets C have been sold?";
    cin >> c;

    result = (a * ticketA) + (b * ticketB) +(c * ticketC);

    cout << "The price of all tickets sold is "<< result;

    return 0;
}
