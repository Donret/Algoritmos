#include <cmath>
#include <iomanip>
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>

using namespace std;
using namespace std::chrono;

// Se declara y se define la funcion del polinomio.
double f(double x);
double f(double x)
{
    poly = (-pow(x, 4) + 30*pow(x, 3) + 15*pow(x, 2) + 34*x + 540)
    return poly;
}

int main()
{
    cout.precision(5); // Establece la precision decimal.
    cout.setf(ios::fixed);
    // Declara las variables que se van a usar.
    double x_0, x_1, c, accuracy, fx0, fx1, fc;
    x_0 = 0.0;
    x_1 = 1000.0;
    accuracy = 0.001;

    int iter = 0;

    // Empieza a contar el tiempo de ejecución.
    auto start = high_resolution_clock::now();

    // Si f(x_0) * f(x_1) > 0 entonces la raiz no existe entre x_0 y x_1.
    if (f(x_0) * f(x_1) > 0)
    {
        cout << "Porfavor ingrese valores distintos para los limites del intervalo [x_0, x_1]";
    }
    else
    {
        // Estas lineas se implementan con el fin de imprimir en una tabla los valores de cada iteracion.
        cout << "Iteracion" << setw(14) << "x_0" << setw(18) << "x_1" << setw(18) << "c" << setw(18) << "f(c)" << setw(24) << "|x_0 - x_1|\n";
        cout << "---------------------------------------------------------------------------------------------------------\n";

        // Si la diferencia absoluta entre x_0 y x_1 es mayor que la precision, que siga bisecando el intervalo.
        while (fabs(x_0 - x_1) >= accuracy)
        {
            c = (x_0 + x_1)/2.0; // Bisecta el intervalo y halla el valor de c.
            fx0 = f(x_0); // Evalua la funcion en x_0.
            fx1 = f(x_1); // Evalua la funcion en x_1.
            fc = f(c); // Evalua la funcion en c.
            iter++; // Suma una iteracion.

            // Ingresa una nueva iteracion con sus respectivos valores a la tabla de iteraciones.
            cout << iter << setw(22) << x_0 << setw(18) << x_1 << setw(18) << c << setw(24) << fc << setw(18) << fabs(x_0 - x_1) << "\n";

            // Si f(c) = 0 entonces hemos encontrado la raiz del polinomio que en este caso es c.
            if (fc == 0)
            {
                cout << "\nLa raiz del polinomio dado es aproximadamente: " << "\n" << endl;

                // Finaliza el tiempo de ejecucion.
                auto stop = high_resolution_clock::now();

                // Calcula la duración del tiempo de ejecucion en microsegundos y la imprime.
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "Tiempo real de ejecucion: " << duration.count() << endl;

                return 0;
            }

            // Si f(x_0) * f(x_1) > 0 entonces no existe una raiz del polinomio entre x_0 y x_1.
            if (fx0 * fc > 0)
            {
                x_0 = c; // Asignamos a x_0 el valor de c, es decir la siguiente iteracion sera sobre el intervalo [c, x_1].
            }

            // En caso contrario si f(x_0) * f(x_1) < 0 entonces si existe una raiz del polinomio entre x_0 y x_1.
            else if (fx0 * fc < 0)
            {
                x_1 = c; // Como si existe una raiz entre x_0 y c, entonces la proxima iteracion se realiza sobre el intervalo [x_0, c].
            }
        }

        // El ciclo while finaliza cuando la diferencia absoluta entre x_0 y x_1 es menor que la precision definida, y el valor asignado a 'c' pasa a ser la raiz aproximada del polinomio.
        cout << "\nLa raiz del polinomio dado es aproximadamente: " << c << endl;

        // Finaliza el tiempo de ejecucion.
        auto stop = high_resolution_clock::now();

        // Calcula la duración del tiempo de ejecucion en microsegundos y la imprime.
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Tiempo real de ejecucion: " << duration.count() << " microsegundos." << endl;

        return 0;
    }
}
