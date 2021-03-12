class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::vector<int> result = {0, 1};
        map<int, int> map;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            int complim = target - nums[i];
            auto search = map.find(complim);
            if (search != map.end())
            {
                result[0] = i;
                result[1] = search->second;
                return result;
            }
            
            auto pair = std::make_pair(nums[i], i);
            
            map.insert(pair);
        }
        
        return result;       
        
    }
};
