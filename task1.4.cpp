#include <iostream>

using namespace std;

int main()
{
    int ticketForAduld = 10;
    int ticketForChild = 6;
    int numberTicketForAduld = 382;
    int numberTicketForChild = 127;
    double totalMoneyBrutto;
    double amountPaid = 3665.60;
    double restOfTotalMoney;

    totalMoneyBrutto = (ticketForAduld * numberTicketForAduld) + (ticketForChild * numberTicketForChild);

    cout << "Ticket for a adult cost " << ticketForAduld << " PLN\n";
    cout << "Ticket for a child cost " << ticketForChild << " PLN\n";
    cout << "We have " << numberTicketForAduld << " tickets sold for adults\n";
    cout << "We have " << numberTicketForChild << " tickets sold for children\n";
    cout << "Current we have total " <<  totalMoneyBrutto << " PLN\n";
    cout << "We have to paid " << amountPaid << " PLN\n";

    restOfTotalMoney = totalMoneyBrutto - amountPaid;

    cout << "We have " << restOfTotalMoney << " PLN of the rest";


    return 0;
}
