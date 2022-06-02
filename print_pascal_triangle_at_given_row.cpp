
vector<int> getRow(int row_index)
{
    vector<vector <int>> ans; // 2D Vector 

    for(int i = 0 ; i < = row_index ; i++)  // upto row index 
    {
        vector <int> row (i+1,1);  // vector contain all the 1

        for(int j = 1 ; j < i; j++)  
        {
            row[j] = ans[i-1][j] + ans[i-1][j-1];
        }

        ans.push_back(row);
    }

    return ans[row_index]; // at this point we can print the given row index;
}