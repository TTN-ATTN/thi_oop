#include "boyfriend.h"

BoyFriend::BoyFriend( string name, int age, int income) {
    this->name = name;
    this->age = age;
    this->income = income;
}

double BoyFriend::getTimePerWeek(int totalFriends)  {
    return 5.0 * income / 10000000.0;
}

void BoyFriend::printInfo()  {
    cout << "Ten: " << name << ", tuoi: " << age << ", thu nhap: " << income << "d" << endl;
}