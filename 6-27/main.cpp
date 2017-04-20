#include <iostream>


class Employee {
    std::string name_;
    std::string address_;
    std::string city_;
    std::string postcode_;
public:
    Employee(const std::string &name, const std::string &address, const std::string &city, const std::string &postcode)
        : name_(name), address_(address), city_(city), postcode_(postcode) { }

    void display() const {
        std::cout << "Name: " << name_
                  << " Address: " << address_
                  << " City: " << city_
                  << " PostCode: " << postcode_ << std::endl;
    }

    void setName(const std::string &name) {
        name_ = name;
    }

    void setAddress(const std::string &address) {
        address_ = address;
    }

    void setCity(const std::string &city) {
        city_ = city;
    }

    void setPostcode(const std::string &postcode) {
        postcode_ = postcode;
    }
};

int main() {
    Employee employee = Employee("a", "b", "c", "000000");
    employee.display();
    employee.setName("enihsyou");
    employee.setAddress("Apartment");
    employee.setCity("Shanghai");
    employee.setPostcode("200000");
    employee.display();
    return 0;
}
