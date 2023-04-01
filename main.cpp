#pragma once
#include <iostream>
#include "Persona.hpp"

using namespace std;

int main() {

  Persona persona = Persona("Juan", 20, 'H');
  
  persona.mostrar();
}