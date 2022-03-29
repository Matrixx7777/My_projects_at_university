#include <iostream>
#include <cstdlib>

using namespace std;

void myName(string name, string surname, int id){ cout << name << " " << surname << " " << id << endl; }

double areaOfTrapezoid(double a, double b, double h){ double equals = ((a + b) * h) / 2; return equals; }

void randomNumbers(int p, int k){

    int randomNumber;
    for (int i = 0; i <= 10; i++) {
    randomNumber = (rand() % (k - p + 1)) + p;
    cout << randomNumber << endl;

  }
}

void functionForX(int x){
    double result;
    if(x > -1 && x < 20) {
        result = 2 * x + 1;
        cout << "y(x) = 2 * x + 1 for <-1;20>\nResult function = "<<result << endl ;

    } else{
        result = 2/x;
        cout << "y(x) = 2/x\nResult function = "<<result << endl ;
        }
}

void conversion(int number){
    double Tc,TF;
    if(number == 1){
        cout << "How many deegres Celsius would you like to convert ?" << endl;
        cin >> Tc;
        TF = (9.0/5.0) * Tc + 32;
        cout << "Fahrenheit = (9.0/5.0) * Celsius + 32;\nDegrees Fahrenheit = " << TF << endl;
        }
    else if(number == 2){
        cout << "How many deegres Fahrenheit would you like to convert ?" << endl;
        cin >> TF;
        Tc = (5.0/9.0) * (TF - 32);
        cout << "Celsius = (5.0/9.0) * (Fahrenheit - 32);\nDegrees Celsius = " << Tc << endl;
        }
    else{
        cout << "Incorrect number" << endl;
    }
}

int main()
{
    //Task 1
    string name = "Dawid";
    string surname = "Kocik";
    int id = 150911;

    myName(name, surname, id);

    cout << endl;

    //Task 2
    double a,b,h;

    cout << "Task 2\nArea of trapezoid:\nGive me a: ";
    cin >> a;
    cout << "Give me b: ";
    cin >> b;
    cout << "Give me h: ";
    cin >> h;

    double result = areaOfTrapezoid(a,b,h);

    cout << "\nArea of trapezoid = " << result << endl;

    //Task 3
    int x;
    cout << "\nTask 3\nGive me x: ";
    cin >> x;

    functionForX(x);

    //Task 4
    int p,k;

    cout << "\nTask 4\nRandom numbers from p to k:\nGive me p: ";
    cin >> p;
    cout << "Give me k: ";
    cin >> k;

    randomNumbers(p,k);

    //Task 5
    int number;
    cout << "\nTask 5\nChoose:\n1 = Converting degrees Celsius to Fahrenheit\n" <<
                   "2 = Converting degrees Fahrenheit to Celsius\n" << endl;
    cin >> number;

    conversion(number);

    return 0;
}
