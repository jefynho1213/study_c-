#include <iostream>

class funcionario {

    private :
        char name;
        float salary;
        char date;

    public :
        funcionario(char n, float s, char d){
            this->name = n;
            this->salary = s;
            this->date = d;
        }
}
