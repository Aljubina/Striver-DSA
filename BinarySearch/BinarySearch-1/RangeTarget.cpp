class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0, right = n-1;
        int first = -1, last = -1;

        while(left <= right) {
            int mid = (left + right)/2;
            if(arr[mid] == target) {
                first = mid;
                right = mid - 1;
            } else if(arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        left = 0, right = n-1;

        while(left <= right) {
            int mid = (left + right)/2;
            if(arr[mid] == target) {
                last = mid;
                left = mid + 1;
            } else if(arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return {first , last};
    }
};