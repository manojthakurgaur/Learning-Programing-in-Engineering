// This file contains all the code practise that has been done during Teaching DSA by apna college course on youtube.
// Q1.Linear search..23/04/2024
// #include<iostream>
// using namespace std;
// class Solution{
// public:
//     int searching(int arr[],int n,int key){
//     for(int count=0;count<n;count++){
//         if(arr[count]==key){
//             return count+1;
//         }
//     }
//     return -1;
//     }
// };

// int main(){
//     int n;
//     cout<<"Size of array is"<<endl;
//     cin>>n;
//     int key;
//     cout<<"The number to be searched"<<endl;
//     cin>>key;

//     int arr[100];
//     cout<<"input the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

//     Solution obj;
//     cout<<obj.searching(arr,n,key);
//     return 0;

//}//Time complexity of this program is o(n) as traversing the whole array.
#include<iostream>
using namespace std;  
/*    int search(int arr[],int n, int target) {
        int s=0;    
        int e=n;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(target==arr[mid]){
                return mid;
            }
            else if(target>arr[mid]){
                s=e+1;
            }
            else{
                e=e-1;
            }
            
        }
        return -1;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    cout<<search(arr,n,target);
    return 0;
}
*/
void selection_sort(int arr[],int n){
    
    for(int j=0;j<n;j++){
        int temp=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;                
            }
        }
    }
}
                


int main(){
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    return 0;

}


//chat gpta solution
// void selection_sort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_index = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_index]) {
//                 min_index = j;
//             }
//         }
//         if (min_index != i) {
//             // Swap arr[i] with arr[min_index]
//             int temp = arr[i];
//             arr[i] = arr[min_index];
//             arr[min_index] = temp;
//         }
//     }
// }

/*int main() {
    int arr[] = {9, 8, 7, 12, 13, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/