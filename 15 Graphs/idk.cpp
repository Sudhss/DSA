using vi = vi;
class Solution {
private:
    void dfs(int row,int col,vector<vi>& ans,vector<vi>&image,int color,vi delRow, videlCol){
        ans[row][col] = color;


    }
public:
    vector<vi> floodFill(vector<vi>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        vector<vi> ans =  image;
        delRow = {-1,0,1,0};
        delCol = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,delRow,delCol);
    }
};