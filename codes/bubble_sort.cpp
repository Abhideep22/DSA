#include <iostream>
using namespace std;
int bubble_sort(int ar, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < n - size; j++)
        {
            if (ar[j] < ar[j + 1])
                swap(ar[j], ar[j + 1]);
        }
    }
}
int main()
{
    int ar[5] = {10, 5, 45, 19, 2};
    int size = sizeof(ar);

    bubble_sort(ar, size);
    return 0;
}