#include <string>
#include <iostream>

using namespace std;

class Salario{
    
    private:

        int horas;
        string nombre;
        int Ehoras;

    public:

    Salario(int _horas = 0, string _nombre = {}, int _Ehoras = 0){
        
        horas = _horas;
        nombre = _nombre;
        Ehoras = _Ehoras;

    }

    void setHoras(int _horas){
        horas = _horas;
    }

    int getHoras() const {
        return horas;
    }

    void setNombre(string _nombre){
        nombre = _nombre;
    }

    string getNombre() const{
        return nombre;
    }

    void setEhoras(int _Ehoras){
        Ehoras = _Ehoras;
    }

    int getEhoras() const{
        return Ehoras;
    }

    int dWorkerDetails(){
        
        cout << "Horas: " << horas << endl;
        cout << "Horas Extra: " << Ehoras << endl;
    }
    
    string dWorkerName(){
    cout << "Nombre: " << nombre << endl;
    }

    
};