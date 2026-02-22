#include "Persona.cpp" // Enlace sencillo

class Docente : public Persona {
private:
    string codigo, nit, profesion;
    float salario;

public:
    Docente(string _cui, string _nom, string _ape, string _dir, int _tel, string _fecha, bool _gen, 
            string _cod, string _nit, float _sal, string _prof) 
            : Persona(_cui, _nom, _ape, _dir, _tel, _fecha, _gen) {
        codigo = _cod; nit = _nit; salario = _sal; profesion = _prof;
    }

    void leer() {
        cout << "\n--- DATOS DOCENTE ---" << endl;
        Persona::leer();
        cout << "Codigo: " << codigo << " | Profesion: " << profesion << " | Salario: " << salario << endl;
    }
};
