class Solution {
public:
    int trap(vector<int>& height) {
        // maintain two pointers left and right, pointing to the leftmost and
    // rightmost index of the input array
    int n = height.size();
    int left = 0, right = n - 1, water = 0;
 
    int maxLeft = height[left];
    int maxRight = height[right];
 
    while (left < right)
    {
        if (height[left] <= height[right])
        {
            left++;
            maxLeft = max(maxLeft, height[left]);
            water += (maxLeft - height[left]);
        }
        else {
            right--;
            maxRight = max(maxRight, height[right]);
            water += (maxRight - height[right]);
        }
    }
 
    return water;
    }
};