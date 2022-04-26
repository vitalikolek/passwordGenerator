#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class createPasword {
private:
    static const int size = 10;
    string pasword = "";
    string lit = "abcdefghijklmnopqrstuvwxyz";
    string bigLit = "ABCDEFGHIGKLMNOPQRSTUVWXYZ";
    string num[size] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    string sumbol[size] = { "!", "@", "#", "$", "%", "-", "+", "/", "*", "=" };
public:
    void printPasword() {
        cout << this->pasword;
    }

    void creating() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                if (i == 0 && j == 3 || i == 1 && j == 3) {
                    this->pasword += bigLit[rand() % bigLit.length()];
                }
                else {
                    this->pasword += lit[rand() % lit.length()];
                }
            }
            for (int j = 0; j < 4; j++) {
                if (i == 0 && j == 3) {
                    this->pasword += sumbol[rand() % this->size];
                }
                else {
                    this->pasword += num[rand() % this->size];
                }
            }
        }
    }
};

int main() {
    srand(time(0));

    createPasword* pasword = new createPasword();

    pasword->creating();
    pasword->printPasword();
}