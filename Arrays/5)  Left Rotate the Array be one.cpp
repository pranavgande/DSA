//brute force- store the first element at the lst and bring all other elements in the previous index

#include <bits/stdc++.h>
using namespace std;

void rotatearr(int arr[], int n)
  int temp[n];
  for (int i = 0; i<n;i++);
    temp [i-1]= arr[i];
temp[n-1]=arr[0];
for(int i -0;i<n;i++)
  cout << temp[i];

int main(){
  int arr[]={};
  int n;
  rotatearr(arr[], n);
}

//optimal approach arr[i] = arr[i+1] 
#include <bits/stdc++.h>
using namespace std;

void solve(arr[], int n){
  int temp[]= arr[0];
for(int i =0;i<n;i++){
  arr[i]=arr[i+1];
}
int main(){
  int n = 5;
  int arr][={};
solve(arr[],n);
}
