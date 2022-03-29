#include <iostream>

using namespace std;

int main()
{
    int resultClass, resultGirls, resultBoys, boys, girls;

    cout << "How many girls are in the class ?";
    cin >> girls;
    cout << "How many boys are in the class ?";
    cin >> boys;

    resultClass = girls + boys;

    resultGirls = (girls * 100)/resultClass;
    resultBoys = (boys * 100)/resultClass;

    cout << "All people in class = " << resultClass;
    cout << "\nPercentage of girls = " << resultGirls << "%";
    cout << "\nPercentage of boys = " << resultBoys << "%";

    return 0;
}
