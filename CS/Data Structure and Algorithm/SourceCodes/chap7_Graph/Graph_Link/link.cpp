// 图的邻接表表示方法
#include <iostream>
#include <queue>

#include "Graph.h"
#include "Graphl.h"
using namespace std;
#define N 5 // 定义图的顶点数

int A[N][N] = {
	//        V0 V1 V2 V3 V4 
	/*V0*/    0, 0, 1, 1, 0,
	/*V1*/    0, 0, 0, 1, 1,
	/*V2*/    1, 0, 0, 1, 1,
	/*V3*/    1, 1, 1, 0, 0,
	/*V4*/    0, 1, 1, 0, 0,};      //图7.2中G1表示的无向图
	
	
void main()  {
	Graphl aGraphl(N);              // 建立图 
	aGraphl.IniGraphl(&aGraphl, A); // 初始化图

	cout << "DFS: ";
	aGraphl.DFS(aGraphl, 0);
	cout << endl;

	for (int i = 0; i < aGraphl.VerticesNum(); i ++) //把Mark改回UNVISITED
		aGraphl.Mark[i] = UNVISITED; 
	
	cout << "BFS: ";
	aGraphl.BFS(aGraphl, 0);
	cout << endl;

}