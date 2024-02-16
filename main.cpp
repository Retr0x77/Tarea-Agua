#include <iostream> 
#include<conio.h> 
#include <cctype> 
#include <stdio.h> 

using namespace std;
class cisterna{
private:
	char estado;
	public:
		cisterna();
		cisterna(char);
		void setEstado(char);
		char getEstado();
};

cisterna::cisterna(){
	estado='N';
}

cisterna::cisterna(char Estado){
	estado=Estado;
}

void cisterna::setEstado(char Estado){
	estado=Estado;
}

char cisterna::getEstado(){
	return estado;
}

class bomba{
private:
	char estado;
	public:
		bomba();
		bomba(char);
		void setEncendido(char);
		char getEncendido();
};

bomba::bomba(){
	estado='N';
}

bomba::bomba(char Estado){
	estado=Estado;
}

void bomba::setEncendido(char Estado){
	estado=Estado;
}

char bomba::getEncendido(){
	return estado;
}

class tanque{
private:
	char estado;
	public:
		tanque();
		tanque(char);
		void setEstado(char);
		char getEstado();
};
tanque::tanque(){
	estado='E';
}

tanque::tanque(char Estado){
	estado=Estado;
}

void tanque::setEstado(char Estado){
	estado=Estado;
}

char tanque::getEstado(){
	return estado;
}


int main(){
    cisterna Cisterna;
    bomba Bomba;
    tanque Tanque;
    
    
    string entrada; 
    
    char cisterna; 
    char bomba;
    char tanque;
    
     do{
         system("cls") ;
         cout<<"La cisterna tiene poca agua? S/N: ";      
    cin>>entrada;
     cin.ignore(1000, '\n');	
    cisterna = entrada.at(0);
    cisterna= toupper(cisterna);   
       }while((cisterna!='S')&&(cisterna!='N')); 
       Cisterna.setEstado(cisterna);  
        do{
         system("cls") ;
         cout<<"La bomba esta encendida? S/N: ";
   cin>>entrada;
    cin.ignore(1000, '\n');
    bomba = entrada.at(0);
    bomba= toupper(bomba);    
       }while((bomba!='S')&&(bomba!='N')); 
        Bomba.setEncendido(bomba);
       do{
         system("cls") ;
         cout<<"El tanque esta lleno o tiene poca agua? LLeno(F)/Poca Agua(E): "; //Fill (lleno) o Empty (Vacio)
    cin>>entrada;
         cin.ignore(1000, '\n');
    tanque = entrada.at(0);
    tanque= toupper(tanque);    
       }while((tanque!='F')&&(tanque!='E')); 
       Tanque.setEstado(tanque);
        system("cls") ;
       if((Cisterna.getEstado()=='S')&&(Bomba.getEncendido()=='S')){
       	cout<<"Apagar la bomba!!";
        }else if((Cisterna.getEstado()=='S')&&(Bomba.getEncendido()=='N')){
	   	cout<<"No se puede encender la bomba";
	   }else if((Tanque.getEstado()=='F')&&(Bomba.getEncendido()=='S')){
	   	cout<<"Apagar la bomba!!";
	   }else if((Cisterna.getEstado()=='N')&&(Tanque.getEstado()=='E')&&(Bomba.getEncendido()=='N')){
	   	cout<<"Encender la bomba!!";
	   }else if((Cisterna.getEstado()=='S')&&(Tanque.getEstado()=='F')&&(Bomba.getEncendido()=='N')){
	   	cout<<"No es necesario hacer nada";
	   }else if((Cisterna.getEstado()=='N')&&(Tanque.getEstado()=='E')&&(Bomba.getEncendido()=='S')){
	   	cout<<"No es necesario hacer nada";
	   }
	   cout<<endl;
	   cout<<endl;
system("pause");
}
