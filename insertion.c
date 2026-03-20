#include <iostream>
using namespace std;

int main() 
{
    int arr[100], n, i, pos, element;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // -------- INSERTION --------
    cout << "\nEnter position for insertion (1 to " << n+1 << "): ";
    cin >> pos;

    cout << "Enter element to insert: ";
    cin >> element;

    // Shift elements to right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = element;
    n++;

    cout << "\nArray after insertion: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // -------- DELETION --------
    cout << "\n\nEnter position for deletion (1 to " << n << "): ";
    cin >> pos;

    // Shift elements to left
    for(i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    cout << "\nArray after deletion: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
