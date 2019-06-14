//https://leetcode.com/problems/two-sum/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let result = 0;
    for(var i=0;i<nums.length;i++){
        for(var j=i+1;j<nums.length;j++){
            result = nums[i] + nums[j];
            if(result === target){
                return [i,j];
            }
        }
    }
    console.log("No such pair exist that meets the target.");
};
