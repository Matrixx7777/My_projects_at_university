#include <iostream>

using namespace std;

int main()
{
    double a,b,x, result;
    cout << "Podaj a, b, x:" << endl;
    cin >> a >> b >> x;

    if(a != 0){
        cout << "ax + b = 0" << endl;
        cout << "\n-(b/a)" << endl;
        result = -(b/a);
        cout << "\nWynik = " << result << "\noznaczone" << endl;
    }
    else if(a == 0 && b == 0){
            result = 0 * x;
        cout << "0 * x = " << result << "\nKazda liczba - R" << "\ntozsamosciowe" << endl;

    }
    else if(a == 0 && b != 0){
        result = 0 * x + b;
        cout << "0 * x + b = 0" << " Brak rozwi¹zan - 0/" << "\nsprzeczne" << endl;

    }
    else{
        cout << "Brak rozwi¹¿an" << endl;
    }

    return 0;
}
