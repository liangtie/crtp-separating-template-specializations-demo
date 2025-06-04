
#pragma once

#include "crtp.h"

class FOOL : public BASE<FOOL> {
public:
  void hi() { std::cout << "FOOL" << std::endl; }
};

class FOOL_2 : public BASE<FOOL_2> {
public:
  void hi() { std::cout << "FOOL_2" << std::endl; }
};