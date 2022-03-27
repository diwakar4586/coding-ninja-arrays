#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr_1[10000];
    cout << "arr_1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr_1[i]<<" ";
    }
    cout<<endl;

    int z;
    cout << "enter the size of 2nd array" << endl;
    cin >> z;

    int arr_2[10000];
    
    cout << " array_2 is:" << endl;

    for (int i = 0; i < z; i++)
    {
        cin >> arr_2[i];
    }

    for (int i = 0; i < z; i++)
    {
        cout << arr_2[i]<<" ";
    }
    cout<<endl;
    int rough[1000] = {0};


    for(int i = 0;i<n;i++){
        for(int j = 0;j<z;j++){
            if((arr_1[i]==arr_2[j]) && (arr_2[j]!=rough[j])){
                cout<<arr_2[j]<<endl;
                rough[j]=arr_2[j];
                break;
                
                
            }
        }
    }

    return 0;
}