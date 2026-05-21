class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i = 0; i < n; i++) {

            int target = 2 * arr[i];

            int low = 0;
            int high = n - 1;

            while(low <= high) {

                int mid = low + (high - low) / 2;

                if(arr[mid] == target && mid != i) {
                    return true;
                }
                else if(arr[mid] < target) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};