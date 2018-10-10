#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MovieStat
{
private:
	int input, sum;
public:
	//CONSTRUCTOR
	MovieStat();
	//DESTRUCTOR
	~MovieStat();

	//GETTERS
	int getInput() const;	//GETS INPUT
	double getAverage(int) const;	// CALCULATES ANR RETURNS THE AVERAGE
	double getMedian(vector<int>) const;	//CALCULATES MEDIAN
	int getSum() const;

	//SETTERS
	void setInput(int);
	void setSum(int);

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

	//DISPLAYS ALL THE ELEMENTS IN THE ARRAY
	void displayVector( vector<int>);

	//DISPLAYS THE MODE IN THE ARRAY
	void displayMode(vector<int>) const;			
};