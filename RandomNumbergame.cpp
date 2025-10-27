#include<iostream>
#include<cstdlib> //for use rand fuction
#include<ctime>

using namespace std;

int gerneraterandomNumber (){
     return rand() % 100 + 1 ; // generate random number between 1 to 100
}

int main(){
  srand(time(0));
  int randomNumber = gerneraterandomNumber() , userGuess= 0, attempts = 0;
  bool isGuessed = false;
  cout << "Welcome to the Number Guessing Game!" << endl;
  cout << "I have selected a random number between 1 and 100." << endl;
  cout << "Can you guess what it is?" << endl;
  do
  {
    cout << "Enter your guess: ";
    cin >> userGuess;
    attempts++;
    if (userGuess < randomNumber) {
        cout << "Too low! Try again." << endl;
    } else if (userGuess > randomNumber) {
        cout << "Too high! Try again." << endl;
    } else {
        cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
        isGuessed = true;
    }
  } while (!isGuessed);
  
 
  return 0;
}
