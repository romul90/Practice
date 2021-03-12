class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<std::pair<int, int>> pairs;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            auto vector_pair = std::make_pair(nums[i], i);
            pairs.push_back(vector_pair);
        }
        
        sort(pairs.begin(), pairs.end());
        
        vector<int> res = {0, 1};
        
        vector<std::pair<int, int>>::iterator fit = pairs.begin();
        vector<std::pair<int, int>>::iterator sit = pairs.end();
        sit--;      

        while (true)
        {
            if (fit->first + sit->first > target)
            {
                sit--;
            }
            else if (fit->first + sit->first < target)
            {
                fit++;
            }
            else 
            {
                break;
            }
        }
        
        res[0] = fit->second;
        res[1] = sit->second;
        
        return res;
        
        
    }
};
