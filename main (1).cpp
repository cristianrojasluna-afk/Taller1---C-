#include <iostream>
#include <string>
using namespace std;

int main () {
    //Datos personales
    string nombreCompleto;
    int edad;
    char genero;
    char estrato;
    
    //Datos fisicos
    float peso;
    float altura;
    float imc;
    
    // Salud
    bool tieneAlergia;
    
    //Informacion de contacto
    string direccion;
    string telefono;
    string correo;
    
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    cout << "Ingrese su genero (M/F/O): ";
    cin >> genero;
    
    cout << "Ingrese su estrato socioeconomico (1-6): ";
    cin >> estrato;
    
    cout << "Ingrese su peso en Kg: ";
    cin >> peso;
    
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    
    cout << "¿Tiene alergia? (1 = Si, 0 = No): ";
    cin >> tieneAlergia;
    
    cin.ignore();
    
    cout << "Ingrese su dircecion de residencia: ";
    getline(cin, direccion);
    
    cout << "Ingresa su numero de telefeno: ";
    getline(cin, telefono);
    
    cout << "Ingresa su correo electronico: ";
    getline(cin, correo);
    
    imc = peso / (altura * altura);
    cout << "Su IMC es: " << imc << "\n";
    
    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" << "\n"; 
        } else if (imc >= 18.5 && imc <= 24.9); {
            cout << "Clasificacion: Normal " << "\n";
        }  {
            cout << "Clasificacion: Sobrepeso" << "\n";
        }    
        
    
    cout << "\n--- Resumen del paciente ---\n";
    cout << " Nombre: " << nombreCompleto << "\n";
    cout << " Edad: " << edad << "años\n";
    cout << " Genero: " << genero << "\n";
    cout << " Estrato: " << estrato << "\n";
    cout << " Peso: " << peso << "Kg\n";
    cout << " Altura: " << altura << "metros\n";
    cout << " IMC: " << imc << "\n";
    cout << " Direccion: " << direccion << "\n";
    cout << " Telefono: " << telefono << "\n";
    cout << " Correo: " << correo << "\n";
    cout << "Alergias: " << (tieneAlergia ? "Si" : "No") << "\n";
    
    return 0;
    
 }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
    
    
    
    
    
    
    
    
    
    
    
    
    
