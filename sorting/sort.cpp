#include <iostream>
#include <vector>
#include <fstream>
#include <string>

/*PATHS TO HEADER FILES THAT INCLUDE SORTING ALGORITHMS*/
#include "bubble_sort/bubble_sort.h"
#include "insertion_sort/insertion_sort.h"
#include "selection_sort/selection_sort.h"

void print_vec(std::vector<int> v);

int main()
{
    std::vector<int> v;
    std::string line;

    std::ifstream file("example.txt");

    /*
        Saving numbers from file to a std::vector
    */
    while (!file.eof())
    {
        file >> line;
        v.push_back(stoi(line));
    }

    std::cout << "Before sorting: " << std::endl;
    print_vec(v);

    v = SelectionSort(v);

    std::cout << "After sorting: " << std::endl;
    print_vec(v);

    return 0;
}

/*
    @brief Function that prints given std::vector
*/
void print_vec(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\t";
    }

    std::cout << std::endl
              << std::endl;
}