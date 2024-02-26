class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;

                }
            }
        }
        return answer;
    } 
    
};


//optimized solution 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndexMap; // Stores num-index pairs
        vector<int> answer;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numIndexMap.find(complement) != numIndexMap.end()) {
                // Found complement in the map
                answer.push_back(numIndexMap[complement]);
                answer.push_back(i);
                return answer;
            }
            // Store num-index pair in the map
            numIndexMap[nums[i]] = i;
        }
        
        return answer;
    }
};