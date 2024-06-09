#include "Person.h"
Person::operator int(){
    return mAge;
}
Person::Person() : mWeight(0.0), mFirstName(""), mAge(0) {}

Person::Person(string newFirstName, float newWeight, int newAge)
    : mFirstName(newFirstName), mWeight(newWeight), mAge(newAge) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) const {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return !(*this == otherPerson);
}

bool Person::operator<(const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}
