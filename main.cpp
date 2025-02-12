// Asignacion 1: Binary Digit
// Sebastian Cambo CambiUPR
// 801-22-9348

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{   
    // Las variables para los precios de taquillas y el 20% del teatro
    const double taquilla_adulto_precio = 10.00;  
    const double taquilla_nino_precio = 6.00;
    const double porcentaje_teatro = 0.20;
    int taquilla_adulto, taquilla_nino;
    
    
    cout << "Este programa va a desplegar el beneficio neto y bruto en una noche de ventas en un cine. " << endl;

// Aqui pedimos el titulo de la pelicula
    cout << "Escriba el nombre de la pelicula: ";
        string nombre_pelicula;
            getline(cin, nombre_pelicula);

// Aqui cuantas taquillas de adultos vendidas
    cout << "Ahora escriba cuantas taquillas se vendieron de adultos: ";
        string taquillas_adulto;
            cin >> taquilla_adulto;
            
//  Aqui cuantas taquillas de ninos vendidas        
    cout << "Finalmente escribe cuantas taquillas se vendieron de ninos: ";
        string taquillas_nino;
            cin >> taquilla_nino;

// Aqui se calcula el "gross revenue"

    double IngresoBruto = (taquilla_adulto * taquilla_adulto_precio) + (taquilla_nino * taquilla_nino_precio);

// EL porcentaje que se lleva el teatro

    double BeneficioNeto = (IngresoBruto * porcentaje_teatro);

// Cantidad pagada al distrubidor

    double DistruibidorCantidad = (IngresoBruto - BeneficioNeto)

// Ahora para desplegar todo alineado correctamente

    cout << fixed << setprecision(2);
    cout << left << setw(30) << "nombre_pelicula: " << right << setw(20) << "\" << "nombre_pelicula << "\" << endl;
    












}
