#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int resultCubes, playerFirstThrow, playerSecondThrow;
        int playerMoney = 100;
        int numbersRound = 0;
        int rand();

        cout << "\nStart game\n" << "In the beginning the player has " << playerMoney << " moneys\n" << endl;
        cout << "\nFirst throw this cube" << endl;
        playerFirstThrow = (rand() % 6 + 1);
        cout << "First throw equals = " << playerFirstThrow << endl;
        cout << "\nSecond throw this cube" << endl;
        playerSecondThrow = (rand() % 6 + 1);
        cout << "Second throw equals = " << playerSecondThrow << endl;
        resultCubes = playerFirstThrow + playerSecondThrow;
        cout << "\nResult throws equals = " << resultCubes << endl;

        if (resultCubes == 7 || resultCubes == 11) {
            numbersRound++;
            cout << "\nRound: " << numbersRound << endl;
            cout << "\nPlayer has drawn number " << resultCubes << " and one is winner the game " <<
                    "-> plus 20 moneys" << endl;
            playerMoney = playerMoney + 20;
            cout << "Player has " << playerMoney << " moneys present\n" << endl;

            while(numbersRound <= 10 - 1 || playerMoney <= 0) {

                cout << "Next throw this cube" << endl;
                playerFirstThrow = (rand() % 6 + 1);
                cout << "Next throw equals = " << playerFirstThrow << endl;
                cout << "\nSecond next throw this cube" << endl;
                playerSecondThrow = (rand() % 6 + 1);
                cout << "Second next throw equals = " << playerSecondThrow << endl;
                resultCubes = playerFirstThrow + playerSecondThrow;
                cout << "\nResult next throws equals = " << resultCubes << endl;

                if (resultCubes == 7 || resultCubes == 2 || resultCubes == 3 || resultCubes == 12) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is loser the game -> minus 30 moneys" << endl;
                    playerMoney = playerMoney - 30;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else if (resultCubes == 11) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is winner the game -> plus 20 moneys\n" << endl;
                    playerMoney = playerMoney + 20;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nThe total becomes the player's points" <<
                            "\nPlayer has drawn number " << resultCubes << "\nPlayer's total money equals " <<
                            playerMoney << "\n" << endl;
                }
            }

        } else if (resultCubes == 2 || resultCubes == 3 || resultCubes == 12) {
            numbersRound++;
            cout << "\nRound: " << numbersRound << endl;
            cout << "\n\nPlayer has drawn number " << resultCubes << " and one is loser the game " <<
                    "-> minus 30 moneys\n" << endl;
            playerMoney = playerMoney - 30;
            cout << "Player has " << playerMoney << " moneys present\n" << endl;

            while(numbersRound <= 10 - 1 || playerMoney <= 0) {

                cout << "Next throw this cube" << endl;
                playerFirstThrow = (rand() % 6 + 1);
                cout << " Next throw equals = " << playerFirstThrow << endl;
                cout << "\nSecond next throw this cube" << endl;
                playerSecondThrow = (rand() % 6 + 1);
                cout << "Second next throw equals = " << playerSecondThrow << endl;
                resultCubes = playerFirstThrow + playerSecondThrow;
                cout << "\nResult next throws equals = " << resultCubes << endl;

                if (resultCubes == 7 || resultCubes == 2 || resultCubes == 3 || resultCubes == 12) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is loser the game -> minus 30 moneys\n" << endl;
                    playerMoney = playerMoney - 30;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else if (resultCubes == 11) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is winner the game -> plus 20 moneys\n" << endl;
                    playerMoney = playerMoney + 20;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nThe total becomes the player's points" <<
                            "\nPlayer has drawn number " << resultCubes << "\nPlayer's total money equals " <<
                            playerMoney << "\n" << endl;
                }
            }

        } else {
            numbersRound++;
            cout << "\nRound: " << numbersRound << "\n\nThe total becomes the player's points" <<
                    "\nPlayer has drawn number " << resultCubes << "\nPlayer's total money equals " <<
                    playerMoney << "\n" << endl;

            while(numbersRound <= 10 - 1 || playerMoney <= 0) {

                cout << "Next throw this cube" << endl;
                playerFirstThrow = (rand() % 6 + 1);
                cout << " Next throw equals = " + playerFirstThrow << endl;
                cout << "\nSecond next throw this cube" << endl;
                playerSecondThrow = (rand() % 6 + 1);
                cout << "Second next throw equals = " << playerSecondThrow << endl;
                resultCubes = playerFirstThrow + playerSecondThrow;
                cout << "\nResult next throws equals = " << resultCubes << endl;

                if (resultCubes == 7 || resultCubes == 2 || resultCubes == 3 || resultCubes == 12) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is loser the game -> minus 30 moneys\n" << endl;
                    playerMoney = playerMoney - 30;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else if (resultCubes == 11) {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nPlayer has drawn number " << resultCubes <<
                            " and one is winner the game -> plus 20 moneys\n" << endl;
                    playerMoney = playerMoney + 20;
                    cout << "Player has " << playerMoney << " moneys present\n" << endl;
                } else {
                    numbersRound++;
                    cout << "\nRound: " << numbersRound << "\n\nThe total becomes the player's points" <<
                            "\nPlayer has drawn number " << resultCubes << "\nPlayer's total money equals " <<
                            playerMoney << "\n" << endl;
                }
        }
    }
}
