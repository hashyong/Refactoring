#pragma once

namespace pf {

void bad() {
  function tenPercentRaise(aPerson) { aPerson.salary = aPerson.salary.multiply(1.1); }
  function fivePercentRaise(aPerson) { aPerson.salary = aPerson.salary.multiply(1.05); }
}

void good() {
  function raise(aPerson, factor) { aPerson.salary = aPerson.salary.multiply(1 + factor); }
}

}  // namespace pf
