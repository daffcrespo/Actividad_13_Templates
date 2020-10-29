#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<string> arreglo;

  
    arreglo.insertarFinal("amor");
    arreglo.insertarFinal("salud");
    arreglo.insertarInicio("esperanza");
    arreglo.insertarInicio("fe");

    arreglo.mostrar();

    arreglo.insertar("carinio", 2);

    arreglo.mostrar();

    arreglo.eliminarInicio();
    arreglo.eliminarFinal();

    arreglo.eliminar(1);

    arreglo.mostrar();


    return 0;
}