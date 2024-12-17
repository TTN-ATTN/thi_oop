#ifndef BOYFRIEND_H
#define BOYFRIEND_H

#include "friend.h"

class BoyFriend : public Friend {
public:
    int income;
    
    BoyFriend(string name, int age, int income);
    double getTimePerWeek(int totalFriends) ;
    void printInfo() ;
};

#endif // BOYFRIEND_H