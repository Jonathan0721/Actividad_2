
class Estudiante : public Persona {
private:
    string carnet;

public:
    Estudiante(string _cui, string _nom, string _ape, string _dir, int _tel, string _fecha, bool _gen, string _carnet) 
               : Persona(_cui, _nom, _ape, _dir, _tel, _fecha, _gen) {
        carnet = _carnet;
    }

    void leer() {
        cout << "\n--- DATOS ESTUDIANTE ---" << endl;
        Persona::leer();
        cout << "Carnet: " << carnet << endl;
    }
};
