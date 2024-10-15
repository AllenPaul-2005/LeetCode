class Solution {
public:
    long long minimumSteps(string s) {
        long long res=0;
        int l=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0'){
                res+=(j-l);
                l+=1;
            }
        }
        return res;
        
    }
};