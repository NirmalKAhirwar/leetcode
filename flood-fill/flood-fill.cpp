class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int val, int newColor)
    {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] == newColor || image[i][j] != val)
        {
            return;
        }
        image[i][j] = newColor;
        // UP Movement
        dfs(image, i+1, j, val, newColor);
        // Down Movement
        dfs(image, i-1, j, val, newColor);
        // Right Movement
        dfs(image, i, j+1, val, newColor);
        // Left Movement
        dfs(image, i, j-1, val, newColor);
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        dfs(image,sr,sc,val,color);
        return image;
    }
};