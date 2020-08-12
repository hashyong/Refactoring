#pragma once

namespace rcwf {

void bad() {
  class ChargeCalculator {
    constructor(customer, usage) {
      this._customer = customer;
      this._usage = usage;
    }
    execute() { return this._customer.rate * this._usage; }
  }
}

void good() {
  function charge(customer, usage) { return customer.rate * usage; }
}

}  // namespace rcwf
