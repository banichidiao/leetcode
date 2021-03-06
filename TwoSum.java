package com.leetcode.solution;

import java.util.HashMap;
import java.util.Map;

public class LeetcodeSolution {
	public int[] twoSum(int[] numbers, int target){
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		for(int i = 0; i < numbers.length; map.put(numbers[i], i++)){
			if(map.containsKey(target - numbers[i])){
				return new int[]{map.get(target - numbers[i]), i};
			}
		}
		return new int[]{0 , 0};
	}
}