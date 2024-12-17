#ifndef FRIEND_H
#define FRIEND_H

#include <iostream>
#include <string>
using namespace std;

class Friend {
public:
    string name;
    int age;
    virtual double getTimePerWeek(int totalFriends) = 0;
    virtual void printInfo() = 0;
    virtual ~Friend() {}  
};

#endif // FRIEND_H