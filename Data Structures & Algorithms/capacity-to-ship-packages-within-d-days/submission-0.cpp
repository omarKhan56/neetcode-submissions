class Solution {
   public:
    bool CanShip(vector<int>& weights, int capacity, int days) {
        int total = 0;
        int daysUsed = 1;

        for (int i = 0; i < weights.size(); i++) {
            if (total + weights[i] <= capacity) {
                total += weights[i];
            } else {
                daysUsed++;
                total = weights[i];
            }
        }

        return daysUsed <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) { 
        int n = weights.size();
        int low = *max_element(begin(weights), end(weights));
        int high = 0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        while(low < high){
            int mid = (low+high)/2;
            if(CanShip(weights,mid,days)){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};