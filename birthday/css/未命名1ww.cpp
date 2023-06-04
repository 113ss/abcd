#include<stdio.h>
#include<iostream> 
#include <windows.h>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define N 10              //产生随机颜色
#define Time 202004270     //延时器 
//________________________________________________________________________________________________________________
//定义低音
const int A1 = 131;
const int A2 = 147;
const int A3 = 165;
const int A4 = 175;
const int A5 = 196;
const int A6 = 220;
const int A7 = 247;

//定义中音
const int B1 = 262;
const int B2 = 296;
const int B3 = 330;
const int B4 = 349;
const int B5 = 392;
const int B6 = 440;
const int B7 = 494;

//定义高音
const int C1 = 523;
const int C2 = 587;
const int C3 = 659;
const int C4 = 698;
const int C5 = 784;
const int C6 = 880;
const int C7 = 988;

//定义高二度
const int D1 = 1047;
const int D2 = 1175;
const int D3 = 1319;
const int D4 = 1397;
const int D5 = 1568;
const int D6 = 1760;
const int D7 = 1976;

//定义节拍
const int OneBeat = 600;
const int HalfBeat = 300;
//___________________________________________________________
char randk();
void cake();
void PrintHeart();
bool delay500ms();
string blessing[20]={"☆ 我为你收集了编程所有的美，放在你生日的烛台上。将能说的话都藏在花蕾里，让它成为待放的秘密。",
				"☆ 这是你的第一次19岁，没什么经验，但我会陪你一起度过的。",
				"☆ 所有过往，皆为序章，所有将来，皆是可盼。",
				"☆ 五彩缤纷的世界,只有爱情最珍贵,在这属于你的日子里,祝你快乐!",
				"☆ 皎洁的月光是我为你点亮的烛光，灿烂的繁星是我送你许愿的流星，无尽的祝福是我送你的生日礼物。",
				"☆ 愿你拥有365个美丽的日子，衷心地祝福你--生日快乐！",
				"☆ 你是我义无反顾撞过的南墙，是大梦初醒的空欢喜一场。远了怕生，近了怕烦，少了怕淡，多了怕缠",
				"☆ 既许一人以偏爱，愿尽余生之慷慨。",
				"☆ 愿有岁月可回首，且以深情共白头。",
				"☆ 前半生你为我而来，余生我为你而去。",
				"☆ 生日快乐! /记住! 你生命的每一次扬帆启航/我都会伴你同行!",
				"☆ 夜里等待着你生日的来临，当钟声敲响的一瞬间我将与你共享属于你的一天，我的心与你同在。",
				"☆ 愿你求仁得仁，如愿以偿。愿你百岁无忧，此生安康。",
				"☆ 也许你并不是为我而生，可我却有幸与你相伴。愿我在有生之年，年年为你点燃生日的烛焰。",
				"                                                                    我爱你！\n",
				"                                                                    2021.8.12"
				};

long f=0;
char s[10]="color ";       
//________________________________________________________________________________________________________________
int main()
{
    int i=0;
    puts("\n\n\n\n\n\n\n\n\n\n ");
    for(i=0; i<N; i++)				//要变色的次数	 
    {
        s[6]=randk();
        s[7]=randk();
        system(s);					//调用cmd的color命令 
        printf("\r                                                  ★!生日快乐!★");
        while(f<81474400)f=f+1;
    }
    putchar('\n');
    cake();
    int T=1;
    while(T--)
    {
        Beep(C5, HalfBeat);
        Beep(C5, HalfBeat);
        Beep(C6, OneBeat);
        Beep(C5, OneBeat);
        Beep(D1, OneBeat);
        Beep(C7, OneBeat * 2);

        Beep(C5, HalfBeat);
        Beep(C5, HalfBeat);
        Beep(C6, OneBeat);
        Beep(C5, OneBeat);
        Beep(D2, OneBeat);
        Beep(D1, OneBeat * 2);

        Beep(C5, HalfBeat);
        Beep(C5, HalfBeat);
        Beep(D5, OneBeat);
        Beep(D3, OneBeat);
        Beep(D1, OneBeat);
        Beep(C7, OneBeat);

        Beep(D4, HalfBeat);
        Beep(D4, HalfBeat);
        Beep(D3, OneBeat);
        Beep(D1, OneBeat);
        Beep(D2, OneBeat);
        Beep(D1, OneBeat * 2);


        Beep(C5, HalfBeat);
        Beep(C5, HalfBeat);
        Beep(D5, OneBeat);
        Beep(D3, OneBeat);
        Beep(D1, OneBeat);
        Beep(C7, HalfBeat);
        Beep(C6, OneBeat * 2);

        Beep(D4, HalfBeat);
        Beep(D4, HalfBeat);
        Beep(D3, OneBeat);
        Beep(D1, OneBeat);
        Beep(D2, OneBeat);
        Beep(D1, OneBeat * 3);

        Sleep(500);
    }
    puts("\n\n\n致亲爱的黄小:\n\n\n");
    s[6]='b';       				//背景为淡蓝色； 
    for(int i=0;i<20;i++)
    {
    	s[7]=randk();
    system(s);
    printf("\n");
    cout<<blessing[i]<<endl;
    f=delay500ms();
	}
	  printf("\n\t\t\t  ");
    system("PAUSE");     			//暂停 
    system("cls");					//清屏 
    PrintHeart();
    printf("\n\t\t\t  ");
    system("PAUSE");
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t  谢谢观赏   Happy birthday！！\n");
    getchar();
    return 0;
}
char randk()                      //产生随机数 
{
    char a=0;
    a=(char) abs( rand()%16);
    if(a >=10)
    {
        a-=10;
        a+=97;
    }
    else a+=48;

    return a;
}
float ff(float x, float y, float z)
{
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float hh(float x, float z)
{
    for (float y = 1.0f; y >= 0.0f ; y -= 0.001f)   
    if (ff(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}
void PrintHeart()					//画心 
{
    for(float z = 1.5f; z > -1.5f; z -= 0.05f)
    {
        for(float x = -1.5f; x < 1.5f; x += 0.025f)
        {
            float v = ff(x, 0.0f, z);
            if (v <= 0.0f)
            {
                //s[7]=randk();
                //system(s);
                float y0 = hh(x, z);
                float ny = 0.01f;
                float nx = hh(x + ny, z) - y0;
                float nz = hh(x, z + ny) - y0;
                float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
            }
            else
                putchar(' ');
        }
        putchar('\n');
		f=delay500ms();
	} 
    
}
bool delay500ms()
{
	while(f<Time)
    {
        f=f+1;
        f=f-1;
        f=f+1;
    }
    return 0;
}
void cake()
{  
	printf("                                                       ! ! !  \n");
	printf("                                                     ---------\n");
	printf("                                                    |★黄 小 ★|\n");
	printf("                                                  -------------\n");
	printf("                                                  | 生 日 快 乐 |\n");
	printf("                                               -----------------\n");
	printf("                                               |来到人间的第7306天|\n");
	printf("                                               |★ ★ ★ ★ ★ ★ ★|\n");
}
