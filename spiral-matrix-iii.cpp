class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans{{rStart , cStart}};
        vector<int> dx({1,0,-1,0});
        vector<int> dy({0,1,0,-1});
        for(int i=0;ans.size()<rows*cols ; i++){
            for(int step=0;step<i/2 +1;step++){
                cStart+=dx[i%4];
                rStart+=dy[i%4];
                if(rStart>=0 && rStart<rows && cStart<cols && cStart>=0) ans.push_back({rStart , cStart});
            }
        }

        return ans;
        


    }
};