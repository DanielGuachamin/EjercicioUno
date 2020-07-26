#include <iostream>
#include <iomanip>
using namespace std;
int exponente(int n, int p);
int main() {
  int op;
  do
  {
    cout << "\nMENU DE OPCIONES" << endl;
    cout << "1. Consultar AHORRROS JUANITO" << endl;
    cout << "2. Calculo de la potencia de un numero de forma recursiva" << endl;
    cout << "3. McDonald's - Ecuador" << endl;
    cout << "4. Empresa de calzados BUNKY" << endl;
    cout << "5. Salir" << endl;
    cout << "Eliga una opcion: ";
    cin >> op;
  } while ((op < 1) || (op > 5));
  if (op == 5)
  {
    cout << "\nGRACIAS POR USAR NUESTRO SERVICIO" << endl;
  }
  else
  {
    switch (op)
    {
      case 1:
      {
        cout << endl;
        int opcion;
        string mes;
        double monto, sumatoria = 0;
        do
        {
          cout << '\n' << "AHORROS JUANITO" << endl;
          cout << "1- Depositar dinero" << endl;
          cout << "2- Consultar dinero" << endl;
          cout << "0- Salir" << endl;
          cout << "Eliga una opcion: ";
          cin >> opcion;
          switch (opcion)
          {
            case 1:
            {
              cout << '\n' << "Ingrese el mes para depositar: ";
              cin >> mes;
              cout << '\n' << "Ingrese la cantidad de dinero a depositar: ";
              cin >> monto;
              sumatoria = sumatoria + monto;
            break;
            }
            case 2:
            {
              cout << '\n' << "Su cantidad de dinero actualmente es: " << sumatoria << endl;
            break;
            }
          }
        } while ((opcion == 1) || (opcion == 2));
        if (opcion == 0)
        {
          cout << '\n' << "GRACIAS POR USAR NUESTRO SERVICIO ";
        }
        else
        {
          cout << '\n' << "Eliga una opcion correcta por favor" << endl;
        }
      break;
      }
      case 2:
      {
        cout << endl;
        int num , pot;
        cout << "Ingrese la base: ";
        cin >> num;
        cout << "Ingrese el exponente: ";
        cin >> pot;
        cout << "\nEl resultado es: " << exponente (num, pot);
        return 0;
      break;
      case 3:
      {
        cout << endl;
        int N_hamburguesas;
        string tipo, pago;
        double costoTotal, cargo;
        bool a = false;
        cout << '\n' << "Ingrese el tipo de hamburguesa (Sencilla, Doble, Triple): ";
        cin >> tipo;
        cout << '\n' << "Ingrese cantidad de hamburguesas: ";
        cin >> N_hamburguesas;
        while (a == false)
        {
          cout << '\n' << "Ingrese metodo de pago(Efectivo, Tarjeta): ";
          cin >> pago;
          if ((pago == "Efectivo") || (pago == "Tarjeta"))
          {
            a = true;
          }
          else
          {
            cout << '\n' << "Ingrese un metodo de pago correcto" << endl;
          }
        }
        if (pago == "Tarjeta")
        {
          cargo = 0.05;
        }
        else
        {
          cargo = 0;
        }
        cout << setprecision(2) << fixed;
        if (tipo == "Sencilla")
        {
          costoTotal = (N_hamburguesas * 1.5) + (N_hamburguesas * 1.5 *cargo);
          cout << '\n' << "Usted debe pagar: $" << costoTotal;
        }
        else if (tipo == "Doble")
        {
          costoTotal = (N_hamburguesas * 2.5) + (N_hamburguesas * 2.5 *cargo);
          cout << '\n' << "Usted debe pagar: $" << costoTotal;
        }
        else if (tipo == "Triple")
        {
          costoTotal = (N_hamburguesas * 3.25) + (N_hamburguesas * 3.25 *cargo);
          cout << '\n' << "Valor a pagar: $" << costoTotal;
        }
      break;
      }
      case 4:
      {
        cout << endl;
        double sueldoAn,sueldoN;
        int categoria;
        cout << "Ingrese el sueldo anterior: ";
        cin >> sueldoAn;
        cout << "Ingrese la categoria de aumento: ";
        cin >> categoria;
        switch(categoria)
        {
          case 1:
          sueldoN=sueldoAn+(sueldoAn*0.1);break;
          case 2:
          sueldoN=sueldoAn+(sueldoAn*0.2);break;
          case 3:
          sueldoN=sueldoAn+(sueldoAn*0.5);break;
        }
        cout << endl << "_________________________________\n" ;
        cout << "Sueldo anterior: " << sueldoAn;
        cout << endl << "Categoria elegida: " << categoria;
        cout << endl <<"Sueldo nuevo: " << sueldoN;
      break;
      }
      }
    }
  }
}

int exponente( int n, int p )
{
  if( p==0 )
  {
    return 1;
  }
  else if (p != 1)
  {
    return n * exponente(n , --p);
  }
  else
  {
    return n;
  }
}
