#include<iostream>
#include<math.h>

using namespace std;

float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);
float powerFun(float, float);
float rootFun(float);

int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Power\n";
        cout<<"6. Root\n";
        cout<<"7. Exit\n\n";
        cout<<"Enter Your Choice(1-7): ";
        cin>>choice;
        if(choice>=1 && choice<=5 && choice == 7)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        else if(choice == 6)
        {
            cout<<"\nEnter a one Number: ";
            cin>>numOne;
        }
        switch(choice)
        {
            case 1:
                res = addFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = subFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = mulFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = divFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 5:
                res = powerFun(numOne,numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 6:
                res = rootFun(numOne);
                cout<<"\nResult = "<<res;
                break;
            case 7:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=7);
    cout<<endl;
    return 0;
}
float addFun(float a, float b)
{
    return (a+b);
}
float subFun(float a, float b)
{
    return (a-b);
}
float mulFun(float a, float b)
{
    return (a*b);
}
float divFun(float a, float b)
{
    return (a/b);
}
float powerFun(float a, float b)
{
    return pow(a,b);
}
float rootFun(float a)
{
    return sqrt(a);
}

//Dawid Kocik
