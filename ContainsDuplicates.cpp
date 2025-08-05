#include <iostream>
#include <vector>
#include <unordered_set>
class Solution {

public:
    bool containsDuplicate(std::vector<int>& nums) {
		std::unordered_set<int>seen;
		for(int num : nums){
			if(seen.count(num)){
				return true;
			}
			seen.insert(num);
		}
		return false;
	}
};

int main(){
	std::vector<int>nums={1, 2, 3, 4, 5, 6};
	Solution sol;
	std::cout<<sol.containsDuplicate(nums);
	return 1;
	}

// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.
