#include <iostream>

using namespace std;

class funcionario {

    private :
        char* name;
        float salary;
        char* date;

    public :
        funcionario(char* n, float s, char* d){
            this->name = n;
            this->salary = s;
            this->date = d;
        }

        void print() {
            cout<< "Nome ="<<name<< "\nSalario= %.2f "<<salary<<"\nData="<<date << endl;
        }
};


