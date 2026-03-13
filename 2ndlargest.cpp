#include <iostream>
#include <climits>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
}

void dispayArray(int arr[], int n)
{
    for(int i = 0;i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findSecondLargest(int arr[], int n)
{
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    inputArray(arr, n);

    cout << "Array: ";
    dispayArray(arr, n);

    int result = findSecondLargest(arr, n);

    if(result == INT_MIN)
        cout << "Second largest element does not exist\n";
    else
        cout << "Second largest element: " << result << endl;

    return 0;
}
