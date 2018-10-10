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
	vector<int> movieArr;

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "For student " << i + 1 << ": ";
		inputValidation('B', input);
		movieArr.push_back(getInput());
	}

	cout << endl;
	cout << endl;
	displayVector(movieArr);
	cout << endl << endl << "The average of the array is: " << getAverage(movieArr) << endl << endl;
	cout << "The median of the array is: " << getMedian(movieArr) << endl;
}

void MovieStat::inputValidation(char caseChar, int& input)
{
	//THIS FUNCTION VALIDATIONS THE INPUT
	//IT WILL ONLY ACCEPT INPUTS GREATER THAN OR EQUAL TO ZERO
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

void MovieStat::displayVector(vector<int> movieArr)const
{
	//THIS FUNCTION DISPLAY THE VALUES IN THE ARRAY
	cout << "Your array of inputs are: ";
	for (int i = 0; i < movieArr.size(); i++)
	{
		cout << movieArr.at(i) << " ";
	}
}

double MovieStat::getAverage(vector<int> movieArr) const
{
	//THIS FUNCTION CALCULATES THE AVERAGE VALUE OF THE ARRAY
	double result = 0;

	for (int i = 0; i < movieArr.size(); i++)
	{
		result += movieArr.at(i);
	}

	return (result / (double)movieArr.size());
}

double MovieStat::getMedian(vector<int> movieArr) const
{
	//THIS FUNCTION WILL GET THE MEDIAN IN THE ARRAY
	double result;
	int medianSize = movieArr.size() / 2;
	
	if (movieArr.size() % 2 == 0)
	{
	//IF THE SIZE OF THE ARRAY IS EVEN. GET THE TWO MIDDLE VALUES
	//AND COMPUTE THE AVERAGE
		result = (double)(movieArr.at(medianSize) + movieArr.at(medianSize - 1))/2;
	}
	else if (movieArr.size() % 2 == 1)
	{
		result = movieArr.at(medianSize);
	//ELSE, JUST GET THE MIDDLE ELEMENT
	}

	return result;
}