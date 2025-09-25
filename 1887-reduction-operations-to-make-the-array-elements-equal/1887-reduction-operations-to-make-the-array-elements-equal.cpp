class Solution {
public:
    int reductionOperations(vector<int>& nums) {
     map<int,int>a;
     for(int i=0;i<nums.size();i++){
        a[nums[i]]++;
     }  
     vector<pair<int,int>>p;
     for(auto it:a){
        p.push_back({it.first,it.second});
     }
     int step=0;
     int carry=0;
     for(int i=p.size()-1;i>0;i--){
        carry+=p[i].second;
        step=step+carry;
     }
     return step;
    }
};