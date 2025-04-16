#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Getters e Setters
    int getA1() {
        return A1;
    }

    void setA1(int A1) {
        this->A1 = A1;
    }

    float getA2() {
        return A2;
    }

    void setA2(float A2) {
        this->A2 = A2;
    }

    // Métodos MA1 e MA2
    void MA1() {
        cout << "Método MA1" << endl;
    }

    void MA2() {
        cout << "Método MA2" << endl;
    }
};
