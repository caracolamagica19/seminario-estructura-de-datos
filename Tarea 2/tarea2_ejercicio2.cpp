/*Incluya en la clase anterior la sobrecarga de los siguientes operadores: ==, !=, >>, <<, +, < y >, de tal manera que
dos objetos se puedan comparar (==, !=, <,>) o unir (+) usando los operadores indicados.*/
#include <iostream>
using namespace std;

class Materia {
    private:
    int clave;
    string nombre;
    string profesorTit;
    string libroTexto;
    protected:
    public:
    Materia(int c, string n, string p, string l){
        clave = c;
        nombre = n;
        profesorTit = p;
        libroTexto = l;
    }
    void imprime(){
        cout <<"La clave de esta materia es: "<<clave<<endl<<"Nombre de la materia: "<<nombre<<endl<<"El profesor que la imparte es: "<<profesorTit<<endl<<"El libro recomendado para la materia es: "<<libroTexto<<endl;
    }
    void cambiaClave(int nuevaC){
        clave=nuevaC;
        cout<<"Cambio realizado con exito"<<endl;
    }
    void cambiaProfe(string nuevoP){
        profesorTit=nuevoP;
        cout<<"Cambio realizado con exito"<<endl;
    }
    //Sobrecarga de operadores
    bool operator== (const Materia& otro) const //
    {
        return clave == otro.clave;
    }
    bool operator!= (const Materia& otro) const //
    {
        return clave != otro.clave;
    }
    bool operator<(const Materia& otro) const { //
        return clave < otro.clave;
    }
    bool operator>(const Materia& otro) const { //
        return clave > otro.clave;
    }
    string operator+(const Materia& otro) const { //Linea 99
        return profesorTit + otro.profesorTit;
    }
};

int main() {
    int opc, clave;
    string maestro;
    Materia programacion(5882, "PROGRAMACION" ,"EDUARDO ALBERTO CAMPOS SERRANO ", "Introducción a la Programación.");
    Materia basesDeDatos(5890, "BASES DE DATOS" ,"JOSE ANTONIOAVIÑA MENDEZ ", "Gestión de Bases de Datos.");

    do{
        cout << "\t \t Menu" << endl;
        cout << "1) Imprimir informacion de la materia." << endl;
        cout << "2) Cambiar clave de la materia." << endl;
        cout << "3) Cambiar maestro." << endl;
        cout << "4) Salir" << endl;
        cin>>opc;

        switch(opc){
        case 1:

            cout<<"1) Programacion"<<endl<<"2) Bases de Datos"<<endl;
            cin>>opc;
            if(opc==1){
                programacion.imprime();
            }
            else if(opc==2){
                basesDeDatos.imprime();
            }
            else{
                cout<<"Esa no es una opcion valida."<<endl;
            }
            break;
            if(programacion!=basesDeDatos){
                cout<<"Las claves de las materias son diferentes."<<endl;
            }
        case 2:
            cout<<"1) Programacion"<<endl<<"2) Bases de Datos"<<endl;
            cin>>opc;
            if(opc==1){
                cout<<"Ingrese la nueva clave "<<endl;
                cin>>clave;
                programacion.cambiaClave(clave);
            }
            else if(opc==2){
                cout<<"Ingrese la nueva clave "<<endl;
                cin>>clave;
                basesDeDatos.cambiaClave(clave);
            }
            else{
                cout<<"Esa no es una opcion valida."<<endl;
            }
            if(programacion==basesDeDatos){
                cout<<"Tener materias con claves iguales es ambiguo, hay que cambiarlo."<<endl;
            }
            cout << "Bases de datos esta antes en la lista: "<<(programacion<basesDeDatos)<<endl;
            cout << "Programacion esta antes en la lista: "<<(programacion>basesDeDatos)<<endl;
            break;

        case 3:
            cout<<"Los maestros registrados son: "<<programacion+basesDeDatos<<endl<<endl;
            cout<<"1) Programacion"<<endl<<"2) Bases de Datos"<<endl;
            cin>>opc;
            if(opc==1){
                cout<<"Ingrese al nuevo profesor "<<endl;
                cin.ignore();
                getline(cin, maestro);
                programacion.cambiaProfe(maestro);

            }
            else if(opc==2){
                cout<<"Ingrese al nuevo profesor "<<endl;
                cin.ignore();
                getline(cin, maestro);
                basesDeDatos.cambiaProfe(maestro);
            }
            else{
                cout<<"Esa no es una opcion valida."<<endl;
            }
            break;

        case 4:
            cout<<"Saliendo del programa..."<<endl;
            break;

        default:
            cout<<"Esa no es una opcion valida."<<endl;
        }

    }while(opc!=4);

    return 0;
}
