class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>PascalTri(numRows);
         
        for(int i=0;i<numRows;i++){
            PascalTri[i].resize(i+1);
            PascalTri[i][0]=PascalTri[i][i]=1; 
            for(int j=1;j<i;j++){
                PascalTri[i][j]=PascalTri[i-1][j-1]+PascalTri[i-1][j];
            }
              

        }

        return PascalTri; 
        
    }
};