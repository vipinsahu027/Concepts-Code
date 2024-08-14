#include<bits/stdc++.h>
using namespace std;

// BruteForce
// Is to make array sorted and choose second last elements.

// BetterApproach
// 1. Find the maximum and minimum elements
// 2. Find the maximum and minimum elements excluding the max amd min in step 1.

pair<int, int> SecondLargestSmallest(int arr[], int n){
    if(n==0 || n==1) return make_pair(-1,-1);

    int smallest = INT_MAX, largest = INT_MIN;

    for(int i=0; i<n; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest,arr[i]);
    }

    int Secondsmallest = INT_MAX, Secondlargest = INT_MIN;

    for(int i=0; i<n; i++){
        if( Secondsmallest>arr[i] && arr[i] != smallest ) Secondsmallest = arr[i];
        if( Secondlargest<arr[i] && arr[i] != largest ) Secondlargest = arr[i];
    }

    return make_pair(Secondsmallest, Secondlargest);
}

// Optimal Approch
int SecondLargestElement(int arr[], int n){
    if(n==0 || n==1) return -1;

    int largest, secondLargest;
    largest = secondLargest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int SecondSmallestElement(int arr[], int n){
    if(n==0 || n==1) return -1;
    
    int small, secondSmall;
    small = secondSmall = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<small){
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i]>small && arr[i]<secondSmall){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

pair<int, int> SecondOrderElement(int arr[], int n){
    if(n==0 || n==1) return make_pair(-1, -1);

    int largest, secondLargest, small, secondSmall;
    largest = secondLargest = small = secondSmall = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }

        if(arr[i]<small){
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i]>small && arr[i]<secondSmall){
            secondSmall = arr[i];
        }
    }
    return make_pair(secondSmall, secondLargest);
}

int main() {
    int n;
    cin>>n;
    int* arr = new int[n];
    
    for(int i=0; i<n; i++) cin>>arr[i];

    // pair<int, int> SecondElements = SecondLargestSmallest(arr, n);
    // cout<<"Second Smallest : "<<SecondElements.first<<endl<<"Second Largest : "<<SecondElements.second<<endl;

    int secondLarge = SecondLargestElement(arr, n);
    cout<<"SecondLargestElement: "<< secondLarge<<endl;

    int secondSmall = SecondSmallestElement(arr, n);
    cout<<"SecondSmallestElement: "<< secondSmall<<endl;

    pair<int, int> Elements = SecondOrderElement(arr, n);
    cout<<"\nSecondSmallestElement: "<<Elements.first<<"\nSecondLargestElement: "<<Elements.second<<endl;

    return 0;
}