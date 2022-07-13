#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person {
    string name;
    int age;
public:
    Person(const string &name, int age) : name(name), age(age) {}
    Person() {
        name = "";
        age = 0;
    }

    bool operator==(const Person &rhs) const {
        return name == rhs.name &&
               age == rhs.age;
    }

    bool operator!=(const Person &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Person &rhs) const {
        return age < rhs.age;
    }

    bool operator>(const Person &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Person &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Person &rhs) const {
        return !(*this < rhs);
    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << person.age << " " << person.name;
        return os;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    Person arr[n];

    int age;
    string name;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> age >> name;
        arr[i] = Person(name, age);
    }

    stable_sort(arr, arr+n);

    for ( int i = 0 ; i < n ; i ++ ) {
        cout << arr[i] << "\n";
    }

}
