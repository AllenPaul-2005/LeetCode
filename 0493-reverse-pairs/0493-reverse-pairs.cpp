class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return team(nums,n);
        
    }
private:
    /* Merge function to merge two 
    sorted halves and count reverse pairs*/
    void merge(vector<int>& arr, int low, int mid, int high) {
        // temporary array
        vector<int> temp; 
        
        // starting index of left half of arr
        int left = low;  
        
        // starting index of right half of arr
        int right = mid + 1; 

        // Merge and count reverse pairs
        while (left <= mid && right <= high) {
            
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } 
            else {
                temp.push_back(arr[right]);
                right++;
                
            }
        }

        // Copy remaining elements from left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements from right half
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Transfer sorted elements from temp to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
private:
    //Function to count reverse pairs
    int countPairs(vector<int> &arr, int low, int mid, int high) {
        long long right = mid + 1;
        long long cnt = 0;
        
        for (int i = low; i <= mid; i++) {
            
            /*while right is less than equal to high 
           and arr[i] is greater than 2 * arr[right] 
           then increment right by 1*/
            while (right <= high && (long long)arr[i] > (long long)2 * arr[right]) right++;
            
            cnt += (right - (mid + 1));
        }
        //Return the count
        return cnt;
    }
private:
    /* Merge sort function to sort the
    array and count reverse pairs*/
    int mergeSort(vector<int>& arr, int low, int high) {
        int cnt = 0;
        
        if(low >= high){
            return cnt;
        }
        int mid = low + (high - low) / 2;
            
        // Sort left half
        cnt += mergeSort(arr, low, mid); 
            
        // Sort right half
        cnt += mergeSort(arr, mid + 1, high);
        
        cnt += countPairs(arr, low, mid, high);
            
        // Merge and count pairs
        merge(arr, low, mid, high); 
        
        //Return the count of reverse pairs
        return cnt;
    }
private:
    int team(vector <int> & skill, int n){
        return mergeSort(skill, 0, n - 1);
    }
};