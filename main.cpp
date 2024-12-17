#include <bits/stdc++.h>
#include "bestfriend.h"
#include "boyfriend.h"
#include "otherboy.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<Friend*> friends;
    
    for (int i = 0; i < n; ++i) {
        int type, age;
        string name, extra;
        cin >> type >> name >> age >> extra;
        
        if (type == 1) {
            friends.push_back(new BestFriend(name, age, extra));
        } else if (type == 2) {
            friends.push_back(new BoyFriend(name, age, stoi(extra)));
        } else if (type == 3) {
            friends.push_back(new OtherBoy(name, age, stod(extra)));
        }
    }
    
    double totalTimeBestFriend = 0, totalTimeBoyFriend = 0, totalTimeOtherBoy = 0;
    vector<pair<double, Friend*>> friendTimePairs;
    
    for (Friend* f : friends) {
        double timePerWeek = f->getTimePerWeek(n);
        friendTimePairs.push_back({timePerWeek, f});
        
        if (dynamic_cast<BestFriend*>(f)) {
            totalTimeBestFriend += timePerWeek;
        } else if (dynamic_cast<BoyFriend*>(f)) {
            totalTimeBoyFriend += timePerWeek;
        } else if (dynamic_cast<OtherBoy*>(f)) {
            totalTimeOtherBoy += timePerWeek;
        }
    }
    
    cout << "Thong ke:";
    if (totalTimeBestFriend > 0) {
        cout << "\n\t - Thoi gian cho ban than: " << fixed << setprecision(1) << totalTimeBestFriend << " h";
    }
    if (totalTimeBoyFriend > 0) {
        cout << "\n\t - Thoi gian cho ban trai: " << fixed << setprecision(1) << totalTimeBoyFriend << " h";
    }
    if (totalTimeOtherBoy > 0) {
        cout << "\n\t - Thoi gian cho ban trai khac: " << fixed << setprecision(1) << totalTimeOtherBoy << " h";
    }
    cout << endl;
    
    sort(friendTimePairs.begin(), friendTimePairs.end(), [](const pair<double, Friend*>& a, const pair<double, Friend*>& b) {
        return a.first > b.first;
    });
    
    double maxTime = friendTimePairs[0].first;
    cout << "Nguoi ban quan trong nhat:" << endl;
    for (auto& pair : friendTimePairs) {
        if (pair.first == maxTime) {
            pair.second->printInfo();
        } else {
            break;
        }
    }
    
    for (Friend* f : friends) {
        delete f;
    }
    
    return 0;
}
