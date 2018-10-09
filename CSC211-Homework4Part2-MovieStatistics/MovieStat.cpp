#include "MovieStat.h"

MovieStat::MovieStat()
{
	//CONSTRUCTOR
}

MovieStat::~MovieStat()
{
	//DESTRUCTOR
}

void MovieStat::setInput(int input)
{
	this->input = input;
}

int MovieStat::getInput()
{
	return input;
}

void MovieStat::loadScreen() 
{
	//CALLS questionA()
	questionA();
}

void MovieStat::questionA()
{

	//FUNCTION CALLS INPUT VALIDATION
	inputValidation('A', input);	
	
	setInput(input);
	const int SIZE = getInput();

	cout << endl << endl;
	questionB(SIZE);
}

void MovieStat::questionB(const int SIZE)
{
	//FOR DYNAMIC ALLOCATION	
	vector<int> movieArr(SIZE);

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "For student " << i + 1 << ": ";
		inputValidation('B', input);
		movieArr.push_back(getInput());
	}

}

void MovieStat::inputValidation(char caseChar, int& input)
{
	do {
		switch (caseChar)
		{
		case 'A':	//QUESTION A
			cout << "How many students were surveyed?: ";
			cin >> input;
			break;
		case 'B': 
			cout << "Please enter the number of movies: ";
			cin >> input;
			break;
		default:
			break;
		}
		
		if (input < 0)
		{
			cout << "Only positive integers are accepted. Please try again!" << endl;
		}
	} while (input < 0);

}