#ifndef BESTFRIEND_H
#define BESTFRIEND_H

#include "friend.h"

class BestFriend : public Friend {
public:
    string phone;
    
    BestFriend(string name, int age, string phone);
    double getTimePerWeek(int totalFriends);
    void printInfo();
};

#endif // BESTFRIEND_H