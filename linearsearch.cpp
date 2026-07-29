#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found.";

    return 0;
}