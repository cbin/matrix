#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <io.h>

int main(int argc, char *argv[])
{
char a[5][5]; //������� ������ ��� ������� �������� 25 ����
int i,j,n, handle; //�������� ���������� ���� integer
for(i=0;i<5;i++)
 {
    for(j=0;j<5;j++)
    {
          
          n=5;  //������ ��������� ����������
          a[i][j]=0; //���������� ���� ��������� ������� 0 ��������
          if((i==j)||(j==n-i-1)) a[i][j]=1; 
          printf("%3d", a[i][j]); //������ �� ����� �������������� �������  
          }                       //�������� 5�5
          printf("\n");
          }
          _fmode=O_BINARY;
          handle=creat("matrix.txt", S_IREAD|S_IWRITE); //������ �������� ����
          write(handle, a, sizeof(a)); //��������� ������� � ����
          close(handle); //�������� ����
          getch();  //��� ������� ����� �������
}  


