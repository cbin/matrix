#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <io.h>

int main(int argc, char *argv[])
{
char a[5][5]; //выдел€ю пам€ть дл€ массива размером 25 байт
int i,j,n, handle; //объ€вл€ю переменные типа integer
for(i=0;i<5;i++)
 {
    for(j=0;j<5;j++)
    {
          
          n=5;  //создаю временную переменную
          a[i][j]=0; //присваиваю всем элементам массива 0 значение
          if((i==j)||(j==n-i-1)) a[i][j]=1; 
          printf("%3d", a[i][j]); //вывожу на экран сформированную матрицу  
          }                       //размером 5х5
          printf("\n");
          }
          _fmode=O_BINARY;
          handle=creat("matrix.txt", S_IREAD|S_IWRITE); //создаю двоичный файл
          write(handle, a, sizeof(a)); //записываю матрицу в файл
          close(handle); //закрываю файл
          getch();  //ждЄм нажати€ любой клавиши
}  


