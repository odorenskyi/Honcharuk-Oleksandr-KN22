#include <iostream>
#include <fstream>
#include <sstream>
#include "ModulesGoncharuk.h"

using namespace std;

int main()
{
    string line;
    if(checkFileInFolder() == false)
        return 0;

    ClassLab12_Goncharuk globus;
    ifstream Tests_File("../../TestSuite/Tests.txt");
    ofstream TestResult_File("../../TestSuite/TestResult.txt");

    if (Tests_File.is_open() || TestResult_File.is_open())
    {
        int counter = 1;
        float number;
        while (getline(Tests_File, line, '\n'))
        {
            istringstream iss(line);

            while (iss >> number)
                arrNumbers.push_back(number);

            globus.changeRadius(arrNumbers[0]);
            TestResult_File << writeResultToFile(globus, counter);
            counter++;
        }
    }
    Tests_File.close();
    TestResult_File.close();
    system("pause");
    return 0;
}
