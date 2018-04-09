#include "GUI.h"


uc8 SineWaveTab[256]=
{
 0x80,0x83,0x86,0x89,0x8C,0x8F,0x92,0x95,0x98,0x9B,0x9E,0xA2,0xA5,0xA7,0xAA,0xAD,0xB0,0xB3,0xB6,0xB9,0xBC,0xBE,0xC1,0xC4,0xC6,0xC9,0xCB,0xCE,0xD0,0xD3,0xD5,0xD7,
0xDA,0xDC,0xDE,0xE0,0xE2,0xE4,0xE6,0xE8,0xEA,0xEB,0xED,0xEE,0xF0,0xF1,0xF3,0xF4,0xF5,0xF6,0xF8,0xF9,0xFA,0xFA,0xFB,0xFC,0xFD,0xFD,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFD,0xFD,0xFC,0xFB,0xFA,0xFA,0xF9,0xF8,0xF6,0xF5,0xF4,0xF3,0xF1,0xF0,0xEE,0xED,0xEB,0xEA,0xE8,0xE6,0xE4,0xE2,0xE0,0xDE,0xDC,
0xDA,0xD7,0xD5,0xD3,0xD0,0xCE,0xCB,0xC9,0xC6,0xC4,0xC1,0xBE,0xBC,0xB9,0xB6,0xB3,0xB0,0xAD,0xAA,0xA7,0xA5,0xA2,0x9E,0x9B,0x98,0x95,0x92,0x8F,0x8C,0x89,0x86,0x83,
0x7F,0x7C,0x79,0x76,0x73,0x70,0x6D,0x6A,0x67,0x64,0x61,0x5D,0x5A,0x58,0x55,0x52,0x4F,0x4C,0x49,0x46,0x43,0x41,0x3E,0x3B,0x39,0x36,0x34,0x31,0x2F,0x2C,0x2A,0x28,
0x25,0x23,0x21,0x1F,0x1D,0x1B,0x19,0x17,0x15,0x14,0x12,0x11,0x0F,0x0E,0x0C,0x0B,0x0A,0x09,0x07,0x06,0x05,0x05,0x04,0x03,0x02,0x02,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x02,0x02,0x03,0x04,0x05,0x05,0x06,0x07,0x09,0x0A,0x0B,0x0C,0x0E,0x0F,0x11,0x12,0x14,0x15,0x17,0x19,0x1B,0x1D,0x1F,0x21,0x23,
0x25,0x28,0x2A,0x2C,0x2F,0x31,0x34,0x36,0x39,0x3B,0x3E,0x41,0x43,0x46,0x49,0x4C,0x4F,0x52,0x55,0x58,0x5A,0x5D,0x61,0x64,0x67,0x6A,0x6D,0x70,0x73,0x76,0x79,0x7C,
};

uc8 SawtoothWaveTab[256]=
{
0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,0x12,0x14,0x16,0x18,0x1A,0x1C,0x1E,0x20,0x22,0x24,0x26,0x28,0x2A,0x2C,0x2E,0x30,0x32,0x34,0x36,0x38,0x3A,0x3C,0x3E,
0x40,0x42,0x44,0x46,0x48,0x4A,0x4C,0x4E,0x50,0x52,0x54,0x56,0x58,0x5A,0x5C,0x5E,0x60,0x62,0x64,0x66,0x68,0x6A,0x6C,0x6E,0x70,0x72,0x74,0x76,0x78,0x7A,0x7C,0x7E,
0x80,0x81,0x83,0x85,0x87,0x89,0x8B,0x8D,0x8F,0x91,0x93,0x95,0x97,0x99,0x9B,0x9D,0x9F,0xA1,0xA3,0xA5,0xA7,0xA9,0xAB,0xAD,0xAF,0xB1,0xB3,0xB5,0xB7,0xB9,0xBB,0xBD,
0xBF,0xC1,0xC3,0xC5,0xC7,0xC9,0xCB,0xCD,0xCF,0xD1,0xD3,0xD5,0xD7,0xD9,0xDB,0xDD,0xDF,0xE1,0xE3,0xE5,0xE7,0xE9,0xEB,0xED,0xEF,0xF1,0xF3,0xF5,0xF7,0xF9,0xFB,0xFD,
0xFF,0xFD,0xFB,0xF9,0xF7,0xF5,0xF3,0xF1,0xEF,0xED,0xEB,0xE9,0xE7,0xE5,0xE3,0xE1,0xDF,0xDD,0xDB,0xD9,0xD7,0xD5,0xD3,0xD1,0xCF,0xCD,0xCB,0xC9,0xC7,0xC5,0xC3,0xC1,
0xBF,0xBD,0xBB,0xB9,0xB7,0xB5,0xB3,0xB1,0xAF,0xAD,0xAB,0xA9,0xA7,0xA5,0xA3,0xA1,0x9F,0x9D,0x9B,0x99,0x97,0x95,0x93,0x91,0x8F,0x8D,0x8B,0x89,0x87,0x85,0x83,0x81,
0x80,0x7E,0x7C,0x7A,0x78,0x76,0x74,0x72,0x70,0x6E,0x6C,0x6A,0x68,0x66,0x64,0x62,0x60,0x5E,0x5C,0x5A,0x58,0x56,0x54,0x52,0x50,0x4E,0x4C,0x4A,0x48,0x46,0x44,0x42,
0x40,0x3E,0x3C,0x3A,0x38,0x36,0x34,0x32,0x30,0x2E,0x2C,0x2A,0x28,0x26,0x24,0x22,0x20,0x1E,0x1C,0x1A,0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02, 	
};

