#include <iostream>
#include <vector>
using namespace std;

/*1480. Running Sum of 1d Array*/

vector<int> runningSum(vector<int>& nums) {
    if (nums.empty()) {
        return {};
    }

    vector<int> result(nums.size());
    result[0] = nums[0];
    for (int i = 1; i < static_cast<int>(nums.size()); i++) {
        result[i] = result[i - 1] + nums[i];
    }
    return result;
}

int fetchSumBetweenIndices( vector<int>& prefixSum, int left, int right) {
    if (left < 0 || right >= static_cast<int>(prefixSum.size()) || left > right) {
        throw invalid_argument("Invalid indices");
    }
    return prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = runningSum(nums);
    for (int i : result) {
        cout << i << " ";
    }

    int sum = fetchSumBetweenIndices(result, 1, 3); // Example usage of fetchSumBetweenIndices
    cout << "\nSum between indices 1 and 3 is " << sum << endl;   
    return 0;
}


