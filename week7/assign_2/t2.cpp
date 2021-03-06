/* 
 * 成绩判断:
 *    输入一个0--100的分数，判断分数代表什么等级。
      95<=分数<=100, 输出1
      90<=分数<95,输出2
      85<=分数<90,输出3
      80<=分数<85,输出4
      70<=分数<80,输出5
      60<=分数<70输出6
      分数 < 60;输出7.
 * 输入: n
 *    eg. 87
 * 输出: m
 *    eg. 3
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  int m;
  cin >> n;
  if (n >= 95 && n <= 100) {
    m = 1;
  } else if (n >= 90 && n < 95) {
    m = 2;
  } else if (n >= 85 && n < 90) {
    m = 3;
  } else if (n >= 80 && n < 85) {
    m = 4;
  } else if (n >= 70 && n < 80) {
    m = 5;
  } else if (n >= 60 && n < 70) {
    m = 6;
  } else {
    m = 7;
  }
  cout << m << endl;
  return 0;
}