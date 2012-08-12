#include "environment.h"

namespace DCI {
  using namespace base_matrices;

//  Environment::Environment (const base_common & env) : base_common (env) {
//  }

//  Environment::Environment (const Environment & env) : base_common (env) {
//  }

  Environment::Environment () : base_common () {
//    useSupernodal();
    useSimplicial();
  }

  Environment::~Environment () {
  }

  Bool Environment::IsPosDef () {
    if (common->status == CHOLMOD_NOT_POSDEF)
      return dciFalse;
    else
      return dciTrue;
  }

}
