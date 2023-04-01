#pragma once
#include <iostream>
#include "Persona.hpp"
#include "ContactList.hpp"

using namespace std;

int main() {

  Persona persona = Persona("Juan", 20, 'H');

  ContactList contactList = ContactList();
  contactList.addContacto(persona);

  contactList.mostrar();
}