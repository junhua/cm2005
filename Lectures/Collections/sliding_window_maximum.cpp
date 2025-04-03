#include <iostream>
#include <vector>

std::vector<int> slidingWindowMaxNaive(const std::vector<int>& nums, int k) {
    std::vector<int> result;
    int n = nums.size();
    
    // Edge case: empty array or window size larger than array
    if (n == 0 || k > n) {
        return result;
    }
    
    // For each possible window position
    for (int i = 0; i <= n - k; i++) {
        int maxVal = nums[i]; // Start with first element in window
        
        // Find maximum in current window using linear search
        for (int j = 1; j < k; j++) {
            if (nums[i + j] > maxVal) {
                maxVal = nums[i + j];
            }
        }
        
        // Add current window's maximum to result
        result.push_back(maxVal);
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    std::vector<int> maxValues = slidingWindowMaxNaive(nums, k);
    
    std::cout << "Sliding window maxima: ";
    for (int val : maxValues) {
        std::cout << val << " ";
    }
    
    return 0;
}