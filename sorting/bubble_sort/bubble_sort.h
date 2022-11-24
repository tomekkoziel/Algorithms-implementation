#pragma once

#include <vector>

/*
    \brief Function that uses bubble sort algorithm to sort given std::vector

    Bubble Sort - iterates through every element of the table, if the current element is greater that the previous one the elements are being swapped.
*/
std::vector<int> BubbleSort(std::vector<int> v)
{
    bool change = true;

    while (change == true)
    {
        change = false;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] < v[i - 1])
            {
                std::swap(v[i - 1], v[i]);

                change = true;
            }
        }
    }

    return v;
}