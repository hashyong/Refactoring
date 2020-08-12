#pragma once

namespace rncwg {

void old() {
  function getPayAmount() {
    let result;
    if (isDead)
      result = deadAmount();
    else {
      if (isSeparated)
        result = separatedAmount();
      else {
        if (isRetired)
          result = retiredAmount();
        else
          result = normalPayAmount();
      }
    }
    return
  }
}

void oldOpt() {
  function getPayAmount() {
    if (isDead) return deadAmount();
    if (isSeparated) return separatedAmount();
    if (isRetired) return retiredAmount();
    return normalPayAmount();
  }
}

}  // namespace rncwg
