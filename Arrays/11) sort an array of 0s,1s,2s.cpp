/*Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

//brute force solution- use merge sort

//better approach- take 3 distince values to take count of three numbers, then overwrite them in the array

void SortArray(vector<int> &arr, int n){
  int n = arr.size()
  int cnt0=0,cnt1=0;cnt2=0;

  for(int i = 0; i<n;i++)
    if(arr[i]==0)cnt0++;
    else if(arr[i]==1) cnt1++;
    else(arr[i==2])cnt2++;

  for(int i = 0;i<cnt0;i++) arr[i]=0;
  for(int i = cnt0;i<cnt0+cnt1; i++) arr[i]= 1;
  for(int i = cnt0+cnt1;i<cnt1+cnt2;i++) arr[i]=2; //this is replacing or manually overwriting
}

//OPTIMAL approach - The Dutch Natoinal Flag Algorithm

void sortArr(vector<int>& nums){
  int n = nums.size();
  int low = 0;
  int mid = 0;
  int high = n-1;

  while(mid<=high)
    if(nums[mid]==0){
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    } else if(nums[mid]==1)
      mid++;
}     else {
      swap(nums[mid], nums[high])
      high--;
}
