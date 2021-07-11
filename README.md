# Coin-Flip---C-

//The program has a function that will simulate a coin flip. To act as "heads" and "tails"
//we have integers 1 and 2, which are generated randomly by the computer. Whichever number
//the computer generates determines whether the console outputs "heads" or "tails".

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int coinFlip (){

int flip = (rand()%2)+ 1 ;

return flip;

}


int main()

 {

int counter = 0;
int flip = 0;

cout << "How many coin tosses would you like?" << endl;
cin >> counter;

srand (time(NULL));

for (int i = 1; i <= counter; i++) {
 flip = coinFlip();

if (flip == 1) {

cout << "Heads" << endl;

}

else {

cout << "Tails" << endl;

}

}

}
