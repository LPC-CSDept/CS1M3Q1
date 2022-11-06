#include "Q1.hpp"

int main()
{

        Student student[100];
        int numRecords;

        numRecords = makeRecords(student);
        printRecords(student, numRecords);
        writeTop3Records(student, numRecords);
}