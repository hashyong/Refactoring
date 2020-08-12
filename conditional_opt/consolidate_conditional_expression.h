#pragma once

namespace cce {
void old() {
  if (anEmployee.seniority < 2) return 0;
  if (anEmployee.monthsDisabled > 12) return 0;
  if (anEmployee.isPartTime) return 0;
}

void oldOpt() {
  if (isNotEligibleForDisability()) return 0;

  function isNotEligibleForDisability() {
    return ((anEmployee.seniority < 2) || (anEmployee.monthsDisabled > 12) ||
            (anEmployee.isPartTime));
  }
}

}  // namespace cce