class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        stack<double> st;
        vector<pair<double,double>> cars;
        for(int i=0;i<n;i++){
            double time = (double)(target - position[i])/speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.rbegin(), cars.rend());
        for(auto car : cars){
            double time = car.second;
            if(st.empty() || st.top()<time){
                st.push(time);
            }
        }
        return st.size();
        
    }
};
