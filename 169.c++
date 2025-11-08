class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        for(int i:nums){
           int count=0;
            for(int j:nums){
                if(j==i){
                    count++;
                }  
            }
            if(count>size/2){
                return i;
            }
        }
        return -1;
    }
};
