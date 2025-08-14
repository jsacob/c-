#include <algorithm>
#include <iostream>
#include <string>


class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
		if (s.size() != t.size()) return false;
		
		int count[26] = {0};

		for(char c : s){
			count[c - 'a']++;
		}
		for(char c : t){
			count[c - 'a']--;
		}

		for(int i = 0; i < 26; i++){
			if(count[i] != 0) return false;
		}
		return true;
    }
};

int main() {
	std::string s = "racecar"; std::string t = "carrace";
	std::string sF = "jar"; std::string tF = "jam";
	Solution sol;
	std::cout<< "valid " << sol.isAnagram(s, t) << std::endl;
	std::cout<< "invalid " << sol.isAnagram(sF, tF) << std::endl;
}
