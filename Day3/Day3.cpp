// Day3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdio.h>

typedef unsigned char byte;

typedef struct Car 
{
    char name[50];
    int car_id;
} Car;

std::vector<std::string>CheckChar(std::string input)
{
    std::vector<std::string> v = std::vector<std::string>();
    size_t pos = input.find('\n');

    while (pos != std::string::npos && pos != -1)
    {
        v.push_back(input.substr(0, pos));
        input = input.substr(pos+1);
        pos = input.find('\n');
    }
    v.push_back(input);
    return v;
}

std::string TextInput(std::string input)
{
    std::string rowNum = "";
    char character = input.at(0);
    rowNum += character;
    std::string gammaRate = "";
    //std::cout << rowNum << std::endl;
    return rowNum;
}


int main()
{
    std::ifstream myFile = std::ifstream();
    myFile.open("input.txt");
    std::string input = "";
    std::string input2 = "";


    if (myFile.is_open())
    {
        int size = 0;
        while (std::getline(myFile, input))
        {
            size++;
            input2 += input;
            TextInput(input);
            input2 += '\n';
        }
        myFile.close();
    }

    std::vector<std::string> v = CheckChar(input2);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v.at(i) << std::endl;
    }

    v.clear();

    Car car;
    strcpy_s(car.name, "Bent");
    car.car_id = 1;
    ((byte*)&car)[53] = 0x2;
    std::cout << "id: " << car.car_id << std::endl;

    return 0;
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
