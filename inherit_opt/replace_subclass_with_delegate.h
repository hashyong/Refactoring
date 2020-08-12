#pragma once

namespace rswd {

// bad
class Order {
  get daysToShip() {
    return this._warehouse.daysToShip;
  }
}

class PriorityOrder extends Order {
get daysToShip() {
  return this._priorityPlan.daysToShip;
}
}

// good
class Order {
  get daysToShip() {
    return (this._priorityDelegate)
        ? this._priorityDelegate.daysToShip
        : this._warehouse.daysToShip;
  }
}

class PriorityOrderDelegate {
  get daysToShip() { return this._priorityPlan.daysToShip }
}

}  // namespace rswd
