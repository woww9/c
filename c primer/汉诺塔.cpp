    #include <stdio.h>

    int i=1;
    void move(int n,char from,char to)
    {printf("��%d��:��%d������%c---->%c\n",i++,n,from,to);
    }
    void hanoi(int n,char from,char depend_on,char to)
    {
        if (n==1)
        move(1,from,to);//ֻ��һ��������ֱ�ӽ������ϵ������ƶ���Ŀ�ĵ�
        else
        {
          hanoi(n-1,from,to,depend_on);
          move(n,from,to);
          hanoi(n-1,depend_on,from,to);
        }
    }
    int main()
    {
         printf("���������ӵĸ���:\n");
         int n;
         scanf("%d",&n);
         char x='A',y='B',z='C';
         printf("�����ƶ��������:\n");
         return hanoi(n,x,y,z);
    }
