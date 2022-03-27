#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }


    int max = arr[0];
    int min = arr[0];

    for(int i =1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];

        }
        else if(min>arr[i]){
            min=arr[i];
        }

    }
    cout<<"max is :"<<max<<endl;
    cout<<"min is :"<<min<<endl;
    return 0;
}

