#include <iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<iomanip>// ���ƾ��� 2��
using namespace std;
           // �²���
/*int main()
{
	cout << setw(60) << "�²���" << endl;
	cout << setw(70) << "���ݲµĴ������費ͬ������" << endl;
	cout << setw(70) << "1�� phone 16 ������" << endl;
	cout << setw(70) << "2-3�� С���ƶ���Դ" << endl;
	cout << setw(70) << "5������ VR�۾�" << endl;
	const double n = 5000.0;
	double cai;
	int caici = 0;
	
	for (;;)//����ѭ��
	{
		caici++;
		cout << "���뾺�¼۸�"<<endl;
		cout << "��" << caici << "��\t";
		cin >> cai;
	
		if ( cai <  n )                    
		{
			cout << "��С��Ŷ��" << endl;
		}
		else if (cai > n)
		{
			cout << "̫���ˣ�" << endl;
		}
		else if (cai = n && caici <=5 )
		{
			switch (caici) 
			{
			case 1: cout << "��ϲ��ã�phone 16 ������ 1+3 " << endl;
				break;//����case
			case 2: cout << "��ϲ��ã�С���ƶ���Դ" << endl;
				break;//����case
			case 3: cout << "��ϲ��ã�С���ƶ���Դ" << endl;
				break;//����case
			case 4: cout << "��ϲ��ã�����VR�۾�" << endl;
				break;//��ʡ��
			}
			break;//������Σ�50���Ӹĳ�����bug��
		}
		else if (cai = n && caici > 5) 
		{
			cout << "��ο�����˷ѱ����һ���ӡ�" << endl;
			break;
	     }
	}
	
	return 0;
}*/



int main()//��ս
{
	int Hp1 = 100;
	int Hp2 = 100;

	int attack1 = 0;//���ҹ�����
	int attack2 = 0;//���˶������
	int randNum;     // ����� ����˭�ȹ���
	srand(time(NULL));//

	while (Hp1 > 0 && Hp2 > 0)
	{
		randNum = rand();//RAND_MAX
		if (randNum % 2 == 1)
		{ //���������ȹ�
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			Hp2 -= attack1;
			Hp1 -= attack2;
		}
		else
		{ //ż�����˶�ȹ�
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			Hp1 -= attack2;
			Hp2 -= attack1;
		}
	}
	cout << "����Hp:" << Hp1 << endl;
	cout << "���˶Hp:" << Hp2 << endl;
	if (Hp1 < Hp2)
	{
		cout << setw(60) << "���˶��ʤ��" << endl;
	}
	else 
	{
		cout << setw(60) << "���һ�ʤ��" << endl;
	}
}