class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int f = 0;
        int t = 0;
        int tw = 0;
        for(int i=0;i<n;i++){
            if(bills[i] == 5){
                f = f+1;
            }
            else if(bills[i] == 10){
                if(f){
                    f= f-1;
                    t = t+1;
                }
                else return false;
            }
            else{
                if(f && t){
                    f = f-1;
                    t = t-1;
                    tw = tw+1;
                }
                else if(f>=3){
                    f = f-3;
                    tw = tw+1;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};