#include <stdio.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <io.h>

int put_ratio(char a[][5]); //��������� ���������


int main(int argc, char *argv[])
{
  
 char a[5][5];
 int i,j,handle,n;
 handle=open("matrix.txt", O_RDWR); //��������� ���� ��� ������
 read(handle, a, 25); //������ ����
 close(handle); //��������� ����
 for(i=0;i<5;i++)
 {
   for(j=0;j<5;j++)
   {
      printf("%3d", a[i][j]);  //������� ������� �� �����
   }
   printf("\n");
}
printf("����������� ������ %d", put_ratio(a)); 

n=25-put_ratio(a);
printf("\n����������� ����� %d", n);  
getch();
}

int put_ratio(char a[][5]) //������� �������� ���������� ������ � �������
  {
     int i,j,sum;
     sum=0;
     for(i=0;i<5;i++)
       {
          for(j=0;j<5;j++)
          {
             if(a[i][j]==1) sum++;
             }
             }
             return sum;
}
