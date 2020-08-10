#pragma once

namespace refactor {

// old fun
int circum(int radius) {
  return 2 * radius;
}

// 简单做法
int circumference(int radius) {
  return 2 * radius;
}

//函数改名（迁移式做法）
int circumOpt(int radius) {
  return circumference(radius);
}
}
