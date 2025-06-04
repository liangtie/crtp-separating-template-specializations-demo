#pragma once
#include "crtp.h"
#include "fool.h"

template <> inline void BASE<FOOL>::hello() {
  std::cout << "specialization: " << _num + 1 << std::endl;
  static_cast<FOOL *>(this)->hi();
}
