#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = m.find(target-nums[i]);
            if(it!=m.end()){
                return vector<int>{it->second,i};
            }
            m[nums[i]] = i;
        }
        return {};
        
    }
};
int main(){
    vector<int> nums={1,2,3,4,5};
    Solution s;
    auto res = s.twoSum(nums,3);
    if(res.size()==0){
        cout<<"false"<<endl;
        return 0;
    }
    printf("x=%d,y=%d\n",res[0],res[1]);
    return 0;

}