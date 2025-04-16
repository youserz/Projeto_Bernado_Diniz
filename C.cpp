#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    // Getters e Setters
    string getC1() {
        return C1;
    }

    void setC1(string C1) {
        this->C1 = C1;
    }

    int getC2() {
        return C2;
    }

    void setC2(int C2) {
        this->C2 = C2;
    }

    // Métodos MC1 e MC2
    void MC1() {
        cout << "Método MC1" << endl;
    }

    void MC2() {
        cout << "Método MC2" << endl;
    }
};
