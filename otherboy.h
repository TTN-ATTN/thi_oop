#ifndef OTHERBOY_H
#define OTHERBOY_H

#include "friend.h"

class OtherBoy : public Friend {
public:
    double attractiveness;
    
    OtherBoy(string name, int age, double attractiveness);
    double getTimePerWeek(int totalFriends);
    void printInfo();
};

#endif // OTHERBOY_H
