class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m-1;
        int y=n-1;
        for(int i=m+n-1;i>=0;i--){
            if(x<0){
                nums1[i]=nums2[y];
                y-=1;
            }
            else if(y<0){
                break;
            }
            else if(nums1[x]>nums2[y]){
                nums1[i]=nums1[x];
                x-=1;
            }
            else{
                nums1[i]=nums2[y];
                y-=1;            }
        }
        
    }
};