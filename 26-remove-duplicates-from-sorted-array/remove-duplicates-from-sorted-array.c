int removeDuplicates(int* nums, int numsSize){
        int liste = 1;
        for(int i = 1; i < numsSize ; i++){
            if (nums[i] != nums[i - 1]){
                nums[liste] = nums[i];
                liste++;
            }
        }
            
  
       
        
return liste;
}







