
#include <iostream>
#include "Docente.cpp"
#include "Estudiante.cpp"

using namespace std;

int main() {
    // Datos de ejemplo
    Docente miDocente("123", "Carlos", "Lopez", "Zona 10", 12345678, "10/05/1975", true, "DOC-001", "456-1", 8500.50, "Ingeniero");
    Estudiante miEstudiante("987", "Ana", "Gomez", "Zona 1", 87654321, "20/08/2002", false, "20230005");

    // Mostrar datos
    miDocente.leer();
    miEstudiante.leer();

    return 0;
}
