#pragma once

namespace pdf {

// bad

class Employee {  // Java
 private
  String quota;
} class Engineer extends Employee {
  ...
} class Salesman extends Employee {
  ...
}

// good
class Employee {
  ...
} class Engineer extends Employee {
  ...
} class Salesman extends Employee {
 protected
  String quota;
}

}  // namespace pdf
