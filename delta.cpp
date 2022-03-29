#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Program for calculating delta\n";
    double a, b, c;
    cout << "Give me a, b i c: ";
    cin >> a >> b >> c;

    if(a==0)
    {
        cout<<"This is not a square equation";
    }
    else
    {
        double delta = b*b-4*a*c;
        double x1, x2;

        if( delta > 0 )
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<"x1 = "<<x1<<"\n";
            cout<<"x2 = "<<x2;
        }

        else if(delta==0)
        {
            x1=-b/(2*a);
            cout<<"x0 = "<<x1;
        }

        else // delta < 0
        {
            cout<<"No solutions";
        }
    }
    cout<<endl;

    return 0;
}
