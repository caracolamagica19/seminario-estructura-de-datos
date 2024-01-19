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
};

int main() {
    int opc, clave;
    string maestro;
    Materia programacion(5882, "PROGRAMACION" ,"CAMPOS SERRANO, EDUARDO ALBERTO", "Introducción a la Programación.");
    Materia basesDeDatos(5890, "BASES DE DATOS" ,"AVIÑA MENDEZ, JOSE ANTONIO", "Gestión de Bases de Datos.");
    
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
            break;
            
        case 3:
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