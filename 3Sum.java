class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        HashSet<List<Integer>> set = new HashSet<>();
        if(nums.length == 0){
            return new ArrayList<>(set);
        }
        Arrays.sort(nums);
        for(int i =0; i<nums.length-2; i++){
            int start = i+1;
            int end = nums.length - 1;
            while(start<end){
                int curr = nums[i] + nums[start] + nums[end];
                if(curr == 0){
                    set.add(Arrays.asList(nums[i], nums[start], nums[end]));
                    start++;
                    end--;
                }
                else if(curr < 0){
                    start++;
                }
                else if(curr > 0){
                    end--;
                }
            }
        }
        return new ArrayList<>(set);

    }
}