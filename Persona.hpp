#include <iostream>

using namespace std;

class Persona {
  private:
    string nombre;
    int edad;
    int dni;
    char sexo;
    float peso;
    float altura;
  public:
    Persona();
    Persona(string nombre, int edad, char sexo);
    Persona(string nombre, int edad, int dni, char sexo, float peso, float altura);
    void setNombre(string nombre);
    void setEdad(int edad);
    void setDni(int dni);
    void setSexo(char sexo);
    void setPeso(float peso);
    void setAltura(float altura);
    string getNombre();
    int getEdad();
    int getDni();
    char getSexo();
    float getPeso();
    float getAltura();
    void mostrar();
    int calcularIMC();
    bool esMayorDeEdad();
    void comprobarSexo(char sexo);
    void generarDNI();
    string toString();
    ~Persona();
};