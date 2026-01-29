class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();
        for(int i=0;i<n;i++){
            if(hours[i]>8){
                hours[i] = 1;
            }
            else{
                hours[i] = -1;
            }
        }
        int maxi = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum = sum+hours[j];
                if(sum>0){
                    maxi = max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};