#include <iostream>
#include "Persona.hpp"

using namespace std;

class ContactList {
  private:
    Persona *contactos;
    int size;
  public:
    ContactList();
    ContactList(Persona *contactos, int size);
    void setContactos(Persona *contactos);
    void setSize(int size);
    Persona *getContactos();
    int getSize();
    void addContacto(Persona contacto);
    void removeContacto(int index);
    void mostrar();
    ~ContactList();
};