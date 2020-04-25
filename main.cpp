#include <iostream>
#include <thread>

using namespace std;

void coreThread () {
    cout << "Coremate thread sample success!.."<<endl;
}

int main() {
    thread t1(coreThread);
    t1.join();
    return 0;
}