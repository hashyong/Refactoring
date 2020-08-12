#pragma once

namespace es {

// bad
class Department {
  get totalAnnualCost() {...}
  get name() {...}
  get headCount() {...}
}
class Employee {
  get annualCost() {...}
  get name() {...}
  get id() {...}
}

// good
class Party {
  get name() {...}
  get annualCost() {...}
}
class Department extends Party {
get annualCost() {...}
get headCount() {...}
}
class Employee extends Party {
get annualCost() {...}
get id() {...}
}
}  // namespace es
