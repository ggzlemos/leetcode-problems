#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        for(int i; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){

                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);

                    break;
                }
            }

        }

        return result;
        
    }
};