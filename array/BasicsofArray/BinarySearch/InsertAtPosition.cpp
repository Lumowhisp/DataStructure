#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;   // element mil gaya
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        // Agar element nahi mila toh insert position
        return start;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 3, 5, 6};
    int target;

    cout << "Enter target: ";
    cin >> target;

    int ans = obj.searchInsert(nums, target);
    cout << "Insert position of " << target << " is: " << ans << endl;

    return 0;
}