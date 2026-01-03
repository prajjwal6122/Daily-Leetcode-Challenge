// Leetcode 1411 Paint a grid of Nx3

class Solution {
public:
    int numOfWays(int n) {
        long long M=1e9+7;
        long long ABC_case=6;
        long long ABA_case=6;
        for(int i=1;i<n;i++){
            long long No_of_ABC_cases=(2*ABA_case+2*ABC_case)%M;
            long long No_of_ABA_cases=(3*ABA_case+2*ABC_case)%M;

            ABC_case=No_of_ABC_cases;
            ABA_case=No_of_ABA_cases;
        }
        return (ABA_case+ABC_case)%M;
    }
};