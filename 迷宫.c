// /**
//  * 迷宫项目
//  * data：2022/3/19
//  */
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// //0 is wall
// //-1 is person
// //2 is door
// int map[10][10] = {
// 	{0,0,0,0,0,0,0,0,0,0},
// 	{-1,1,0,0,0,0,0,0,0,0},
// 	{0,1,0,0,0,0,0,0,0,0},
// 	{0,1,1,1,1,1,1,0,1,2},
// 	{0,0,0,0,0,0,1,0,1,0},
// 	{0,0,1,1,1,0,1,1,1,0},
// 	{0,0,0,0,1,0,0,1,0,0},
// 	{0,0,0,0,1,1,1,1,0,0},
// 	{0,0,0,0,0,0,0,0,0,0},
// 	{0,0,0,0,0,0,0,0,0,0}
// };


//绘制迷宫
/**
 * @author: XLY
 * @data:2022/3/19
 * @description:绘制迷宫地图
 * @prama:void
 */
// void draw(){

// 	int i,j;
// 	for(i = 0; i < 10; i++){
// 		for(j = 0; j < 10; j++){
// 			if(map[i][j] == 0)
// 				printf("墙");
// 			else if(map[i][j] == 1)
// 				printf("  ");
// 			else if(map[i][j] == 2)
// 				printf("出");
// 			else
// 				printf("我");
// 		}
// 		putchar('\n');
// 	}
// }

/**
 * 绘制当前位置
 */
// void drwaLoc(){

// 	int tump = map[me[0]][me[1]];
// 	map[me[0]][me[1]] = -1;
// 	draw();
// 	map[me[0]][me[1]] = tump;
// }

//人物移动
/**
 * @author: XLY
 * @data:2022/3/19
 * @description:控制任务移动
 * @prama:void
 * loc标记当前前往的方向
 */
//void go(int addI, int addJ, int loc){

	/**
	 * 2上 往下走之后就不能往上走，这样会陷入死循环
	 * 1下
	 * -1左
	 * -2右
	 */

	//int i = 1, j = 0;
	//int me[2] = {1 + addI, 0 + addJ};//我的开始坐标
	//printf("me[0]=%d,me[1]=%d,map[me[0]][me[1]]=%d\n", me[0], me[1], map[me[0]][me[1]]);
// 	me[0] += addI, me[1] += addJ;
// 	//printf("me[0]=%d,me[1]=%d,map[me[0]][me[1]]=%d\n", me[0], me[1], map[me[0]][me[1]]);
// 	printf("当前x位置:%d\ny位置:%d\n", me[0] + 1, me[1] + 1);
// 	printf("当前不能去%d边\n", loc);
// 	drwaLoc();
// 	printf("\n\n");
// 	count++;
// 	if(map[me[0]][me[1]] == 2){//到达出口
// 		puts("到达出口");
// 		//exit(0);
// 		//goto again;
// 		printf("一共行走了%d步\n", count);
// 		return;
// 	}
// 	if((map[me[0]+1][me[1]] == 1 || map[me[0]+1][me[1]] == 2) && loc != 2){//下面
// 		//return;
// 		go(1, 0, 1);
// 		me[0] -= 1;//碰到墙 退回
// 	}
// 	if((map[me[0]][me[1]+1] == 1 || map[me[0]][me[1]+1] == 2) && loc != -1){//右面
// 		//printf("-");
// 		go(0, 1, -2);
// 		me[1] -= 1;
// 	}
// 	if((map[me[0]][me[1]-1] == 1 || map[me[0]][me[1]-1] == 2) && me[0] != 0 && loc != -2){//左面
// 		//printf("-");
// 		go(0, -1, -1);
// 		me[1] += 1;
// 	}
// 	if((map[me[0]-1][me[1]] == 1 || map[me[0]-1][me[1]] == 2) && me[1] != 0 && loc != 1){//上面
// 		//printf("-");
// 		go(-1, 0, 2);
// 		me[0] += 1;
// 	}
// 	//me[0] = me[0] - addI;
// 	//me[1] = me[1] - addJ;//返回一步
// 	printf("当前x位置:%d\ny位置:%d\n", me[0] + 1, me[1] + 1);
// 	printf("当前不能去%d边\n", loc);
// 	drwaLoc();
// 	printf("\n\n");
// 	//loc
// }

//#include "draw.h"
//#include "drawLoc.h"

//#include "go.h"
//#include "data.h"
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
//#include "draw.h"
#include "go.h"

//static int count = 0;

int main(void){

	//draw();
	go(0, 0, 0);
	//drwaLoc();
	//again:
	//printf("一共行走了%d步\n", count);
	return 0;
}
