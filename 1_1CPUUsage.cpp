/*
	1. Sleep()������������ܹ��õ�ǰ�̡߳�ͣ��������
	2. WaitForSingleObject()�����Լ�ͣ�������ȴ�ĳ���¼�������
	3. GetTickCount()������ȡϵͳ���������ھ�����ʱ��ĺ���ֵ�����ɼ�¼39.7�졣
	4. QueryPerformanceFrequency()��QueryPerformanceCounter()�������ʵ����ȸ��ߵ�CPU���ݡ�
	5. timeGetSyatemTime()������һ���õ��߾���ʱ��İ취��
	6. GetProcessorInfo()/SetThreadAffinityMask()������������⣬�������������������õĿ���CPU��
	7. GetCPUTickCount()�����õ�CPU����������������
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