package com.company;

//    Given an array of non-negative integers, you are initially positioned at the first index of the array.
//
//    Each element in the array represents your maximum jump length at that position.
//
//    Determine if you are able to reach the last index.
//
//    Example 1:
//
//    Input: [2,3,1,1,4]
//    Output: true
//    Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

public class JumpGame {

        public void test() {

            int game_win[] = {2,3,1,1,4};
            int game_lose[] = {3,2,1,0,4};

            int result = play(game_win);
            System.out.println(result);
            result = play(game_lose);
            System.out.println(result);
        }
        
        public int play(int[] arr){

            int idx = arr[0];
            while(idx < arr.length){

                // if the next element is 0, you're stuck
                if (arr[idx + arr[idx]] == 0) {
                    return -1;
                }

                // If the next index is greater than the length of the array, you win
                if(idx + arr[idx] > arr.length){
                    return 1;
                }

                // Otherwise, jump to the next index
                else {
                    idx = idx + arr[idx];
                }
            }

            return 0;
        }
}
