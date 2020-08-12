#pragma once

namespace pum {

// bad
class Employee {
  ...
};

class Salesman extends Employee {
  get name() { ... }
};

class Engineer extends Employee {
  get name() { ... }
};

// good
class Employee {
  get name() {...}
}
class Salesman extends Employee {...}
class Engineer extends Employee {...}

}  // namespace pum
