#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // cout << "Hello, World! \n";
    // const double PI = 3.1415926535;
    // char myGrade = 'a';
    // bool isLearn = true;
    // int myAge = 36;
    // float other = 3.1245;
    // cout << "My Age: " << myAge << endl;
    // cout << "Sizeof myAge: " << sizeof(myAge) << endl;
    // cout << "4 / 5 = " << (float)4 / 5 << endl;

    //Switch
    // int greetingOption = 2;

    // switch(greetingOption)
    // {
    //     case 1:
    //         cout << "bonjour\n";
    //         break;
    //     case 2:
    //         cout << "Hola\n";
    //         break;
    //     case 3: 
    //         cout << "Hallo\n";
    //         break;
    //     default :
    //         cout << "Hello\n";
    // }
    
    //Terniary Operator
    // variable = (condition) ? true : false

    // int largestNum = (5 > 2) ? 5 : 2;
    // cout << largestNum << endl;

    //Array
    // int myFavNums[5];
    // int badNums[5] = { 4, 13, 14, 24, 34 };

    // cout << "BadNum 1: " << badNums[0] << endl;

    // char myName[5][5] = {{'D','e','r','e','k'}, 
    //                     {'B','a','n','a','s'}};

    // cout << "2nd Letter in 2nd array: " << myName[1][1] << endl;

    // //Change array value
    // myName[0][2] = 'Z';

    // cout << "2nd Letter in the 1st array: " << myName[0][2] << endl;

    //****************For Loop*******************

    // for(int i = 1; i < 10; i++)
    // {
    //     cout << "i = " << i << endl;
    // }

    // char myName[5][5] = {{'D','e','r','e','k'}, 
    //                     {'B','a','n','a','s'}};

    // for(int j = 0; j <= 2; j++)
    // {
    //     for(int k = 0; k < 5; k++)
    //     {
    //         cout << myName[j][k];
    //     }
    // }

    //***************While Loops****************
    // int randNum = (rand() % 100) + 1;

    // while(randNum != 100)
    // {
    //     cout << randNum << ",";
    //     randNum = (rand() % 100) + 1;
    // }
    // cout << endl;

    //**************Do While Loop***************
    // string numberGuessed;
    // int intNumberGuessed;

    // do
    // {
    //     cout << "Guess a number between 1 and 10: ";
    //     getline(cin, numberGuessed);
    //     intNumberGuessed = stoi(numberGuessed);
    //     cout << numberGuessed << endl;
    // } while ( intNumberGuessed != 4);
    
    
    //*****************Strings***************
    // char cString[3] = {'o','e','r'};
    // string name = "Eduan";
    // cout << cString << name << endl;

    // string yourName;
    // cout << "What is your name: ";
    // getline(cin, yourName);

    // cout << "Hello " << yourName << endl;

    // double eulersConstant = .57721;
    // string eulerGuess;
    // double eulerGuessDouble;

    // cout << "What is Euler's Constant: ";
    // getline(cin, eulerGuess);
    // eulerGuessDouble = stod(eulerGuess);

    // if(eulerGuessDouble == eulersConstant)
    // {
    //     cout << "Your right\n";
    // }
    // else
    // {
    //     cout << "Your wrong\n";

    // }

    // cout << "Size of string: " << eulerGuess.size() << endl;
    // cout << "Is string empty: " << eulerGuess.empty() << endl;
    // cout << eulerGuess.append(" was your guess") << endl;

    // string dogString = "dog";
    // string catString = "cat";

    // cout << dogString.compare(catString) << endl;
    // cout << catString.compare(dogString) << endl;
    // cout << dogString.compare(dogString) << endl;

    // string yourName;
    // cout << "What is your name: ";
    // getline(cin,yourName);
    // cout << "hello" << yourName << endl;

    // //Coppy a string
    // string wholeName = yourName.assign(yourName);
    // cout << wholeName << endl;

    // string firstName = wholeName.assign(wholeName, 0, 5);
    // cout << firstName << endl;

    // //Index of string
    // int lastNameIndex = yourName.find("van Rooyen",0);
    // cout << "Last Name Index: " << lastNameIndex << endl;

    // //Insert
    // yourName.insert(5,"Piet");
    // cout << yourName << endl;

    // //Erase
    // yourName.erase(6,7);
    // cout << yourName << endl;

    // //Replace
    // yourName.replace(6,5,"Maximus");
    // cout << yourName << endl;

    //***************Vectors******************
    // vector <int> lotteryNumVect(10);
    // int lotterNumArray[5] = {4, 13, 14, 24, 34};

    // //Insert array into vector
    // lotteryNumVect.insert(lotteryNumVect.begin(), lotterNumArray, lotterNumArray+3);
    // lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

    // cout << lotteryNumVect.at(2) << endl;
    // cout << lotteryNumVect.at(4) << endl;
    // cout << lotteryNumVect.at(5) << endl;

    // lotteryNumVect.push_back(64);
    
    // cout << "Final Value " << lotteryNumVect.back() << endl;

    // lotteryNumVect.pop_back();

    // cout << "First Value " << lotteryNumVect.front() << endl;


    return 0;
}

