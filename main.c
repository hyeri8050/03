#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    float a;
    float b;
    
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%f", &a);
    
    printf("�и� �Է��ϼ��� : ");
    scanf("%f", &b);   
    
    float c;
    c = a/b; 

    printf("�������� ����� %f �Դϴ�.\n", c); 
	system("PAUSE");
	return 0;

}
