#include<bits/stdc++.h>
using namespace std;

// Intution_1 is Selection Sort
// Intution_2 is insertion sort
// Intution_3 is bubble sort

void printArray(int arr[], int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Find min Element Index ----------------------------
int minElement(int arr[], int first, int last){
    int Small_index = first;
    for(int i=first; i<last; i++){
        if (arr[i] < arr[Small_index]){
            Small_index = i;
        }
    }
    return Small_index;
}

// You have cards in one hand and other hand empty.
// take cards in accending order on place in other hand
void intution_1(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex = minElement(arr,i+1,n);
        if(arr[i] > arr[minIndex]){
            swap(arr[i], arr[minIndex]);
        }
    }
}
//-----------------------------------------------------

// Consider part of array already sorted.
// Insert the element next to sorted array to it's correct possion in sorted array.

// Sorted | Unsorted

// 13 | 46 24 52 20 9
// 13 46 | 24 52 20 9
// 13 24 46 | 52 20 9
// 13 24 46 52 | 20 9
// 13 20 24 46 52 | 9
// 9 13 20 24 46 52 |

// Putting element at its correct possion in sorted array-----------------------

// while(void_space>0 && value<arr[void_space-1]){
//             arr[void_space] = arr[void_space-1];
//             void_space--;
//         }
//         arr[void_space] = value;

void intution_2(int arr[], int n){
    for(int i=1; i<n; i++){
        int value = arr[i];
        int void_space = i;

        while(void_space>0 && value<arr[void_space-1]){
            arr[void_space] = arr[void_space-1];
            void_space--;
        }
        arr[void_space] = value;
    }
}

// Swap alternate elements
void intution_3(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    //intution_1(arr,n);
    //intution_2(arr,n);
    intution_3(arr,n);
    printArray(arr,n);

    return 0;
}