#pragma once

namespace rs {

// bad
class Person {
  get genderCode() { return "X"; }
};

class Male extends Person {
  get genderCode() { return "M"; }
};

class Female extends Person {
  get genderCode() { return "F"; }
};

// good
class Person {
  get genderCode() {return this._genderCode;}
}

}  // namespace rs
