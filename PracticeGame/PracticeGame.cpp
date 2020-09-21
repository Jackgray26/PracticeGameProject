//C++ guessing game main file

#pragma region Header_Files

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

#pragma endregion 

using namespace std;

int main()
{
	//random number generator using system time, result between 0-99
	srand(time(NULL));
	unsigned int numberToGuess = rand() % 100;
	cout << "Guess a number between 0 and 99: " << endl;

	unsigned int playersNumber{};
	cin >> playersNumber;

	cout << "You have guessed: " << playersNumber << " "
}
