#include "Persona.hpp"

Persona::Persona() {
  this->nombre = "";
  this->edad = 0;
  this->dni = 0;
  this->sexo = 'H';
  this->peso = 0.0;
  this->altura = 0.0;
};

Persona::Persona(string nombre, int edad, char sexo) {
  this->nombre = nombre;
  this->edad = edad;
  this->sexo = sexo;
};

Persona::Persona(string nombre, int edad, int dni, char sexo, float peso, float altura) {
  this->nombre = nombre;
  this->edad = edad;
  this->dni = dni;
  this->sexo = sexo;
  this->peso = peso;
  this->altura = altura;
};

void Persona::setNombre(string nombre) {
  this->nombre = nombre;
};

void Persona::setEdad(int edad) {
  this->edad = edad;
};

void Persona::setDni(int dni) {
  this->dni = dni;
};

void Persona::setSexo(char sexo) {
  this->sexo = sexo;
};

void Persona::setPeso(float peso) {
  this->peso = peso;
};

void Persona::setAltura(float altura) {
  this->altura = altura;
};

string Persona::getNombre() {
  return this->nombre;
};

int Persona::getEdad() {
  return this->edad;
};

int Persona::getDni() {
  return this->dni;
};

char Persona::getSexo() {
  return this->sexo;
};

float Persona::getPeso() {
  return this->peso;
};

float Persona::getAltura() {
  return this->altura;
};

void Persona::mostrar() {
  cout << "Nombre: " << this->nombre << endl;
  cout << "Edad: " << this->edad << endl;
  cout << "DNI: " << this->dni << endl;
  cout << "Sexo: " << this->sexo << endl;
  cout << "Peso: " << this->peso << endl;
  cout << "Altura: " << this->altura << endl;
};

int Persona::calcularIMC() {
  float imc = this->peso / (this->altura * this->altura);
  if (imc < 20) {
    return -1;
  } else if (imc >= 20 && imc <= 25) {
    return 0;
  } else {
    return 1;
  }
};

bool Persona::esMayorDeEdad() {
  if (this->edad >= 18) {
    return true;
  } else {
    return false;
  }
};

void Persona::comprobarSexo(char sexo) {
  if (sexo != 'H' && sexo != 'M') {
    this->sexo = 'H';
  } else {
    this->sexo = sexo;
  }
};

void Persona::generarDNI() {
  this->dni = rand() % 9999 + 1000;
};

string Persona::toString() {
  string cadena = "";
  cadena += "Nombre: " + this->nombre + "";
  cadena += "Edad: " + to_string(this->edad) + "";
  cadena += "DNI: " + to_string(this->dni) + "";
  cadena += "Sexo: " + this->sexo;
  cadena += "Peso: " + to_string(this->peso) + "";
  cadena += "Altura: " + to_string(this->altura) + "";
  return cadena;
};

Persona::~Persona() {
  cout << "Se ha destruido el objeto" << endl;
};