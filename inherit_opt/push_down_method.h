#pragma once

namespace pdm {

// bad
class Employee {
  get quota { ... }
};

class Engineer extends Employee {
  ...
};
class Salesman extends Employee {
  ...
}

// good
class Employee {
  ...
};
class Engineer extends Employee {
  ...
};
class Salesman extends Employee {
  get quota { ... }
};

}  // namespace pdm
