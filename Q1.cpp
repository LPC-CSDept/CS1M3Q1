#include "Q1.hpp"

int makeRecords(Student student[])
{
}
void printRecords(Student student[], int N)
{
        cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
        for (int i = 0; i < N; i++)
        {
                cout << "Name: " << student[i].sname << "\t";
                cout << "ID: " << student[i].id << "\t";
                cout << "Phone Number: " << student[i].tel << "\t";
                cout << "\tScores: \t";
                cout << fixed << setprecision(2);
                for (int j = 0; j < SCN; j++)
                        cout << student[i].scores[j] << "\t";
                cout << endl;
        }
}
void writeTop3Records(Student student[], int N)
{
}