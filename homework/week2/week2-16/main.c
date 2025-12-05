#include <stdio.h>
/*挂盐水的时候，如果滴起来有规律，先是滴一滴，停一下；然后滴二滴，停一下；再滴三滴，停一下...，
现在有一个问题：这瓶盐水一共有VUL毫升，每一滴是D毫升，每一滴的速度是一秒（假设最后一滴不到D毫升，则花费的时间也算一秒），
停一下的时间也是一秒这瓶水什么时候能挂完呢？
Input
输入数据包含多个测试实例，每个实例占一行，由VUL和D组成，其中 0<D<VUL<5000。(输入EOF说明结束)
Output
对于每组测试数据，请输出挂完盐水需要的时间，每个实例的输出占一行。*/
void count(int a,int b){
    int sum = 0, time =0,count = 0;
    while(sum < a){
        ++count;
        sum += (b * count);
        if(sum >= a){//最后一次循环超过容量
            int left = a -(sum - b * count);//最后一次剩余的量
            if(left % b == 0){
                time += (left/b);
                break;
            } else{
                time += (left/b + 1);
                break;
            }
        }
        time += (count + 1);
    }
    printf("%d\n",time);
}
int main() {
    int vul,d;
    /*scanf("%d %d",&vul,&d);
    count(vul,d);*/
    while (scanf("%d %d",&vul,&d)==2){
        count(vul,d);
    }
    return 0;
}
