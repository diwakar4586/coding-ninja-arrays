
Write a function which takes an array and prints the majority element (if it exists), otherwise prints “No Majority Element”. A majority element 
in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

Examples : 

Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater
than the half of the size of the array size. 

Input : {3, 3, 4, 2, 4, 4, 2, 4}
Output : No Majority Element
Explanation: There is no element whose frequency is
greater than the half of the size of the array size.

------------------------------------------------------------------------------------------------------------------------------------------------



#include <iostream>
using namespace std;
// without function;-----------------------level-4;
int main()
{
    int arr[] = {1, 2, 3, 1, 9, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxcount = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >> maxcount)
        {
            maxcount = count;
            index = i;
            }

        if(maxcount>n/2){
            cout<<arr[index]<<endl;
            return 0;
        }
        else{
            cout<<"no majority element"<<endl;
            return 0;
        }
    }
    return 0;
}



// with function

void findmajority(int arr[],int n){
    int maxcount =0;
    int index = -1;
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            

        }
        if(count>maxcount){
            maxcount =count;
            index = i;
        }


    }
    if(maxcount>n/2){
        cout<<"total counts: "<<maxcount<<endl;
        cout<<"element with maximum count is : "<<arr[index]<<endl;
    }
    else{
        cout<<"no majority element";
    }

}

int main()
{
    int arr[] = {0, 2, 2, 2,2 , 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findmajority(arr,n);

}
