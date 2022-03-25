#include<iostream>
using namespace std;



void reverse(int arr[], int n)
{
    int i =0;int j = n-1;
    for (int i = 0; i < j ; i++)

    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        j--;

    }
    
}

int main()
{

    int n;
    cout << "enter the siz of array" << endl;
    cin >> n;

    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}