// C++Dic12CantidadDePalabrasEnString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char line[100];
    int count = 1;
   
    cout << "Ingrese una oracion: " << endl; cin.getline(line, 100);
    for (int i = 0; i <= 100; i++)
    {
        if (line[i] == ' ')
        {
            if (line[i + 1] != ' ')
            {
                count++;
            }
        }
    }
    
    cout << "\nLa cantidad de palabras es: " << count << endl;

}


