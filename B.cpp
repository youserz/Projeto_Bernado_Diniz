#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Getters e Setters
    int getB1() {
        return B1;
    }

    void setB1(int B1) {
        this->B1 = B1;
    }

    float getB2() {
        return B2;
    }

    void setB2(float B2) {
        this->B2 = B2;
    }

    // Métodos MB1 e MB2
    void MB1() {
        cout << "Método MB1" << endl;
    }

    void MB2() {
        cout << "Método MB2" << endl;
    }

    // Novo método MB3
    void MB3() {
        cout << "Método MB3" << endl;
    }
};
