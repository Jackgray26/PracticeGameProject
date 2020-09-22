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

	cout << "Welcome to your text adventure!" << endl << endl;
	cout << "Please enter your Name" << endl << endl;

	//Player Name can only be up to 1024 characters long, stored as playerName
	char playerName[1024];
	cin >> playerName;

	cout << endl << "Hello " << playerName << endl;

	return 0;

}