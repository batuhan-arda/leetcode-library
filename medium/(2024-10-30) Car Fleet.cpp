class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (!position.size())
            return 0;

        vector<pair<int,int>> carinfo;
        for(int i = 0; i < position.size(); i++){ //add carinfo
            carinfo.push_back(make_pair(position[i],speed[i]));
        }

        //sort cars by position
        sort(carinfo.begin(), carinfo.end(), [](const auto& a, const auto& b) { return a.first < b.first; });

        int knownallfleets = 0;
        int asdas = 0;
        while(!carinfo.empty()){

            if (carinfo.size() == 1){ //edge case
                knownallfleets++;
                break;
            }

            for (int i = carinfo.size() - 1; i > -1; i--){
                //push cars forward
                carinfo[i].first += carinfo[i].second;
                
                //clamp fleet if theres a car in front
                if ( i != carinfo.size() - 1 ) //ignore first car
                    carinfo[i].first = min(carinfo[i].first,carinfo[i + 1].first);

            }

            int prevPos = -1;
            for (int i = carinfo.size() - 1; i > -1; i--) {
                if (carinfo[i].first >= target) {
                    if (carinfo[i].first != prevPos) { //new fleet with different time arrival
                        knownallfleets++;
                    }
                    prevPos = carinfo[i].first;
                    carinfo.pop_back(); 
                }
            }

        }

        return knownallfleets;
    }
};
