#include <vector>

/*
    \brief Function that uses selection sort algorithm to sort given std::vector

    Selection Sort - searches for the minimal value and replaces it with the first element, than repeats the same action with next elements up until it reaches the last element.
*/
std::vector<int> SelectionSort(std::vector<int> v)
{
    int min, min_indx;

    for (int i = 0; i < v.size(); i++)
    {
        min = v[i];

        for (int j = i + 1; j < v.size(); j++)
        {
            if (min > v[j])
            {
                min = v[j];
                min_indx = j;
            }
        }

        if (v[i] != min)
        {
            std::swap(v[i], v[min_indx]);
        }
    }

    return v;
}