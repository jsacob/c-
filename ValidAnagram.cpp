#include <algorithm>
#include <iostream>
#include <string>


class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
		std::sort(s.begin(), s.end());
		std::sort(t.begin(),  t.end());

		if(s == t) {
			return 1;
		}
		return 0;
	}
};

int main() {
	std::string s = "racecar"; std::string t = "carrace";
	std::string sF = "jar"; std::string tF = "jam";
	Solution sol;
	std::cout<< "valid " << sol.isAnagram(s, t) << std::endl;
	std::cout<< "invalid " << sol.isAnagram(sF, tF) << std::endl;
}
