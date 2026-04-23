class Solution {
public:

    void func(int ind , string digits , string combos[] , vector<string> &ans , string s)
    {
        if(ind == digits.size())
        {
            ans.push_back(s);
            return;
        }

        int digit = digits[ind] - '0';

        for(int i =0;i< combos[digit].size();i++)
        {
            func(ind+1 , digits , combos , ans , s+combos[digit][i]);
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        string combos[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string s = "";
        func(0,digits,combos,ans,s);
        return ans;
        
    }
};