class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Solution Explanation
        /*
        - Map storing key (num) and value (dist to target)
        - Traverse nums to see the specific val exists
        */

        unordered_map<int, int> nums2;
        vector<int> solution;
        int difference = 0;

        for(int i=0; i<nums.size(); i++) {
            difference = target-nums[i];
            if(nums2.find(difference)!=nums2.end()) {
                solution.push_back(nums2[difference]);
                solution.push_back(i);
                break;

            } else {
                nums2.insert(make_pair(nums[i], i));

            }

        }

        return solution;

    }
};