#define CSGP_REQUIRED_IMPL_LEVEL 1
#include "csgp.h"

void update(unsigned int delta) {

}

int main() {
  csgp_init();
  
  csgp_declareUpdate(update);

  csgp_destroy();
}
