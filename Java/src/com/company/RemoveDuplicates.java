package com.company;

//  Given a sorted array nums, remove the duplicates in-place such that duplicates appeared at most twice and return the new length.
//
//    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
//
//    Example 1:
//
//    Given nums = [1,1,1,2,2,3],
//
//    Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
//
//    It doesn't matter what you leave beyond the returned length.

public class RemoveDuplicates {

    public void test(){

        int sorted_arr[] = {1, 1, 1, 2,2, 3, 4, 4, 4, 4, 5, 6};

        removeDuplicates(sorted_arr);

    }

    // Solution O(n) with O(1) extra memory
    public int removeDuplicates(int[] nums) {

        boolean hasDuplicate = false; // does this number already have a duplicate
        int dup = 0; // store the duplicate value
        int ignore = nums[0] - 1; // value indicate a duplicate was present at that index

        // Loop through and identify duplicates
        for(int i = 1; i < nums.length; i++){

            if(nums[i] == dup && hasDuplicate){
                nums[i] = ignore;
            }
            else if(nums[i] == nums[i-1] && !hasDuplicate){
                hasDuplicate = true;
                dup = nums[i];
            }
            else if( nums[i] != nums[i-1] && hasDuplicate){
                hasDuplicate = false;
            }
        }

        // Place non duplicate values into placeholder indices
        int placeholder = 0;

        for(int i = 1; i < nums.length; i++){
            // Only advance placeholder when the value isn't a duplicate
            if(nums[i] != ignore){

                nums[placeholder] = nums[i];
                placeholder++;
            }

        }
        return placeholder;


    }

}
