// Day3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

std::string TextInput(std::string input)
{
    std::string rowNum;
    char character = input[0];
    rowNum.push_back(character);
    std::string gammaRate;
    std::cout << rowNum << std::endl;
    return rowNum;
}


int main()
{
    std::ifstream myFile;
    myFile.open("input.txt");

    if (myFile.is_open())
    {
        std::string input;
        int size = 0;
        while (std::getline(myFile, input))
        {
            size++;
            TextInput(input);
        }
        std::cout << size << std::endl;
        myFile.close();
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
