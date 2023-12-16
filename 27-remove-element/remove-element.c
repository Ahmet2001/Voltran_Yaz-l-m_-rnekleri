int removeElement(int* nums, int numsSize, int val) {
    int liste = 0;
        for(int i = 0; i< numsSize; i++){
            if(nums[i] != val){
                nums[liste] = nums[i];
                liste = liste + 1;
  
          }
        }
return liste;
}