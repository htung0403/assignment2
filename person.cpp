#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    string address;
    string phoneNumber;

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }

    bool isAdult()
    {
        return age >= 18;
    }

    void move(string newAddress)
    {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }

    void greet()
    {
        cout << "Hello, my name is " << name << "." << endl;
    }
};
int main()
{
    Person person1;
    person1.name = "Vo Hoang Tung";
    person1.age = 22;
    person1.address = "01 Vo Van Ngan";
    person1.phoneNumber = "0123456789";
    person1.displayInfo();
    person1.greet();
    person1.move("01 VVN");
    if (person1.isAdult())
    {
        cout << "This person is an adult." << endl;
    }
    else
    {
        cout << "This person is not an adult." << endl;
    }
    return 0;
}