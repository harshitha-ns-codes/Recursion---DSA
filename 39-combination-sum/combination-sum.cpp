class Solution {
    public:
        void findcombinations(int ind , int target , vector<int> &arr ,vector<int> &ds, vector<vector<int>> &ans  ){
            if(ind == arr.size()){
                if(target == 0){
                    ans.push_back(ds);
                }
                return;
            }

            if(arr[ind] <= target){
                ds.push_back(arr[ind]);
                findcombinations(ind,target-arr[ind],arr,ds,ans);
                ds.pop_back();
            }

            findcombinations(ind+1,target,arr,ds,ans);
        }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinations(0,target,candidates,ds,ans);
        return ans;
        
    }
};