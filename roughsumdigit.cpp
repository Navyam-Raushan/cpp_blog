#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the length" << endl;
    cin >> n;
    int arr[30];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i]<<"   ";
    }

    return 0;
}
