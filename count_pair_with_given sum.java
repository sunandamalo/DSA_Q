
// count pair with given sum
// sum = 6  , input= [1,5,7,-1]
// output 2 karon 2to pair present
class Solution {
    int getPairsCount(int[] arr, int n, int k) {
        // code here
        // kota total pair ache bar korte hoeb
        
        // start a new map
        HashMap<Integer,Integer> map = new HashMap<>();
        // ekta count variable nebo
        int count =0;
        for(int i=0; i<n; i++){
            // sum-arr[i] jodi map e thake tobe frequency ta +1 kore dao
            int b = k - arr[i];
            
            if(map.containsKey(b)){
                // frequency barie dao
                count += map.get(b);
            }
            
            // now check arr[i] jodi map e aage theke present thake
            //tar frequency barie +1 kore dao
            
            if(map.containsKey(arr[i])){
                map.put(arr[i] , map.get(arr[i]) +1);
            }
            
            // jodi arr[i] aage theke kakhono map e na theke tahole take map e rekhe tar frequency 1 kore dao
            
            else{
                map.put(arr[i], 1);
            }
        }
        return count;
    }
}