#include <iostream>

using namespace std;

int main()
{
    //Dawid Kocik informatyka niestacjonarna I semestr

    //Bardzo dziêkujê za wyt³umaczenie zadania :)

//   Task 1
   cout << "Give me something number" << endl;
        int n;
        cin >> n;

        cout << endl;

        for(int i = 1; i <= n; i++){

            cout << i << " " << endl;
        }

        cout << endl;

        for(int i = n; i >= 1; i--){
            cout << i << " " << endl;
        }

        cout << endl;

        for(int i = 1; i < n + 1; i++) {
            if(i % 3 == 0)
                cout << i << " " << endl;
    }

    //Task 2

     //Task 2

    cout << "\nTask 2\n" << endl;
    int m,res;
    cout << "Enter a positive integer" << endl;
    cin >> m;

    cout << endl;

    res = 0;

    if(m > 0){
        for(int i = 1; i < m + 1; i++){

            cout << i << " " << endl;
            res += i;
        }

            cout << "\nResult = " << res << endl;
    }
    else {
        cout << "Incorrect number" << endl;
    }


    //Task 3

    cout << "\nTask 3\n" << endl;
    for(int i = 40; i <= 125; i++) {
                cout << "The ASCII value of " << (char) i << " = " << i << "\n" <<endl;
    }

    cout << "\nShould be: {\n" << endl;

     for(int j = 40; j<= 50; j++){
                cout << "The ASCII value of " << (char) j << " = " << j << "\n" <<endl;
    }
    cout << "}"<< endl;

    //Task 4

    cout << "\nTask 4\n" << endl;
    double litersOfWater = 1.5;
    int year = 1;
    for(int i = 0; i < 25 - 1; i++){
        year++;
        litersOfWater = litersOfWater + 1.5;
        cout << "Year: " << year << " liter of water equals " << litersOfWater << endl;
    }

    //Task 5

    cout << "\nTask 5\n" << endl;
    int number = 0;
    int theBiggestNumber = 0;
    int theSmallestNumber = 0;

    cout << "Enter positive integers\n" << "If you would like to finish it, you have to enter '-99'" << endl;

        while(number != (-99)){
            cin >> number;
            if(number <= theSmallestNumber){
                theSmallestNumber = number;
            }
            else if(number >= theBiggestNumber){
                theBiggestNumber = number;
            }
        }

    cout << "\nThe smallest number is " << theSmallestNumber << "\nThe biggest number is " << theBiggestNumber << endl;

    return 0;
}