uc8 TriangleWaveTab[256]=
{
0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,
0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,
0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,0x7C,0x7D,0x7E,0x7F,
0x80,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,
0x9F,0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,
0xBF,0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,
0xDF,0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0x97,
};

uc8 SquareWaveTab[256]=
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	
};


void GUI_draw(void)
{	
//	LCD_Display_Dir(1);//横屏
//	LCD_Display_Dir(0);//竖屏
//	LCD_DrawLine(50,50,50,270);//矩形框	x1,y1,x2,y2
//	LCD_DrawLine(200,50,200,270);
//	LCD_DrawLine(50,50,200,50);
//	LCD_DrawLine(50,270,200,270);
//	LCD_DrawLine(125,50,125,270);
//	
//	LCD_DrawLine(50,105,200,105);
//	LCD_DrawLine(50,160,200,160);
//	LCD_DrawLine(50,215,200,215);

	LCD_Display_Dir(1);//横屏
	LCD_DrawLine(40,40,280,40);
	LCD_DrawLine(40,120,280,120);
	LCD_DrawLine(40,200,280,200);
	
	LCD_DrawLine(40,40,40,200);
	LCD_DrawLine(100,40,100,200);
	LCD_DrawLine(160,40,160,200);
	LCD_DrawLine(220,40,220,200);
	LCD_DrawLine(280,40,280,200);
	
	LCD_ShowString(55,85,55,75,16,"LEFT");
	LCD_ShowString(110,85,55,75,16,"RIGHT");
	LCD_ShowString(165,85,55,75,16,"UP");
	LCD_ShowString(220,85,55,75,16,"DOWN");
	LCD_ShowString(10,85,55,75,16,"Move");
	
	LCD_ShowString(55,140,55,75,16,"Sin");
	LCD_ShowString(110,140,55,75,16,"Sawtooth");
	LCD_ShowString(165,140,55,75,16,"Triangle");
	LCD_ShowString(220,140,55,75,16,"Rectangular");
	LCD_ShowString(280,145,55,75,16,"Wave");
}

void GUI_scan(void)
{
	LCD_Display_Dir(0);//竖屏
	tp_dev.scan(0); 	//多屏通用扫描	
	if((tp_dev.sta&0x80))	//触摸屏被按下
	{
		if((tp_dev.x[0] > 40) && (tp_dev.x[0] < 120) && (tp_dev.y[0] > 220) && (tp_dev.y[0] < 280))	//(1,1)
		{
			GUI_draw_left();
		}
		if((tp_dev.x[0] > 40) && (tp_dev.x[0] < 120) && (tp_dev.y[0] > 160) && (tp_dev.y[0] < 220))	//(1,2)
		{
		
		}
		if((tp_dev.x[0] > 40) && (tp_dev.x[0] < 120) && (tp_dev.y[0] > 100) && (tp_dev.y[0] < 160))	//(1,3)
		{
		
		}
		if((tp_dev.x[0] > 40) && (tp_dev.x[0] < 120) && (tp_dev.y[0] > 40) && (tp_dev.y[0] < 100))	//(1,4)
		{
//			LCD_Fill(50,50,105,105,YELLOW);
//			LCD_ShowString(55,85,55,75,16,"LEFT");
//			LED0=(!LED0);
//			delay_ms(500);
//			LCD_Fill(50,50,105,105,WHITE);
//			LED0=(!LED0);
			GUI_draw_sin();
		}
		if((tp_dev.x[0] > 120) && (tp_dev.x[0] < 200) && (tp_dev.y[0] > 220) && (tp_dev.y[0] < 280))	//(2,1)
		{
			GUI_draw_sin();
		}
		if((tp_dev.x[0] > 120) && (tp_dev.x[0] < 200) && (tp_dev.y[0] > 160) && (tp_dev.y[0] < 220))	//(2,2)
		{
			GUI_draw_sawtooth();
		}
		if((tp_dev.x[0] > 120) && (tp_dev.x[0] < 200) && (tp_dev.y[0] > 100) && (tp_dev.y[0] < 160))	//(2,3)
		{
			GUI_draw_triangle();
		}
		if((tp_dev.x[0] > 120) && (tp_dev.x[0] < 200) && (tp_dev.y[0] > 40) && (tp_dev.y[0] < 100))	//(2,4)
		{
			GUI_draw_square();
		}
	}
	
}

