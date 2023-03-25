#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int arr[30];
    int i, n, j, del;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting the given array in ascending order.
    sort(arr, arr + n);

    // printing ascending array
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // reversing and descending array
    cout<<endl<<"Descending array"<<endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Enter the index you want to delete" << endl;
    cin >> del;
    for (i = 0; i < n; i++)
    {

        if (i == del)
        {
            for (j = 0; j < (n - 1); j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
            n--;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}