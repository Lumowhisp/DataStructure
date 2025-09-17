#include <iostream>
using namespace std;

// Dummy API – yahan tum apna bad version set kar sakte ho
bool isBadVersion(int version) {
    int bad = 4; // maan lo 4th version se bug start hota hai
    return version >= bad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n;
        int ans = n;   // assume last version is bad

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isBadVersion(mid)) {
                ans = mid;       // mid ho sakta hai answer
                end = mid - 1;   // aur chhota check karo
            } else {
                start = mid + 1; // bad version aage hai
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n = 5; // total versions
    cout << "First bad version: " << s.firstBadVersion(n) << endl;
    return 0;
}