u16 i = 0;
u8 LeftorRight_Val=0;
u8 AnyWaveTab[256]={0};
double DisplayCoefficient = 0.6;	//系数，最大 = 240/255
u16 Displacement = 0;//位移

//正弦波
void GUI_draw_sin(void)
{
	Displacement = 120 - 128 * DisplayCoefficient;
	LCD_Display_Dir(1);//横屏
	for( i=0;i<300;i++)
	{
		LCD_Fast_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val)%256] * DisplayCoefficient + Displacement),WHITE);   //清除上次波形
		LCD_DrawPoint(i+10,(SineWaveTab[i%256] * DisplayCoefficient + Displacement));  //画正弦波，正弦波形数据最大0xff，最小0x00,中间值0x80，要求中间值在图形正中间位置即y坐标=570，所以128+442=570
	}   
	LeftorRight_Val=0;                       //非移位状态清0
	for(i=0;i<256;i++)                       //存储当前波形数据到数组AnyWaveTab[]中
	{
		AnyWaveTab[i]=SineWaveTab[i];
	} 
	LED0=(!LED0);
}

//锯齿波
void GUI_draw_triangle(void)
{
	Displacement = 120 - 128 * DisplayCoefficient;
	LCD_Display_Dir(1);//横屏
	for( i=0;i<300;i++)
	{
		LCD_Fast_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val)%256] * DisplayCoefficient + Displacement),WHITE);   //清除上次波形
		LCD_DrawPoint(i+10,(TriangleWaveTab[i%256] * DisplayCoefficient + Displacement));  //画正弦波，正弦波形数据最大0xff，最小0x00,中间值0x80，要求中间值在图形正中间位置即y坐标=570，所以128+442=570
	}   
	LeftorRight_Val=0;                       //非移位状态清0
	for(i=0;i<256;i++)                       //存储当前波形数据到数组AnyWaveTab[]中
	{
		AnyWaveTab[i]=SineWaveTab[i];
	} 
	LED0=(!LED0);
}

//三角波
void GUI_draw_sawtooth(void)
{
	Displacement = 120 - 128 * DisplayCoefficient;
	LCD_Display_Dir(1);//横屏
	for( i=0;i<300;i++)
	{
		LCD_Fast_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val)%256] * DisplayCoefficient + Displacement),WHITE);   //清除上次波形
		LCD_DrawPoint(i+10,(SawtoothWaveTab[i%256] * DisplayCoefficient + Displacement));  //画正弦波，正弦波形数据最大0xff，最小0x00,中间值0x80，要求中间值在图形正中间位置即y坐标=570，所以128+442=570
	}   
	LeftorRight_Val=0;                       //非移位状态清0
	for(i=0;i<256;i++)                       //存储当前波形数据到数组AnyWaveTab[]中
	{
		AnyWaveTab[i]=SineWaveTab[i];
	} 
	LED0=(!LED0);
}

//方波
void GUI_draw_square(void)
{
	Displacement = 120 - 128 * DisplayCoefficient;
	LCD_Display_Dir(1);//横屏
	for( i=0;i<300;i++)
	{
		LCD_Fast_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val)%256] * DisplayCoefficient + Displacement),WHITE);   //清除上次波形
		LCD_DrawPoint(i+10,(SquareWaveTab[i%256] * DisplayCoefficient + Displacement));  //画正弦波，正弦波形数据最大0xff，最小0x00,中间值0x80，要求中间值在图形正中间位置即y坐标=570，所以128+442=570
	}   
	LeftorRight_Val=0;                       //非移位状态清0
	for(i=0;i<256;i++)                       //存储当前波形数据到数组AnyWaveTab[]中
	{
		AnyWaveTab[i]=SineWaveTab[i];
	} 
	LED0=(!LED0);
}

//左移
void GUI_draw_left(void)
{
	Displacement = 120 - 128 * DisplayCoefficient;
	LCD_Display_Dir(1);//横屏
	for( i=0;i<300;i++)
	{
		LCD_Fast_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val)%256] * DisplayCoefficient + Displacement),WHITE);   //清除上次波形
		LCD_DrawPoint(i+10,(AnyWaveTab[(i+LeftorRight_Val+LeftorRight_Num)%256] * DisplayCoefficient + Displacement));  //画正弦波，正弦波形数据最大0xff，最小0x00,中间值0x80，要求中间值在图形正中间位置即y坐标=570，所以128+442=570
	}   
	LeftorRight_Val=0;                       //非移位状态清0
	for(i=0;i<256;i++)                       //存储当前波形数据到数组AnyWaveTab[]中
	{
		AnyWaveTab[i]=SineWaveTab[i];
	} 
	LED0=(!LED0);
}
