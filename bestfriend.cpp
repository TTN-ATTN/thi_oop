#include "bestfriend.h"

BestFriend::BestFriend( string name, int age,  string phone) {
    this->name = name;
    this->age = age;
    this->phone = phone;
}

double BestFriend::getTimePerWeek(int totalFriends)  {
    return 5.0;
}

void BestFriend::printInfo()  {
    cout << "Ten: " << name << ", tuoi: " << age << ", so dien thoai: " << phone << endl;
}