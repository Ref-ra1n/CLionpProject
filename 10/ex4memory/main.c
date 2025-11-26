#include <stdio.h>
void func1(){

}
void  func2(){
    func1();
}
int main() {
    func1();
    func2();
    return 0;
}
