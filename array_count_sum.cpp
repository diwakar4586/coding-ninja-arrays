#include <iostream>
using namespace std;




void getPairscount(int arr[],int n,int sum){
    int count =0;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                count++;
                cout<<"pair "<<count<<" is: "<<" at index: "<<i<<","<<j<<endl;

            }
        }

    }
    cout<<count<<endl;


}

int main(){

    int arr[] = {1,5,7,-1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;    
    getPairscount(arr,n,sum);

    return 0;
}

