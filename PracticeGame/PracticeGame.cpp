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

	string playerName;
	cin >> playerName;

	cout << endl << "Hello " << playerName << endl;

	return 0;

}