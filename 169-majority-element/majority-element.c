int majorityElement(int* nums, int numsSize){
int key, j;
    if (numsSize==1)
      return nums[0];
    for (int i = 1; i <= numsSize-1; i++)
    {
        key = nums[i];
        j = i-1;
               while(j>=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
  
    return nums[numsSize/2];
}