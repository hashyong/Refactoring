#pragma once

namespace rsm {

void bad() {
  class Person {
    get name(){...};
    set name(aString) { ... }
  }
}

void good() {
  class Person {
    get name() { ... }
  }
}

}  // namespace rsm
