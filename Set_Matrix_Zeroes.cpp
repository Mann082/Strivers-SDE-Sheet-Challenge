#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> i;
        vector<int> j;
        for(int a=0;a<matrix.size();a++){
            for(int b=0;b<matrix[0].size();b++){
                if(matrix[a][b]==0){
                    i.push_back(a);
                    j.push_back(b);
                }
            }
        }
        for(auto it:i){
            for(int b=0;b<matrix[0].size();b++){
                matrix[it][b]=0;
            }
        }
        for(auto it:j){
            for(int a=0;a<matrix.size();a++){
                matrix[a][it]=0;
            }
        }
    }
};