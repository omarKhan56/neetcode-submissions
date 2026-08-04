class Solution {
public:
    bool CanEatAll(vector<int>& piles, int GivenHour, int h) {
        int ActualHour = 0;

        for (int i = 0; i < piles.size(); i++) {
            ActualHour += piles[i] / GivenHour;

            if (piles[i] % GivenHour != 0) {
                ActualHour++;
            }
        }

        return ActualHour <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(begin(piles), end(piles));

        while (low < high) {
            int mid = (low + high) / 2;

            if (CanEatAll(piles, mid, h)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};