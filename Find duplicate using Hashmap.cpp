/// Find duplicate using Hashmap

import java.io.*;
import java.util.* ;

import java.util.ArrayList;

public class Solution{
    public static int findDuplicate(ArrayList<Integer> arr, int n){
        HashMap<Integer, Integer> map = new HashMap<>();

        int ans=0;
        for(int num:arr){
            if(map.containsKey(num)){
                ans = num;
                break;
            }
            else{
                map.put(num, 1);
            }
        }
        return ans;
    }
}