#include<stdio.h>
#include<string.h>
#include<windows.h>
#define NAME "TOM"
#define PASSWORD "1234"
#pragma warning (disable: 4996)
int main()
{
    int time = 3;
    int times = 3;
    char name[64];
    char password[64];
    do
    {
        printf("����������˻���\n ");
        scanf("%s", name);
        printf("�������������:\n");
        scanf("%s", password);
        if (strcmp(name, NAME) == 0 && strcmp(password, PASSWORD) == 0)
        {
            printf("��ϲ�㣡��½�ɹ�!");
            break;
        }
        else
        {
            printf("������󣡴������룡\n");
            time--;
            if (time <= 0) {
                printf("����Ҫ��%d����\n", times);
                Sleep(times*1000);
                times += 3;
            } 
            else
            printf("�㻹��%d�λ��᣺\n", time);
        }
    } while (1);
    return 0;
}