#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        //go to right wala part
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        //go to left wala part
        else if (arr[mid > key])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 11, 13, 17};

    int size1;
    cout << "Enter size of the array : ";
    cin >> size1;

    int arr1[100];
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    int size2;
    cout << "Enter size of the array : ";
    cin >> size2;

    int arr2[100];
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int evenIndex = binarySearch(even, 6, 20);
    cout<< "index of 20 is : "<<evenIndex<<endl;
    int oddIndex = binarySearch(odd, 5, 13);
    cout<< "index of 13 is : "<<oddIndex<<endl;
    return 0;
}