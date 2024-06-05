#include <iostream> 
using namespace std; 
 
void random_data(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
     arr[i]=(rand()%50)+1; 
    } 
} 
void print(int arr[],int n){ 
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<"\t"; 
    } 
} 
// selection sort
void sort_array(int arr[],int n) 
{ 
    int temp; 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = i + 1; j < n; j++) 
        { 
            if (arr[i] > arr[j]) 
            { 
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }    
        } 
    } 
} 
int search(int arr[],int high,int low,int mid,int find_element) 
{ 
    cout<<"\nenter the element which you want to find :"; 
    cin>>find_element; 
 
    while (low <= high) 
    { 
        mid = (low + high) / 2; 
 
        if (arr[mid] == find_element) 
        { 
            return mid; 
        } 
        if (arr[mid] < find_element) 
        { 
            low = mid + 1; 
        } 
        else 
        { 
            high = mid - 1;  
        } 
    } 
    return -1; 
} 
 
int main() 
{ 
     int n; 
    cout<<"enter the array size :"; 
    cin>>n; 

    int arr[n]; 
    int low = 0; 
    int high = n-1; 
    int mid; 
    int find_element; 
 
   
     random_data(arr,n); 
     sort_array(arr,n); 
     print(arr,n); 
    
    int index = search(arr,high,low,mid,find_element); 
 
    if (index != -1) 
    { 
        cout<<"Element found at index:"<< index << endl; 
    } 
    else 
    { 
        cout<<"Element not found" << endl; 
    } 
    return 0; 
}