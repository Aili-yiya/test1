#include <iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<iomanip>// 控制精度 2，
using namespace std;
           // 猜猜乐
/*int main()
{
	cout << setw(60) << "猜猜乐" << endl;
	cout << setw(70) << "根据猜的次数给予不同奖励！" << endl;
	cout << setw(70) << "1次 phone 16 土豪金" << endl;
	cout << setw(70) << "2-3次 小米移动电源" << endl;
	cout << setw(70) << "5次以内 VR眼镜" << endl;
	const double n = 5000.0;
	double cai;
	int caici = 0;
	
	for (;;)//无限循环
	{
		caici++;
		cout << "输入竞猜价格："<<endl;
		cout << "第" << caici << "次\t";
		cin >> cai;
	
		if ( cai <  n )                    
		{
			cout << "猜小了哦！" << endl;
		}
		else if (cai > n)
		{
			cout << "太大了！" << endl;
		}
		else if (cai = n && caici <=5 )
		{
			switch (caici) 
			{
			case 1: cout << "恭喜获得：phone 16 土豪金 1+3 " << endl;
				break;//跳过case
			case 2: cout << "恭喜获得：小米移动电源" << endl;
				break;//跳过case
			case 3: cout << "恭喜获得：小米移动电源" << endl;
				break;//跳过case
			case 4: cout << "恭喜获得：杂牌VR眼镜" << endl;
				break;//可省略
			}
			break;//跳出五次（50分钟改出来的bug）
		}
		else if (cai = n && caici > 5) 
		{
			cout << "安慰奖：浪费宝贵的一分钟。" << endl;
			break;
	     }
	}
	
	return 0;
}*/



int main()//对战
{
	int Hp1 = 100;
	int Hp2 = 100;

	int attack1 = 0;//李岩攻击力
	int attack2 = 0;//李佳硕攻击力
	int randNum;     // 随机数 决定谁先攻击
	srand(time(NULL));//

	while (Hp1 > 0 && Hp2 > 0)
	{
		randNum = rand();//RAND_MAX
		if (randNum % 2 == 1)
		{ //奇数李岩先攻
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			Hp2 -= attack1;
			Hp1 -= attack2;
		}
		else
		{ //偶数李佳硕先攻
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			Hp1 -= attack2;
			Hp2 -= attack1;
		}
	}
	cout << "李岩Hp:" << Hp1 << endl;
	cout << "李佳硕Hp:" << Hp2 << endl;
	if (Hp1 < Hp2)
	{
		cout << setw(60) << "李佳硕获胜！" << endl;
	}
	else 
	{
		cout << setw(60) << "李岩获胜！" << endl;
	}
}