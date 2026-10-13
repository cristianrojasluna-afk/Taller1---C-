#include <iostream>
using namespace std;

 bool esBisiesto(int año) {
         return ( año % 4 == 0 || año % 100 <= 0) || ( año % 400 == 0);
    }

int main(){
    cout << "=== EJERCICIO 1: TIEMPO ===\n\n";
    int segundo;
    cout << "Ingrese un numero entero de segundos: ";
    cin >> segundo;
    
    if (segundo < 0){
        cout << " Error: el valor no puede ser negativo\n ";
    } else {
        int hora = segundo / 3600;
        int minuto = (segundo % 3600) / 60;
        int segRestante = segundo % 60;
        
        cout << segundo << " segundos equivalen a ";
       cout << hora << " hora ";
       cout << minuto << " minuto ";
       cout << segRestante << " segundo \n";
        
    }
    
    cout << "=== EJERCICIO 2: PROMEDIO === \n\n";
    double nota1, nota2, nota3;
    
    cout << " Ingrese la primera nota (0.0 - 5.0): ";
    cin >> nota1;
    cout << " Ingrese la segunda nota (0.0 - 5.0): ";
    cin >> nota2;
    cout << " Ingrese la tercera nota (0.0 - 5.0): ";
    cin >> nota3;
    
    if (nota1 < 0.0 || nota1 > 5.0 || 
        nota2 < 0.0 || nota2 > 5.0 ||
        nota3 < 0.0 || nota3 > 5.0) {
        cout << " Error: todas las notas deben estar entre 0.0 y 5.0\n ";
        } else {
            double promedio = (nota1 * 0.3) + (nota2 * 0.3)  + (nota3 * 0.4);
            
            cout << " Promedio ponderado: " << promedio <<
            
              (promedio >= 4.5  ); {
                cout << " Concepto: Excelente (A)\n ";
            }   (promedio >= 4.0); {
                 cout << " Concepto: Bueno (B)\n ";
            }   (promedio >= 3.0); {
                 cout << " Concepto: Aceptable (C)\n ";
            }  {
                 cout << " Concepto: Reprobado (D)\n ";
            }
        }
        
    cout << "=== EJERCICIO 3:INDICE DE MASA === \n\n";
    
    double peso, estatura;
    
    cout << " Ingrese su peso en Kilogramos: ";
    cin >> peso;
    cout << " Ingrese su estatura en metros: ";
    cin >> estatura;
    
    if (peso <= 0 || estatura <= 0) {
        cout << "Error: el peso y la estatura deben ser mayores que cero\n ";
    } else {
        
        double imc = peso / (estatura * estatura);
        
        cout << " \nsu IMC es: " << imc << "\n";
        
        if (imc < 18.5) {
            cout << " Clasificacion: Bajo peso\n ";
        } else if (imc < 25) {
            cout << " Clasificacion: Normal\n ";
        } else if (imc < 30) {
            cout << " Clasificacion: Sobrepeso\n ";
        } else {
            cout << " Clasificacion: Obesidad\n ";
        }
    }
    
    
    cout << "=== EJERCICIO 4:AÑO BISIESTO === \n\n";
    
    int año;
    cout << " Ingrese un año: ";
    cin >> año;
    
    if (año <= 0) {
        cout << " Error: el año debe ser un numero positivo\n ";
    } else {
        if ((año % 4 == 0 || año % 100 <= 0) || (año % 400 == 0)) {
            cout << año << " es bisiesto\n ";
        } else {
            cout << año << " no es bisiesto\n ";
        }
    }
    
    cout << "=== EJERCICIO 5: TIPO DE TRIANGULO === \n\n";
    
    double lado1, lado2, lado3;
    
    cout << " Ingrese la longitud del primer lado: ";
    cin >> lado1;
    cout << " Ingrese la longitud del segundo lado: ";
    cin >> lado2;
    cout << " Ingrese la longitud del tercer lado: ";
    cin >> lado3;
    
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << " Error: todos los lados deben ser mayores que cero\n ";
    } else {
        
        if (lado1 + lado2 <= lado3 ||
            lado1 + lado3 <= lado2 ||
            lado2 + lado3 <= lado1) {
            cout << " Error: los lados no forman un triangulo\n ";    
        } else {
            
            double perimetro = lado1 + lado2 + lado3;
            cout << " \nPerimetro del triangulo: " << perimetro << "\n";
            
            if ( lado1 == lado2 || lado2 == lado3) {
                cout << " Tipo: Equilatero\n ";
            } else if ( lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                cout << " Tipo Isosceles\n ";
            } else {
                cout << " Tipo: Escaleno\n ";
            }
        }
    }
    
    cout << "=== EJERCICIO 6: MAYOR, MENOR Y RELACION === \n\n";
    
    int num1, num2, num3;
    
    cout << " Ingrese el primer numero: ";
    cin >> num1;
    cout << " Ingrese el segundo numero: ";
    cin >> num2;
    cout << " Ingrese el tercer numero: ";
    cin >> num3;
    
    int mayor = num1;
    int menor = num1;
    
    if ( num2 > mayor) mayor = num2;
    if ( num3 > mayor) mayor = num3;
    
    if ( num2 < menor) mayor = num2;
    if ( num3 < menor) mayor = num3;
    
    cout << " \nEl mayor es: " << mayor << "\n";
    cout << " El menor es: " << menor << "\n";
    
    if ( num1 == num2 || num2 == num3) {
        cout << " Los tres numeros son iguales\n ";
    } else if ( num1 == num2 || num1 == num3 || num2 == num3) {
        cout <<" Hay dos numeros iguales y uno distinto\n ";
    } else {
        cout << " Los tres numeros son distintos\n ";
    }
    
    cout << "=== EJERCICIO 7: NOMINA CON HORAS EXTRAS === \n\n";
    
    double valorHora;
    int horasTrabajadas;
    
    cout << " Ingrese el valor de la hora: ";
    cin >> valorHora;
    cout << " Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;
    
    if ( valorHora <= 0 || horasTrabajadas < 0) {
        cout << " Error: el valor de la hora debe ser positivo y las horas no pueden ser negativas\n ";
    } else {
        
        int horasNormales = ( horasTrabajadas > 40) ? 40 : horasTrabajadas;
        int horasExtra = 0;
        int horasDobles = 0;
        
        if ( horasTrabajadas > 40) {
            horasExtra = ( horasTrabajadas > 48) ? 8 : (horasTrabajadas - 40);
        }
        if (horasTrabajadas > 48) {
            horasDobles = horasTrabajadas - 48;
        }
        
        double salarioBruto = ( horasNormales * valorHora) + ( horasExtra * valorHora * 1.5) + (horasDobles * valorHora * 2);
        
        double descuento = ( salarioBruto > 2000000) ? salarioBruto * 0.08 : salarioBruto * 0.04;
        
        double salarioNeto = salarioBruto - descuento;
        
        cout << " \nResumen de la nomina: \n ";
        cout << " Horas normales: " << horasNormales << "\n";
        cout << " Horas extra (1.5x): " << horasExtra << "\n";
        cout << " Horas dobles (2x): " << horasDobles << "\n";
        cout << " Salario bruto: $ " << salarioBruto << "\n";
        cout << " Descuento aplicado: $ " << descuento << "\n";
        cout << " Salario neto: $ " << salarioNeto << "\n";
        
        
    }
    
    cout << "=== EJERCICIO 8: ECUACION DE SEGUNDO GRADO === \n\n";
    
    double a, b, c;
    cout << " Ingrese el coeficiente a: ";
    cin >> a;
     cout << " Ingrese el coeficiente b: ";
    cin >> b;
     cout << " Ingrese el coeficiente c: ";
    cin >> c;
    
    if ( a == 0 || b == 0 ) {
        cout << " No es una ecuacion de primer ni de segundo grado\n ";
    }
    
    else if ( a == 0) {
        double x = -c / b;
        cout << " Ecuacion lineal solucion: x = " << x << "\n";
    } else {
        double discriminante = (  b * b) - ( 4 * a * c);
        cout << " Discriminate: " << discriminante << "\n";
        
        if ( discriminante > 0) {
            cout << " Dos racices reales. Formula general:\n ";
            cout << " x1 = (-b + √" << discriminante << ") / (2a)\n";
            cout << " x1 = (-b - √" << discriminante << ") / (2a)\n";
        } else if (discriminante == 0) {
            double x = -b / (2 * a);
            cout << " Una unica raiz real:\n";
            cout << " x =" << x << "\n";
        } else {
            cout << " Las raices son complejas (no reales) " "\n";
        }
    }
    
    cout << "=== EJERCICIO 9: CAJERO DE UNA SOLA OPERACION  === \n\n";
    
    double saldo;
    cout << " Ingrese el saldo inicial: ";
    cin >> saldo;
    
    if ( saldo < 0) {
        cout << " Error: el saldo inicial no puede ser negativo\n";
        return 0;
    }
    
    int opcion;
    cout << " \nMenu de operaciones:\n ";
    cout << " 1 Consultar saldo\n ";
    cout << " 2 Retirar\n ";
    cout << " 3 Consignar\n ";
    cout << " Ingrese una opcion: ";
    cin >> opcion;
    
    switch (opcion) {
        case 1:
        cout << " Saldo actual: $" << saldo << "\n";
        break;
        
        case 2: {
            double monto;
            cout << " Ingrese el monto a retirar: ";
            cin >> monto;
            
            if ( monto <= 0) {
                cout << " Error: el monto debe ser positivo\n";
            } else if ( monto > saldo) {
                cout << " Error: el monto excede el saldo disponible\n";
            } else {
                saldo -= monto;
                cout << " Retiro exitoso. Nuevo saldo: $ " << saldo << "\n";
            }
            break;
        }
        
        case 3: {
            double monto;
            cout << " Ingrese el monto a consignar: ";
            cin >> monto;
            
            if ( monto <= 0) {
                cout << " Error: el monto debe ser positivo\n ";
            } else {
                saldo += monto;
                cout << " Consignacion exitosa. Nuevo saldo: $ " << saldo << "\n";
            }
            break;
        }
        
        default:
            cout << " Error: opcion no valida\n ";
    }
    
     cout << "=== EJERCICIO 10: FECHA VALIDA  === \n\n";
     
     
     int dia, mes, anio;
     cout << " Ingrese el dia: ";
     cin >> dia;
     cout << " Ingrese el mes: ";
     cin >> mes;
     cout << " Ingrese el año: ";
     cin >> anio;
     
     if ( anio <= 0) {
         cout << " Error: el anio debe ser positivo\n ";
         return 0;
     }
     
     int diasMes = 0;
     switch ( mes ) {
         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         diasMes = 31; break;
         case 4: case 6: case 9: case 11:
         diasMes = 30; break;
         case 2:
         diasMes = esBisiesto(anio) ? 29 : 28;
         break;
         default:
         cout << " Error: el mes no existe\n ";
         return 0;
     }
     
     if ( dia < 1 || dia > diasMes) {
         cout << " Error: el dia no es valido para este mes\n ";
     } else {
         cout << " La fecha es valida\n ";
         cout << " El mes tiene " << diasMes << " dias\n ";
     }
     
     cout << "=== EJERCICIO 11: CORTIZACION DE UN ENVIO  === \n\n";
     
     double distancia;
     int zona;
     char fragil;
     
     cout << " Ingrese el peso en kilogramos: ";
     cin >> peso;
      cout << " Ingrese la distancia en kilometros: ";
     cin >> distancia;
      cout << " Ingrese la zona ( 1 = nacional, 2 = internacional): ";
     cin >> zona;
      cout << " ¿Es fragil? (S / N): ";
     cin >> fragil;
     
     if ( peso <= 0 || distancia <= 0) {
         cout << " Error: el peso y la distacia debe ser positivos\n ";
         return 0;
     }
     if (peso > 30) {
         cout << " Error: el peso supera el limite de 30 kg\n ";
         return 0;
     }
     if ( zona <= 1 || zona <= 2) {
         cout << " Error: la zona debe ser 1 (nacional) o 2 (internacional)\n ";
         return 0;
     }
     if ( !(fragil == 'S' || fragil == 's' || fragil == 'N' || fragil == 'n')) {
         cout << " Error: la respuesta es fragil debe ser S/s o N/n\n ";
         return 0;
     }
     
     double tarifa = 8000 + (1200 * peso) + (50 * distancia);
     
     if (zona == 2) {
         tarifa *= 1.5;
     }
     
     if (fragil == 'S'  || fragil == 's') {
         tarifa *= 1.20;
     }
     
     cout << "\nValor final a pagar: $ " << tarifa << "\n";
     
     
      cout << "=== EJERCICIO 12: RIESGO Y CAPACIDAD DE PAGO === \n\n";
      
      double ingreso, deuda;
      int edad;
      int historial;
      
      cout << " Ingrese el ingreso mensual: ";
      cin >> ingreso;
      cout << " Ingrese la deuda mensual: ";
      cin >> deuda;
      cout << " Ingrese la edad: ";
      cin >> edad;
      cout << " ¿Tiene historial criditicio? (1 = si, 0 = no): ";
      cin >> historial;
      
      if (ingreso <= 0) {
          cout << " Error: el ingreso debe ser positivo\n ";
          return 0;
      }
      if (deuda < 0) {
          cout << " Error: la deuda no puede ser negativa\n ";
          return 0;
      } 
       if (deuda < 18 || edad > 100) {
          cout << " Error: la edad debe estar entre 18 y 100\n ";
          return 0;
      }  
       if (historial <= 0 || historial <= 1) {
          cout << " Error: el historial debe ser 0 (no) o 1 (si)\n ";
          return 0;
      }  
      
      double relacion = deuda / ingreso;
      double capacidad = ingreso - deuda;
      
      cout << " \nRelacion deuda/ingreso: " << relacion << "\n";
      cout << " Capacidad de pago: " << capacidad << "\n";
      
      if (relacion > 0.5 || capacidad < 0) {
          cout << " Nivel de riesgo: ALTO\n ";
      } else if (relacion <= 0.3 || edad >= 25 || historial == 1) {
          cout << " Nivel de riesgo: BAJO\n ";
      } else {
          cout << " Nivel de riesgo: MEDIO\n ";
      }
      
      cout  << "\n==== FIN DE LOS EJERCICIOS ====\n ";
      return 0;
     
     }