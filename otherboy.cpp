#include "otherboy.h"

OtherBoy::OtherBoy( string name, int age, double attractiveness) {
    this->name = name;
    this->age = age;
    this->attractiveness = attractiveness;
}

double OtherBoy::getTimePerWeek(int totalFriends)  {
    return attractiveness * 20.0 / totalFriends;
}

void OtherBoy::printInfo()  {
    cout << "Ten: " << name << ", tuoi: " << age << ", do thu hut: ";
    if (attractiveness >= 0.7) {
        cout << "cao";
    } else if (attractiveness >= 0.4) {
        cout << "trung binh";
    } else {
        cout << "thap";
    }
    cout << endl;
}
