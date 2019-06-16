// https://leetcode.com/problems/duplicate-zeros/

var duplicateZeros = function(arr) {
    console.log(arr);
    for(var i = 0; i < arr.length; i++){
        if(arr[i] === 0){
            if(i != arr.length - 1 && i+1 <= arr.length){
                for(var j = arr.length - 1; j >= i+2; j--){
                    arr[j] = arr[j-1];
                }
                    arr[i+1] = 0;
                    i++;
            }
        }
    }
    console.log(arr);
};

let arr = [1,0,2,3,0,4,5,0];
duplicateZeroes(arr);
