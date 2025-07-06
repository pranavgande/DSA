 /*Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .*/

//Brute force- use a temp array, for rotating array, copy the k elements in the temp arr[], shift the n-k elements , put the k elements that index

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k)
if(n==0)
return;
k = k %n
if (k>n)
return;
temp[k];
for(int i =n-k;i<n;i++)
 temp[i-n+k]=arr[i];
for (int i = n-k-1; i<k;i++)
 
