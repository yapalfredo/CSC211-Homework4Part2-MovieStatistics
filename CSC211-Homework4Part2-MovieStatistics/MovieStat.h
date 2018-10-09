#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MovieStat
{
private:
	int input;
public:
	//CONSTRUCTOR
	MovieStat();
	//DESTRUCTOR
	~MovieStat();

	//GETTER
	int getInput();

	//SETTER
	void setInput(int);

	/*
	ASK THE USER HOW MANY STUDENTS WERE SURVEYED.
	AN ARRAY OF INTEGERS WITH THIS MANY ELEMENTS
	SHOULD THEN BE DYNAMICALLY ALLOCATED.
	*/	void questionA();

	/*
	ALLOW THE USER TO ENTER THE NUMBER OF MOVIES
	EACH STUDENT SAW INTO THE ARRAY.
	*/	void questionB(const int);

	/*
	CALCULATE AND DISPLAY THE AVERAGE, MEDIAN, AND
	MODE OF THE VALUES ENTERED.
	*/	void questionC();
	
	//INPUT VALIDATION
	void inputValidation(char, int&);

	//DOES NOTHING ALMOST
	//ONLY TO LOAD THE FIRST QUESTION
	void loadScreen();

	void displayVector( vector<int>, int) const;
};