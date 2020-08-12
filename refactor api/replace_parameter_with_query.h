#pragma once

namespace rpwq {

void bad() {
  availableVacation(anEmployee, anEmployee.grade);
  function availableVacation(anEmployee, grade) {
    // calculate vacation...
  }
}

void good() {
  availableVacation(anEmployee);
  function availableVacation(anEmployee) {
    const grade = anEmployee.grade;
    // calculate vacation...
  }
}

}  // namespace rpwq
