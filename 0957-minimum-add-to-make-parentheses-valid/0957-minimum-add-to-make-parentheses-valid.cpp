class Solution {
public:
    int minAddToMakeValid(string s) {
        int res=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt+=1;
            }
            else{
                if(cnt==0){
                    res+=1;
                }
                cnt=max(cnt-1,0);
            }

        }
        return res+cnt;
        
    }
};