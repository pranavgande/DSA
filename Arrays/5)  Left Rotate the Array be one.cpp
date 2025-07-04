//brute force- store the first element at the lst and bring all other elements in the previous index

#include <bits/stdc++.h>
using namespace std;

void rotatearr(int arr[], int n)
  int temp[n];
  for (int i = 0; i<n;i++);
    temp [i-1]= arr[i];
temp[n-1]=arr[0];
