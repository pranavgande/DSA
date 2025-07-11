/*Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.*/

// Brute - if arr[i] < arr[i+1], then true

#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
      for (int i =0;i<n;i++){
            for(j=i+1;j<n;j++){
                  if(arr[i]<arr[j]){
                        return false;
                  }
            }
      }
      return true;
}

int main(){
      int arr[]={};
      bool ans = isSorted(arr,n);
      return 0;
}

//TC - O(N^2), SC - O(N)

//Optimal:-
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
      for(int i =1; i<n;i++){
            if(arr[i]<arr[i-1]){
                  return false;
            }
           return true;
      }
}

int main(){
      int arr[]={};
      int n= sizeof.arr[]/sizeof.arr[0];
      if(isSorted(int arr[], int n)){
            cout << "Array is sorted" <<endl;
      }
      else cout << "Array is not sorted" << endl;
      return 0;
}
