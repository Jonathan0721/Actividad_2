#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string cui, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    bool genero;

public:
    Persona(string _cui, string _nom, string _ape, string _dir, int _tel, string _fecha, bool _gen) {
        cui = _cui; nombres = _nom; apellidos = _ape; direccion = _dir;
        telefono = _tel; fecha_nacimiento = _fecha; genero = _gen;
    }

    void leer() { 
        cout << "CUI: " << cui << " | Nombre: " << nombres << " " << apellidos << endl; 
    }
};
