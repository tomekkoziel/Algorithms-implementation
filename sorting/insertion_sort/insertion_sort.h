#include <vector>

/*
    \brief Function that uses insertion sort algorithm to sort given std::vector

    Insertion Sort - divides a table into two one that is sorted by definition and one that is not sorted. Than takes one by one element from the not sorted table and inserts it into the right position inside sorted table.
*/
std::vector<int> InsertionSort(std::vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i] < v[j])
            {
                std::swap(v[i], v[j]);
            }
        }
    }

    return v;
}