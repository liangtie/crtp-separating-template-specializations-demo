#include "fool.h"

// NOTE: Comment out will not apply the specialization
#include "specialization.h"
auto main() -> int {
  FOOL().hello();
  FOOL_2().hello();
  return 0;
}
