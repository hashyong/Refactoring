#pragma once

namespace rswd {

// bad
class List {...}
class Stack extends List {...}

// good
class Stack {
  constructor() {
    this._storage = new List();
  }
}
class List {...}
}  // namespace rswd
