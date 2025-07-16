#include <iostream>
#include <string>
#include <fstream>



class address {
public:
   



private:
    std::string street;
    std::string city;
    int house_num;
    int aps_num;
    int num;

public:

    void get_output_address() {
        const int size = 4;
        int address[size];  
        return;
    }

    void set_street(std::string street) {
        this->street = street;
    }
    void set_city(std::string city) {
        this->city = city;
    }
    void set_house_num(int house_num) {
        this->house_num = house_num;
    }
    void set_aps_num(int aps_num) {
        this->aps_num = aps_num;
    }
    void set_num(int num) {
        this->num = num;
    }
};

int main() {
    std::string street;
    std::string city;
    int house_num;
    int aps_num;
    int num;

    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    if (in.is_open() && out.is_open()) {
        in >> num;
        out << num << std::endl;
        for (int i = 0; i < num; i++) {
            in >> city >> street >> house_num >> aps_num;
            for (int j = 1; j > 0; j--) {
                out << city << ", " << street << ", " << house_num << ", " << aps_num << std::endl;
            }
        }
    }
    else {
        std::cout << "Error";
    }

    in.close();
    out.close();
    return 0;
}