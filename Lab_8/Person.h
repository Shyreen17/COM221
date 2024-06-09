#pragma once
#include <string>

using namespace std;

class Person {
public:
    operator int ();
    Person();
    Person(string newFirstName, float newWeight, int newAge);
    ~Person();

    float operator+(const Person& otherPerson) const;

    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;


    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
