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