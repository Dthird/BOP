/*
	1. Sleep()——这个方法能够让当前线程“停”下来。
	2. WaitForSingleObject()——自己停下来，等待某个事件发生。
	3. GetTickCount()——获取系统启动到现在经历的时间的毫秒值，最多可记录39.7天。
	4. QueryPerformanceFrequency()，QueryPerformanceCounter()——访问到精度更高的CPU数据。
	5. timeGetSyatemTime()——另一个得到高精度时间的办法。
	6. GetProcessorInfo()/SetThreadAffinityMask()。遇到多核问题，可以用这两个方法更好的控制CPU。
	7. GetCPUTickCount()——得到CPU核心运行周期数。
*/

#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;
const int COUNT = 200;
const double PI = 3.14159265;
const int INTERVAL = 300;
const double SPLIT = 0.01;


int main(){
	long busySpan[COUNT], idleSpan[COUNT];
	int half = INTERVAL / 2;
	double radian = 0.0;
	for(int i=0 ; i<COUNT ; i++){
		busySpan[i] = (long)(half + (sin(PI * radian) * half));
		idleSpan[i] = INTERVAL - busySpan[i];
		radian += SPLIT;
	}

	long startTime;
	int j = 0;
	while(true){
		j = j % COUNT;
		startTime = GetTickCount();
		while((long)(GetTickCount() - startTime) <= busySpan[j])
			;
		Sleep(idleSpan[j]);
		j++;
	}

	return 0;
}