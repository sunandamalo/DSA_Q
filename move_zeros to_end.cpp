// move zeros to end c++ solution
// input = {0,1,0,3,2}
// output = {1,3,2,0,0}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

// ekta variable e 0 store kora holo jeta nonzero k track korbe

        int nonzero = 0;
        for(int i = 0; i<nums.size(); i++){

// kono array element not equals to 0 holei swap with nonzero

            if(nums[i] !=0){
                swap(nums[i], nums[nonzero]);
            nonzero++;
            }
            
        }
        
    }
};