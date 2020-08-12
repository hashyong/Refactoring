#pragma once

namespace pucb {
// bad
class Party {
  ...
};

class Employee extends Party {
  constructor(name, id, monthlyCost) {
    super();
    this._id = id;
    this._name = name;
    this._monthlyCost = monthlyCost;
  }
};

// good
class Party {
  constructor(name) { this._name = name; }
};
class Employee extends Party {
  constructor(name, id, monthlyCost) {
    super(name);
    this._id = id;
    this._monthlyCost = monthlyCost;
  }
};

}  // namespace pucb
