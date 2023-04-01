#include "ContactList.hpp"

ContactList::ContactList() {
  this->contactos = new Persona[0];
  this->size = 0;
};

ContactList::ContactList(Persona *contactos, int size) {
  this->contactos = contactos;
  this->size = size;
};

void ContactList::setContactos(Persona *contactos) {
  this->contactos = contactos;
};

void ContactList::setSize(int size) {
  this->size = size;
};

Persona *ContactList::getContactos() {
  return this->contactos;
};

int ContactList::getSize() {
  return this->size;
};

void ContactList::addContacto(Persona contacto) {
  Persona *newContactos = new Persona[this->size + 1];
  for (int i = 0; i < this->size; i++) {
    newContactos[i] = this->contactos[i];
  }
  newContactos[this->size] = contacto;
  this->contactos = newContactos;
  this->size++;
};

void ContactList::removeContacto(int index) {
  Persona *newContactos = new Persona[this->size - 1];
  for (int i = 0; i < this->size; i++) {
    if (i < index) {
      newContactos[i] = this->contactos[i];
    } else if (i > index) {
      newContactos[i - 1] = this->contactos[i];
    }
  }
  this->contactos = newContactos;
  this->size--;
};

void ContactList::mostrar() {
  for (int i = 0; i < this->size; i++) {
    cout << "Contacto " << i + 1 << endl;
    this->contactos[i].mostrar();
  }
};

ContactList::~ContactList() {
  delete[] this->contactos;
};