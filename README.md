# pintos
操作系统实验课pintos版本管理

### 17-04-02
在src/threads/里添加run_all_scripts.sh脚本，批量运行测试程序，并将结果保存在
./test_log/里。

PS:由于测试程序运行后不会自动停止，不能实现批量，改为sh脚本能单次运行编号(0~26)的测试程序。
如 sh run_all_scripts.sh 13 （运行编号为13的测试程序）。

### 17-04-03
- 通过修改线程休眠函数来保证pintos不会在一个线程休眠时忙等待。
- 通过修改pintos排队的方式来使得所有线程按优先级正确地被唤醒。

成功标志：alarm-priority 能够通过，原20/27 fail的结果变为19/27 fail。
