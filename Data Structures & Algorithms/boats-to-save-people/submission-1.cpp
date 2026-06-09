class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int MinBoat = 0;
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                MinBoat++;
            }
            else{
                i++;
                j--;
            }

            
        }
        return MinBoat;

        
    }
};