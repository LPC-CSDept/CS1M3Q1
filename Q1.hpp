#ifndef Q1
#define Q1
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

const int SCN = 3;
struct Student
{
	string sname;
	int id;
	string tel;
	double scores[SCN];
};

int makeRecords(Student[]);
void printRecords(Student[], int N);
void writeTop3Records(Student[], int N);

#endif