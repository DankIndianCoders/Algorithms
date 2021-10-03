#include<bits/stdc++.h>
using namespace std;
//implementing the linear search function 
int LinearSearch(int arr[],int x){
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=-1;
    for(int i=0;i<n;++i){
        if(arr[i]==x){
            pos=i;
            break;
        }
    }
    return pos;
}
int main(){
    int arr[]={1,2,3,4,5,6,8};//declaring the array.
    cout<<"Enter the element you want to find: ";
    int x;
    cin>>x;
    int res=LinearSearch(arr,x);//calling the linear search function
    if(res==-1)//if res is -1 then the element is not present in the array 
    cout<<"\nThe element is not present in the array.";
    else //just print the postion of the element in the array.
    cout<<"\nThe element is present at location: "<<res;
    return 0;
}