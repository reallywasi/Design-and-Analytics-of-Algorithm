//__________________________ linear search__________________________

// #include <stdio.h>

// int linearSearch(int arr[], int n, int target) {
//     for (int i=0;i<n;i++) {
//         if (arr[i] ==target) {
//             return 1; 
//         }
//     }
//     return -1; 
// }
// int main(){
//     int arr[]={11,62,23,94,235,226,57,68,99,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int target=99;
//     int result = linearSearch(arr,n,target);

//     if (result != -1) {
//         printf("Element found n");
//     } else {
//         printf("Element not found\n");
//     }

//     return 0;
// }


//__________________________ binary search__________________________


#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high){
        int mid = low + (high-low)/2;

        if (arr[mid]==target){
            return mid; 
        } else if (arr[mid]<target){
            low=mid+1; 
        } else {
            high=mid-1; 
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,22,23,24,35,62,67,78,99,110};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 99;
    int result = binarySearch(arr,0,n- 1,target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
