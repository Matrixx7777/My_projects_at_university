#include <iostream>
#include <stdlib.h>
using namespace std;

int functions(int user){

  cout << "\nYou  chose ";

  string roc = "1 -> Rock\n";
  string pap = "2 -> Paper\n";
  string sci = "3 -> Scissors\n";

  //User's choose
  switch(user){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }

    int computer = rand() % 3 + 1;

    //Computer's choose
    cout << "Computer choosed ";

    switch(computer){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }

    if(user == computer){
     cout << "Draw Game\n";
    }
    else if(user == 1 && computer == 3){
     cout << "You Win\n";
    }
    else if(user == 3 && computer == 2){
     cout << "You Win\n";
    }
    else if(user == 2 && computer == 1){
     cout << "You Win\n";
    }
    else{
     cout << "Computer Wins!\n";
    }

  return 0;
}

int main() {

 int user = 0;

 string roc = "1 -> Rock\n";
 string pap = "2 -> Paper\n";
 string sci = "3 -> Scissors\n";

 cout << "Dawid Kocik\n" << endl;

 cout << "===========================\n" <<
         "=========== GAME ==========" <<
         "\n= rock paper and scissors =\n" <<
         "===========================\n" << endl;

 cout << roc << pap << sci << endl;
 cout << "\nChoose number: ";
 cin >> user;

 functions(user);

 return 0;
}
