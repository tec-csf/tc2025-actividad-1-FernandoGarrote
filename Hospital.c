
#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<string>
#include <omp.h>

using namespace std;

int totalPacientes=2;
struct paciente{
  string nombre;
  string apellidos;
  int edad;
  int tel;
  int numCama;
};


int totalCamas=3;
struct cama{
  int numCama;
  bool disp;

};



void altaP (){
  string nombre;
  string apellidos;
  int edad;
  int tel;
  int numCama;
  int numPacientes;

  cout<<"Cuantos pacientes desea incorporar al hospital: "<<endl;
  cin>>numPacientes;

  for(int l=0; l<numPacientes; l++){
    cout<<"Ingresa el nombre del paciente: "<<endl;
    cin>>nombre;

    cout<<"Ingresa el apellido del paciente: "<<endl;
    cin>>apellidos;

    cout<<"Ingresa la edad del paciente: "<<endl;
    cin>>edad;

    cout<<"Ingresa el telefono del paciente: "<<endl;
    cin>>telefono;

    cama=infocama[];
    bool cond=false;
    while (int i=0; i<totalCamas; cond==false;) {
      if (infocama[i].disp=false){
        i=i+1;
      }
      else{
        paciente  infoPaciente[nombre, apellidos, edad, tel, i+1];
        cond=true;
        infocama[i].disp=false;
        totalPacientes=totalPacientes+1;
      }
    }

    if (cond=false){
      for(int i=1; i<6; i++){
        infocama[totalCamas+i, true];
      }
      paciente  infoPaciente[nombre, apellidos, edad, tel, totalCamas+1];
      totalCamas=totalCamas+5;
      totalPacientes=totalPacientes+1;

    }

    cout<<"El paciente fue dado de alta exitosamente "<<endl;
  }
}


void quePaciente (int n){
  cama=infocama[];
  if(n>totalCamas){
    cout<<"No existe la cama dada"<<endl;
  }
  else{
    if(infocama[n-1].disp=true){
      cout<<"La cama se encuentra disponible"<<endl;
    }
    else{
        paciente=infoPaciente[];
        bool cond=false;
        while(int i=0; i<totalPacientes;cond==false){
          if(infoPaciente[i].numCama==n){
            cout<<"El nombre del paciente es: "<<infoPaciente[i].nombre<< "El apellido es: "<<infoPaciente[i].apellidos<<"La edad es: "<<infoPaciente[i].edad<<"El telefono es: "<<infoPaciente[i].telefono<<endl;
            cond=true;
          }
          else{
            i++;
          }

        }
    }
  }
}

void darAlta(int n){
  cama=infocama[];
  if(n>totalCamas){
    cout<<"No existe la cama dada"<<endl;
  }
  else{
    if(infocama[n-1].disp=true){
      cout<<"La cama no tiene ningun paciente"<<endl;
    }
    else{
        paciente=infoPaciente[];
        bool cond=false;
        while(int i=0; i<totalPacientes;cond==false){
          if(infoPaciente[i].numCama==n){
            infoPaciente[i].numCama=(-1);
            infocama[n-1].disp=true;
            cond=true;
          }
          else{
            i++;
          }

        }
    }
  }
}

void todosPacientes(){
  paciente =infoPaciente[];
  for(int i=0; i<totalPacientes; i++){
    if(infoPaciente[i].numCama!=(-1)){
      cout<<"El nombre del paciente es: "<<infoPaciente[i].nombre<< "El apellido es: "<<infoPaciente[i].apellidos<<"La edad es: "<<infoPaciente[i].edad<<"El telefono es: "<<infoPaciente[i].telefono<<"Su cama es: "<<infoPaciente[i].numCama<<endl;
    }
  }
}

void queCamas(){
  cama=infocama[];
  int cDisp=0;
  int cOcu=0;
  for(i=0;i<totalCamas;i++){
    if(infocama[i].disp==true){
      cDisp=cDisp+1;
    }
    else{
      cOcu=cOcu+1;
    }
  }
  cout<<"El numero de camas disponibles es: "<<cDisp<<endl;
  cout<<"El numero de camas ocupadas es: "<<cOcu<<endl;
}

int main(){

  struct paciente p1 = {"Lionel", "Messi", 33, 32345, 1};
  struct paciente p2 = {"Ansu", "Fati", 17, 33678, 2};

  struct cama c1 = {1, false};
  struct cama c2 = {2, false};
  struct cama c3 = {3, true};







}
