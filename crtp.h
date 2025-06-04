#pragma once
#include <iostream>

template <typename Derived>

class BASE {
  int _num{};

public:
  void hello() {
    std::cout << "base: " << _num << std::endl;
    static_cast<Derived *>(this)->hi();
  }
};
