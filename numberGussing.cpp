#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	//seeds random number generator
    srand(time(0));
	num = rand() % 100 + 1; 
    // random number between 1 to 100
	cout << "Welcome to Guess My Number Game" << endl;

	do
	{
		cout << "Enter a guess number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Enter a lower number !" << endl;
		else if (guess < num)
			cout << "Enter a higher number !" << endl;
		else
			cout << "Correct! You got it in " << tries << " guesses!" << endl;
	} while (guess != num);

	return 0;
}