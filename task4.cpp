#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

//Task 2
int* minimumValue(int *x,int n);
int result[2];

int* minimumValue(int *x,int n){
    int min= *x;
    int *arr=x;
    int count=0;
    for(int i=1;i<n;i++){
        if(*x<min)
        min=*x;

        x++;
    }

    for(int i=0;i<n;i++){
        if(*arr==min)
        count++;

        arr++;
    }
    result[0]=min;
    result[1]=count;

    return result;
}

//Task 3
int count(int X[], int n, int number){
    int count=0;
    for(int i=0; i<n; i++){
            if(X[i]==number)
            count++;
    }
return count;
}

//Task 4
int i;
float data[10];

float calculateSD(float data[]) {
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;

for(i = 0; i < 10; ++i) {
        sum += data[i];
    }

mean = sum / 10;

for(i = 0; i < 10; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

return sqrt(standardDeviation / 10);
}

//Task 5
int count2[4]={0,0,0,0};

int* countQ(int X[],int Y[],int n){

    for(int i=0; i<n; i++)
    {

   if (X[i] >= 0 and Y[i] >= 0)
        count2[0]++;

    else if (X[i] <= 0 and Y[i] >= 0)
        count2[1]++;

    else if (X[i]  <= 0 and Y[i] <= 0)
        count2[2]++;

    else
       count2[3]++;
    }
return count2;
}

int main() {

    //Task 1
    int n = 10;
    int total = 0;
    int howMany = 0;
    int y[n];

    //Task 3
    int Xx[15];

    //Task 5
    int X[n],Y[n];

    int number;
    cout << "Dawid Kocik Computer science Ist semester, my id is 150911\nEnter some number task ( 1 - 5 )" << endl;
    cin >> number;

    switch(number)
{
case 1:
    cout << "Give me 10 elements of table" << endl;

    for(int i = 0; i < n; i++){
            cout << "Element " << i + 1 << " : ";
            cin >> y[i];
            }

            cout << endl;

    for(int i = 0; i < n; i++){

            if(y[i] > 0){
                total += y[i];
            }
            else if(y[i] < 0){
                total += y[i];
            }
            cout << "Number [" << i << "] = " << y[i] << endl;

            howMany = n;
   }

   cout << "\nResult = " << total << endl;

   cout << "\nTable has " << howMany << " elements and its value is equals to " << (double)total/howMany << endl;
    break;

case 2:
    int elements[10];
    cout << "Enter 10 integers" << endl;
	for(int i=0;i<10;i++){
	    cin>>elements[i];
	}
	int * results;
	results = minimumValue(elements,10);
	cout<<"Minimum number in array is : "<<*results<<endl;
	results++;
	cout<<"Count of minimum number in array is : "<<*results;
    break;

case 3:
number = 0;
howMany = 0;

srand(time(0));

for(int i=0; i<15; i++){

    Xx[i]=(rand()%26 )+ 5;
}

cout << "\nNumbers in your table: \n"<<endl;
for (int i=0; i<15; i++) cout <<setw(4) << Xx[i] << ",";

cout << "\n\nEnter the number you are looking for" << endl;
cin >> number;

howMany= count(Xx,  15, number);

cout<<"Number "<< number << " was " << howMany <<" times" << endl;
break;

case 4:
    cout << "Enter 10 elements: \n";
    for(i = 0; i < 10; ++i) {
        cin >> data[i];
    }

    cout << "\n10 elements are : \n";
    for(i = 0; i < 10; ++i) {
        cout<<data[i]<<"  ";
    }

cout << endl << "\n\nStandard Deviation = " << calculateSD(data);
break;

case 5:
    cout<<"Enter no of points in Coordinate System "<<endl;
int n;
cin>>n;
number = 0;
howMany = 0;

srand(time(0));

for(int i=0; i<n; i++){

    X[i]=rand()%(21 )-10;
    Y[i]=rand()%(21 )-10;
}
cout << "\nNumbers in your table: \n"<<endl;
cout <<setw(4) << "XX[i]"<< "| "<<"YY[i]" <<endl;

for (int i=0; i<n; i++) cout <<setw(4) << X[i] << " | "<<Y[i]<<endl;

int *p;
int c[4];
   p = countQ(X,Y,n);
   for ( int i = 0; i < 4; i++ ) {
      c[i]=*(p + i);
   }
   for ( int i = 0; i < 4; i++ ) {
      cout << "Number of total Points in Quadrant c[" << i << "] : ";
      cout << c[i] << endl;
      }
    break;

default:
    cout << "Your choose is bad" << endl;
    break;
}

return 0;
}
