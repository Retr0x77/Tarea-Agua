#include <iostream>
#include <cctype>

using namespace std;

class componente {  //Se crea una clase componente 
private:
    char estado; //La clase tiene como atributo el estado con una variable de tipo char
public:
	componente() {
        estado = 'N'; 
    }
    componente(char Estado) {
        estado = Estado;
    }
    void setEstado(char Estado) {
        estado = Estado;
    }
    char getEstado() {
        return estado;
    }
};

char Entrada(string mensaje){ //se crea una funcion para pedir los datos al usuario, la funcion recibe el mensaje
	string entrada;  //creamos una variable de tipo string para guardar la entrada (para evitar un error en el programa si el usuario ingresa mas de un caracter)
	char caracter;   //creamos la variable caracter para guardar lo ingresado
    do {
        system("cls");
        cout << mensaje;  //mostramos el mensaje        
       getline(cin, entrada);  
        caracter = toupper(entrada[0]);  //guardamos solo el 1er caracter de la entrada y lo convertimos en mayusculas (por si el usuario ingresa el caracter seguido de un espacio o alguna otra cosa)      
    } while (cin.fail() || (caracter != 'S' && caracter != 'N')); //repetimos mientras no ingrese un caracter o lo ingresado se distinto de S o N
    return caracter;  
}

void Evaluar(componente C, componente B, componente T){ //Funcion para evaluar el estado de los componentes y mostrar el mensaje
	system("cls");
	if ((C.getEstado() == 'S' || T.getEstado() == 'N') && B.getEstado() == 'S') {
    cout << "Apagar la bomba!!\n";
} else if (C.getEstado() == 'S' && B.getEstado() == 'N') {
    cout << "No se puede encender la bomba\n";
} else if (C.getEstado() == 'N' && T.getEstado() == 'S' && B.getEstado() == 'N') {
    cout << "Encender la bomba!!\n";
} else {
    cout << "No es necesario hacer nada\n";
}
}
int main() {
    componente Cisterna, Bomba, Tanque; //se crean los objetos
    //Se llama a la funcion Entrada y se le asigna el valor que retorna al estado del objeto
    Cisterna.setEstado(Entrada("La cisterna tiene poca agua? S/N: ")); 
    Bomba.setEstado(Entrada("La bomba esta encendida? S/N: "));
	Tanque.setEstado(Entrada("El tanque tiene poca agua? S/N: "));
    Evaluar(Cisterna, Cisterna, Tanque);	//se llama a la funcion evaluar que nos dice lo que se debe hacer segun el estado de los objetos
    system("pause"); //evita que el programa cierre sin que el usuario pueda ver lo que debe hacer
}

