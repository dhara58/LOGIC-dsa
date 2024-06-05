#include<iostream>
using namespace std;
 int temp=0;

 void input(int arr[],int n,int element)
 {
    for(int i=0;i<n;i++){
        arr[i]=(rand()%50)+1;
    }

 for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<"\n enter the element :";
    cin>>element;

 for(int i=0;i<n;i++){
    if(arr[i]==element){
      temp=1;
        cout<<"the element position is : "<<i;
        break;
    }
 }
 if(temp==0){
   cout<<"element not found in this array ";
 }
 }
 int main(){
   
    int n;
    int element;

   cout<<"enter the array size:";
    cin>>n;
     int arr[n];
     
     input(arr,n,element);
    return 0;
 } 