
#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

const int HEADS = 1;
const int TAILS = 2;

int player = 0;

int playerResult = 0;
int computerResult = 0;

int computerInput (){
srand (time(NULL));
int computer = rand()%2 + 1 ;
return computer;

}




void determinant(int player, int computer) {



if (player == HEADS && computer == HEADS) {
  cout << "You guessed Heads. Good job!" << endl;
  playerResult++;
}

else if (player == TAILS && computer == TAILS) {
  cout << "You guessed Tails. Good job!" << endl;
  playerResult++;
}

else if (player == HEADS && computer == TAILS) {
  cout << "Your result did not match the computer's :(" << endl;
  computerResult++;
}

else if (player == TAILS && computer == HEADS) {
  cout << "Your result did not match the computer's :(" << endl;
  computerResult++;

}

else {
    cout << "Error. Select '1' or '2'" << endl;
}

}

int main()

 {


cout << "Guess what the computer will flip" << endl;

cout << "Press '1' for Heads. Press '2' for Tails" << endl;
cin >> player;


while (player < 1 || player > 2) {
    cout << "Error. Choose an applicable number." << endl;
    cin >> player;

}

int computer = computerInput();


determinant(player,computer);


string response = "";
cout << "Would you like to play again?" << endl;
cin >> response;

while (response != "Y" && response != "y" && response != "N" && response != "n") {
        cout << "Error. Choose an applicable response." << endl;
cin >> response;

}

while (response == "Y" || response == "y") {

cout << "Guess what the computer will flip" << endl;

cout << "Press '1' for Heads. Press '2' for Tails" << endl;
cin >> player;


while (player < 1 || player > 2) {
    cout << "Error. Choose an applicable number." << endl;
    cin >> player;

}

int computer = computerInput();


determinant(player,computer);

string response = "";
cout << "Would you like to play again?" << endl;
cin >> response;



if (response == "N" || response == "n") {
    break;
}
while (response != "Y" && response != "y" && response != "N" && response != "n") {
        cout << "Error. Choose an applicable response." << endl;
cin >> response;

}
}
cout << "The final score for the player is: " << playerResult << " and the final score for the computer is: " << computerResult << endl;
 }


