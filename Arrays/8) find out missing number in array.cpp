/*Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.*/

//Brute force- use the linear search

#include<bits/stdc++.h>
using namespace std;

int FindNumber(vector<int>&a, int N){
  //outer loop runs from 1 to N
  for(int i = 0; i<N; i++)
    int flag = 0;
  for(int j=0;j<N-1;j++)
    if(arr[j]==i)
      //if the element is found in array
      int flag =1;
      break;
if(flag ==0) return i;


int main(){
  int N = ;
  int arr[]={};
  int answer = FindNumber(a,N);
  return 0;
}


//Better approach - use hashing
#include <bits/stdc++.h>
using namespace std;

int FindNumber(vector<int>&a, int N){
  int hash[N+1]={0};

  for(int i = 0; i< N; i++)
    hash[a[i]]++;

  for(int i = 0; i<=N; i++)
    if(hash[a[i]]==0) return i;

  return -1;

int main(){
  int arr[]={};
  int N = ;
  int answer = FindNumber(a,N);
  return 0;
}
