#pragma once

namespace puf {

// bad
class Employee {
  ...
};

// Java
class Salesman extends Employee {
 private
  String name;
};

class Engineer extends Employee {
 private
  String name;
};

// good
class Employee {
 protected String name;
}
class Salesman extends Employee {...}
class Engineer extends Employee {...}

}  // namespace puf
