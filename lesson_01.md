# 图灵机

## 图灵机的构成

1. 一条存储带
- 双向无限延长
- 上面有一个个小方块
- 每个小方块可存储一个数字/字母

2. 一个控制器
- 包含一个读写头，可以读、写、更改存储带上每一格的数字和字母
- 可以接受设定好的程序语句
- 可以存储当前自身的状态
- 可以变换自身的状态
- 可以沿着存储带一格一格地左右移动

## 图灵机工作步骤

1. 准备
- 存储带上符号初始化
- 控制器设置好自身当前状态
- 控制器置于起始位置
- 准备好工作程序

2. 反复执行以下工作直到停机
- 读写头读出存储带当前方格上的字母和数字
- 根据自身当前状态和所读到的字符，找到对应程序的语句
- 根据相应程序语句，做三个动作:
  1) 在当前存储带放个上写入一个相应的字母和数字
  2) 读写头向左或向右移一步
  3) 变更自身状态至新状态

3. 停机表示计算完毕，当前存储带上保留的就是计算结果

## 演示

[图灵机的运行机理](https://www.coursera.org/learn/jisuanji-biancheng/lecture/xiTdw/tu-ling-ji-de-yun-xing-ji-li)

> **补充**: 一条程序语句包含5部分：当前机器状态、当前读入的符号、当前应写入的符号、读写头的动作、机器应转入的状态

## 图灵机用途

**判定一个问题可不可解:** 
- 对于一个问题的输入 A, 问:
- A 能否推证出 B?
- 如果能找到一个图灵机，得到相应的符号序列 B,那么从 A 到 B 就是可计算的。否则，该问题不可计算