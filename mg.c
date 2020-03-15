#include<stdio.h>
int a,maze[10][10],x[10][10],num = 0,min = 0,l = 0;
//x数组记录该方格是否被走过 
//num记录所走的步数
//l记录所走的路线
//min记录路线最短
void dfs (int m, int n)
{
  if (m == a - 2 && n == a - 2)
{
  if (l == 0) min = num;
  if (num < min) min = num;
   l++;
}
   if (maze[m][n] == 0 && x[m][n] == 0)
{
	num++;
	x[m][n] = 1;
	dfs(m - 1, n);
	x[m][n] = 0;
	num--;
}
  if (maze[m][n] == 0 && x[m][n] == 0)
{
	num++;
	x[m][n] = 1;
	dfs(m + 1, n);
	x[m][n] = 0;
	num--;
}
  if (maze[m][n] == 0 && x[m][n] == 0)
{
	num++;
	x[m][n] = 1;
	dfs(m, n + 1);
	x[m][n] = 0;
	num--;
}
  if (maze[m][n] == 0 && x[m][n] == 0) 
{
	num++;
	x[m][n] = 1; 
	dfs(m, n - 1);
	x[m][n] = 0;
	num--;
}
}

int main()
{
    scanf_s("%d", &a);
    for (int c = 0; c < a; c++)
{
   for (int d = 0; d < a; d++)
{
   scanf_s("%d", &maze[c][d]);
}
}
   dfs(1, 1);
   if (min)
   printf("%d", min);
   else
   printf("No solution");
}