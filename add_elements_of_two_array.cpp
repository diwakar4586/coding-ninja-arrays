#include<iostream>
using namespace std;

void swap(int *a ,int *b );


void sum_array(int arr[],int arr_2[],int n,int m){
    int sum_1 = 0;
    for(int i = 0;i<n;i++){
        sum_1=sum_1+arr[i];
    }

    int sum_2 = 0;
    for(int i = 0;i<m;i++){
        sum_2=sum_2+arr_2[i];
    }

    cout<<sum_1+sum_2;


}

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"this is array 1"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
     for(int i =0;i<n;i++){
        cout<<arr[i];

    }
    cout<<endl;


    cout<<"size of array_2 ";
    int m;
    cin>>m;

    int arr_2[m];
    cout<<"this is array 2"<<endl;
    for(int i =0;i<m;i++){
        cin>>arr_2[i];

    }

     for(int i =0;i<m;i++){
       cout<<arr_2[i];

    }
    cout<<endl;
   sum_array(arr,arr_2,n,m);

//I A M DEVANSH. I AM NOW APPENDING A NEW CPP PROGRAM TO THIS FILE HERE AND THIS WILL BE COMMITTED!!!!!
//THIS CODE WILL NOW INPUT 2 MORE NUMBERS AND SWAP THEM USING FUNCTION !!!!

    int x,y;
    cout<<"Enter Two Numbers To Swap: ";
    cin>>x>>y;

    swap(&x,&y);

    cout<<"\nAfter Swapping Two Numbers: ";
    cout<<x<<" "<<y<<" \n";

    return 0;
}
void swap(int *a,int *b)
{
 int z;
 z=*a;

 *a=*b;

 *b=z;}

