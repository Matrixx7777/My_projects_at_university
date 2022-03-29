#include <iostream>
#include <cmath>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
    //Task 1
    cout <<"\n--- Task 1 ---\n" << endl;

    int x = 2;
    int y = 5;

    if(x<y){
        cout << "x is bigger than y\n" << endl;
    }else {
        cout << "x is smaller than y\n" << endl;
    }

    if(x%2 == 0){
        cout << "Number " << x << " is even\n" << endl;
    }else {
        cout << "Number is odd\n" << endl;
    }

    //Task 2
    cout <<"\n--- Task 2 ---\n" << endl;

    x = 0;
    double result1;

    cout <<"\nEnter number for x: " << endl;
    cin >>x;

    if(x>= 1 && x<=20){
        cout << "\nThird example  1/3x(power of 2) +2 for x <1 or x >20" << endl;
        result1 = (1.0/3.0) * x + x +2;
        cout << "Result = " <<result1 << endl;

            if(x>=1 && x<=10){
                cout << "\nFirst example sin(PI * x) +1  for x <1,10> " << endl;
                result1 = sin(PI * x) + 1;
                cout << "Result = " << result1 << endl;
            }

            else if(x>10 && x<=20){
                cout << "\nSecond example √x for x (10,20>" << endl;
                result1 = sqrt(x);
                cout << "Result = " << result1 << endl;
            }

            else {
                cout <<"Incorrect number or undefined number" << endl;
                }

    }else {
        cout << "Incorrect number or undefined number" << endl;
    }

    //Task 3
    cout <<"\n--- Task 3 ---\n" << endl;

    char examples;
    string pi = "PI";
    double h =5.0, coneVolume, sphereVolume;
    int rectangleArea, a = 2, b = 5, r = 3;


    cout << "Please, give me char: \n" << endl;
    cout <<"A = first example, B = second example," <<" C = first example,"<<endl;

    cin >> examples;

    switch(examples) {

        case 'A' :

        cout << "First example" << endl;

        cout << "r = 3, PI = text" << endl;

        sphereVolume = (4 * r*r*r)/3;
        cout << "Result volume of the sphere = " << sphereVolume << pi << endl;

        break;

        case 'B' :

        cout << "Second example" << endl;
        cout << "r = 3, PI = text, h = 5" << endl;

        coneVolume = (1 * r * r *h)/3;
        cout << "Result volume of the cone = " << coneVolume << pi << endl;

        break;

        case 'C' :

        cout << "Third example" << endl;

        cout << "a = 2, b = 5" << endl;

        rectangleArea = a * b;

        cout << "Rectangle area = " << rectangleArea << endl;

        break;

        default:

        cout << "Incorrect the char " << endl;

        break;

    }

    //Task 4
    cout <<"\n--- Task 4 ---\n" << endl;

  cout << endl;

  a = 0;
  b = 0;
    cout << endl;

  double sinAl,result;

  cout << "Enter base a of triangle: " << endl;
  cin >> a;
  cout << endl;

  cout << "Enter base b of triangle: " << endl;
  cin >> b;
  cout << endl;

  cout << "Enter the sine of alpha of a triangle degrees: " << endl;
  cin >> sinAl;
  cout << endl;

  cout << "Triangle area: P= 1/2*a*b*sin(alfa)\n" << endl;

  if(sinAl == 0){
        cout << "Sinus 0 degree = 0"<< endl;
        sinAl = 0;

      }else if(sinAl == 30){
          cout << "Sinus 30 degree = 1/2" << endl;
          sinAl = 0.5;

          }else if(sinAl == 45){
          cout << "Sinus 45 degree = (√2)/2" << endl;
          sinAl = sqrt(2)/2;

          }else if(sinAl == 60){
          cout << "Sinus 60 degree = (√3)/2" << endl;
          sinAl = sqrt(3)/2;

          }else if(sinAl == 90){
          cout << "Sinus 90 degree = 1" << endl;
          sinAl = 1;

              }else{
                  sinAl = sin(sinAl * PI/180);
                // sinAl = b/c;
                // c = sinAl/b;
                  }

    cout<< "Sin = " << sinAl << endl;

    result = 0.5 * a  * b * sinAl;

  cout << "\nThe area of the triangle is " << result;


    //Task 5
    cout <<"\n--- Task 5 ---\n" << endl;
    double d1,d2,d3,d; // road
    int hr,m,s,s1,s2,s3,t1,t2,t3; //hours,minutes,seconds, time in kilometers

    cout <<"Start" << endl;

    d1 = 0.2;
    t1 = 10;
    s1 = (d1 * 1000) / t1;
    cout << "\nThe first stage of the road:\n road = 0,2km = 200m, time = 10m/s\n"
    << "second = ( "<< d1 << "km *1000) / " << t1 <<"m/s = " << s1 << endl;

    d2 = 0.5;
    t2 = 8;
    s2 = (d2 * 1000) / t2;
    cout << "\nThe second stage of the road:\n road = 0,5km = 500m , time = 8m/s\n"
    << "second = ( " << d2 << " * 1000) / " << t2 << "m/s = " << s2 << endl;

    d3 = 0.3;
    t3 = 5;
    s3 = (d3 * 1000) / t3;
    cout << "\nThe third stage of the road:\n road = 0,3km = 300m, time = 5m/s\n"
    << "second = ( " << d3 << " * 1000) / " << t3 << "m/s = " << s3 << endl;

    d = d1+d2+d3;
    s = s1+s2+s3;

    cout << "\nTotal road = " << d << " km" << ", total time = " << s << " s" << endl;

    m = s/60;
    s = s % 60;
    m = m%60;
    hr = m/60;

    cout<< "Time = " <<hr<<":"<<m<<":"<<s<<endl;

    return 0;
}
