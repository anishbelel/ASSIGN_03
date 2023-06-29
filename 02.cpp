#include <iostream>
using namespace std;

void pyramid(int arr[][5], int size, int j)
{
    if (size == 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        arr[j][i] = arr[j - 1][i] + arr[j - 1][i + 1];
    }

    pyramid(arr, size - 1, j + 1);
    return;
}

int main()
{
    int arr[5][5] = {{2, 3, 11, 7, 8}};

    pyramid(arr,5,1);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i); j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
