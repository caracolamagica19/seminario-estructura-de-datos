#include <iostream>
using namespace std;

class Empleado
{
private: //Atributos de Empleado
    int ClaveEmpleado;
    string Nombre;
    string Domicilio;
    float Sueldo;
    string ReportaA;

protected:
public:
    Empleado(){ //Metodo Constructor 1
        ClaveEmpleado = 0;
        Nombre = "";
        Domicilio = "";
        Sueldo = 0;
        ReportaA = "";
    }
    Empleado(int empN, string name, string address, float salary, string manager){
        ClaveEmpleado = empN;
        Nombre = name;
        Domicilio = address;
        Sueldo = salary;
        ReportaA = manager;
        }

    void Imprime()
    {
        cout << "Clave de empleado: " << ClaveEmpleado << endl
             << "Nombre: " << Nombre << endl
             << "Domicilio: " << Domicilio << endl
             << "Sueldo: $" << Sueldo << endl
             << "Reporta a: " << ReportaA << endl;
    }
    void CambiaDomicilio(string newA)
    {
        Domicilio=newA;
        cout<<"Se actualizo con exito"<<endl;
    }
    void CambiaReportaA(string newM)
    {
        ReportaA=newM;
        cout<<"Se actualizo con exito"<<endl;
    }
    void CambiaSueldo(float newS)
    {   float Aumento;
        Aumento=Sueldo*newS;
        Sueldo= Sueldo+Aumento;
        cout<<"Se actualizo con exito"<<endl;
        cout<<"Su nuevo salario es: $"<<Sueldo<<endl;
    }
};

int main()
{

    int opt;
    string nuevoD, nuevoM;
    float nuevoS;
    //Empleado Trabajador;
    Empleado JefePlanta(21256, "Andrea Montes", "Puente Grande 10", 123.45, "Jairo Sanchez");
    Empleado JefePiso(21257, "Carolina Herrera", "Oblatos 666", 123.45, "Cain Estrada");

    do
    {

        cout << "\t \t Menu" << endl;
        cout << "1) Imprimir datos del empleado" << endl;
        cout << "2) Cambiar direccion del empleado" << endl;
        cout << "3) Cambiar a quien reporta" << endl;
        cout << "4) Actualizar sueldo" << endl;
        cout << "5) Salir" << endl;

        cin >> opt;

        switch (opt)
        {

        case 1:
            cout<<"Ingrese el numero de empleado de quien quiere la informacion"<<endl;
            cin>>opt;
            if(opt==21256){
                JefePlanta.Imprime();
            }
            else if(opt==21257){
                JefePiso.Imprime();
            }
            else{
                cout<<"Aqui no chambea"<<endl;
            }
            break;
        case 2:
            cout<<"Ingrese el numero de empleado de quien quiere el cambio"<<endl;
            cin>>opt;
            if(opt==21256){
            cout << "Ingrese el nuevo domicilio" << endl;
            cin.ignore();
            getline(cin, nuevoD);
            JefePlanta.CambiaDomicilio(nuevoD);
            }
            else if(opt==21257){
            cout << "Ingrese el nuevo domicilio" << endl;
            cin.ignore();
            getline(cin, nuevoD);
            JefePiso.CambiaDomicilio(nuevoD);
            }
            else{
                cout<<"Aqui no chambea"<<endl;
            }

            break;

        case 3:
            cout<<"Ingrese el numero de empleado de quien quiere el cambio"<<endl;
            cin>>opt;
            if(opt==21256){
            cout << "Ingrese al nuevo supervisor" << endl;
            cin.ignore();
            getline(cin, nuevoM);
            JefePlanta.CambiaReportaA(nuevoM);
            }
            else if(opt==21257){
            cout << "Ingrese al nuevo supervisor" << endl;
            cin.ignore();
            getline(cin, nuevoM);
            JefePiso.CambiaReportaA(nuevoM);
            }
            else{
                cout<<"Aqui no chambea"<<endl;
            }

            break;

        case 4:
            cout<<"Ingrese el numero de empleado de quien quiere el cambio"<<endl;
            cin>>opt;
            if(opt==21256){
            cout << "Ingrese el porcentaje de aumento" << endl;
            cin >> nuevoS;
            JefePiso.CambiaSueldo(nuevoS);
            }
            else if(opt==21257){
            cout << "Ingrese el porcentaje de aumento" << endl;
            cin >> nuevoS;
            JefePlanta.CambiaSueldo(nuevoS);
            }
            else{
                cout<<"Aqui no chambea"<<endl;
            }

            break;

        case 5:
            cout<<"Saliendo del programa..."<<endl;
            break;

        default:
            cout << "Opcion no valida, seleccione de la lista" << endl;
        }

    } while (opt != 5);

    return 0;
}