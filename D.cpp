#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    // Getters e Setters
    int getD1() {
        return D1;
    }

    void setD1(int D1) {
        this->D1 = D1;
    }

    float getD2() {
        return D2;
    }

    void setD2(float D2) {
        this->D2 = D2;
    }

    // Métodos MD1 e MD2
    void MD1() {
        cout << "Método MD1" << endl;
    }

    void MD2() {
        cout << "Método MD2" << endl;
    }

    // Novo método MD3
    void MD3() {
        std::cout << "Método MD3" << std::endl;
    }
    void MD4() {
        std::cout << "Método MD4" << std::endl;
    }
};
