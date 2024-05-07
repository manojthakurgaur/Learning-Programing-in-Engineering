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
//11:37Pm 04/05/2024::shortin of arrays::1.slection short
//Apna college solution;
/*
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
*/
/*
//My solution:: I thought it is a slection short but ,It is called bubble short.Slection short is solved above by Apna college.
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

//Apna college bubble short::
/*int bubble_sort(int arr[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        counter++;
    }
}
*/
//Insertion short My solution:: 12:46Am of 5May //Not working
/*
 void insertionm_sort(int arr[],int n){
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[i]){
                    
                    for(int k=i-1;k>    j;k--){                        
                        arr[k+1]=arr[k];
                        
                    }
                 arr[j]=arr[i];   
                }
            }
        }
 }
 */
/* //Insertion shot Chat Gpta solution;11:46Pm of 5May
 void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
*/
/*
int main(){
    // int n;
    // cin>>n;

    int arr[1000]={12,45,23,51,19,8};
    //   for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    insertion_sort(arr,6);
    insertionm_sort( arr, 6);
    for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
    }
    return 0;

}

*/

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
//apna college ::Q.2.You have 15 rupees.1rupee=1 chocolat.3chocolat wrapper =1chocolat.
//solve::15->15/3->5/3->1=>21 chocolet. =>wrong
//rember 2 rappers are left and one is when 3 out of five are used so total 22 chocolet.

//11:05Am 6May2024:: Lec.8.4 Problems of arrays.

#include<iostream>
using namespace std;
/*
//Q.1 Given an array.Note maximum number till to that index.
void max_till_i(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            arr[i]=arr[i-1];
        }  
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//Solution by apna college.
void max_till_i_apna(int arr[],int n){
    mx=max(mx,a[i]);
    cout<<mx<<" ";
}
*/

// //Q2.Sum of all sub arrays.
//12:38Pm of 07/05/2024
// void sum_subarray(int arr[],int n){
//     int sum=0;
//     int m=n;
//     for(int i=0;i<n;i++){
//         int l=1;
//         for(int j=0;j<m;j++){
//             for(int k=i;k<l+i;k++){
//                 sum=sum+arr[k];
//             }
//             l=l+1;
//         }
//         m=m-1;
//     }
//     cout<<sum;
// }
//Soution by apna college.
void sum_subarray(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum[j]<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"size of the array:";
    cin>>n;
    int arr[1000];
    cout<<"\n"<<"Input the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    //max_till_i(arr,n);
    sum_subarray(arr,n);
   
}