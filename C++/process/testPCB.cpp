#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    this_thread::sleep_for(chrono::seconds(60)); // 持续60秒
    return 0;
}
//让这个进程持续60秒，然后用cat /proc/<pid>/stat查看他的进程控制块