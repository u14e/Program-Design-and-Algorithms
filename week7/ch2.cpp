#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  /* 圆周率的100位 */
  // 进度 7 位, 占 4 个字节
  float a = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
  // 进度 15 位, 占 8 个字节
  double b = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
  // 进度 15 位, 占 8 个字节
  long double c = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

  // 因为 cout 默认只显示 6 位精度, 
  // 所以需要 setprecision 设置精度
  cout << setprecision(100) << a << endl;
  cout << b << endl;
  cout << c << endl;

  /* 避免将一个很大的数与一个很小的数直接相加或相减，否则会 “丢失” 小数 */
  float x = 0, y = 0;
  x = 123456.789e5;
  y = x + 20;
  cout << setprecision(20) << y << endl;
  // 打印 12345678848, 但是实际应该是 12345678920
  // 因为 float 的精度只有 7 位，后面的不准确
  return 0;
}