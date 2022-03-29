#include <iostream>
#include <cmath>

using namespace std;

double method(int numberRoom, double pricePerPaint){
    double meters, literOfPaint,high[0],length[0],width[0],roomArea,workHours,pricePerHour,totalPaintCost, totalMoney;

    if(numberRoom >= 1 && pricePerPaint >= 10){

        for(int i = 1; i <= numberRoom; i++){

        cout << "\nPodaj wysokosc w " << i << " pokoju w metrach\n" << endl;
        cin >> high[i];

        while(high[i] <= 0){
        cout << "\nZLE! Podaj wysokosc wieksza niz 0 w " << i <<" pokoju w metrach\n" << endl;
        cin >> high[i];
        }

        cout << "\nPodaj dlugosc w " << i << " pokoju w metrach\n" << endl;
        cin >> length[i];

        while(length[i] <= 0) {
        cout << "\nZLE! Podaj dlugosc wieksza niz 0 w " << i << " pokoju w metrach\n" << endl;
        cin >> length[i];
        }

        cout << "\nPodaj szerokosc w " << i << " pokoju w metrach\n" << endl;
        cin >> width[i];

        while(width[i] <= 0){
        cout << "\nZLE! Podaj szerokosc wieksza niz 0 w " << i << " pokoju w metrach\n" << endl;
        cin >> width[i];
        }

        roomArea = 2*(width[i]*length[i]+length[i]*high[i]+high[i]*width[i]);
        }

        cout << "\n------------------------------------------\nLaczna liczba metrow kwadratowych pokoi wynosi " << roomArea << endl;


        literOfPaint = roomArea/15;

        cout << "\nWynik litrow farby wynosi " << literOfPaint << endl;

        workHours = literOfPaint * 3;

        cout << "\nWynik godzin pracy wynosi " << workHours << endl;

        totalPaintCost = literOfPaint * pricePerPaint;

        cout << "\nKoszt calkowity farby wynosi " << totalPaintCost << endl;

        pricePerHour = workHours * 25;

        cout << "\nOplata za calkowita prace wynosi " << pricePerHour << endl;

        totalMoney = totalPaintCost + pricePerHour;

        cout << "\nWszystkie koszty calkowitej pracy z oplata farby wynosza " << totalMoney << "\n------------------------------------------"<< endl;

    }

    else {

        cout << "\nZla liczba. Pokoj musi byc wiekszy od zera\n" <<
                "i cena farby musi byc wieksza badz rowna 10\n" <<
                 "\n***************** KONIEC *****************"<< endl;
    }

    return 0;
}

int main()
{
    int numberRoom;
    double pricePerPaint;

    cout << "Dawid Kocik - Numer indeksu: 150911\n" << endl;
    cout << "Podaj liczbe pokoi wieksza od 0 i cene za litr farby wieksza badz rowna 10" << endl;
    cin >> numberRoom >> pricePerPaint;

    method(numberRoom, pricePerPaint);

    return 0;
}
