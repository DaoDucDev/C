#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int count = 0; //Bien toan cuc

typedef struct
{
    char maDoi[10];
    char tenDoi[50];
    char tenHLV[50];
    int diem;
} DoiBong;

typedef struct
{
    DoiBong doi1;
    DoiBong doi2;
    int banThangDoi1;
    int banThangDoi2;
    char ngayThiDau[50];
    char sanThiDau[30];
} TranDau;

int addTeamInfo(DoiBong *listTeams);

int main(int argc, char const *argv[])
{
    //DoiBong *listTeams;
    //Khai bao mang luu danh sach cac doi bong
    DoiBong listTeams[20]; 
    return 0;
}

int addTeamInfo(DoiBong *listTeams)
{
    if(listTeams == NULL)
    {
        listTeams = malloc(sizeof(DoiBong));

    }
    else
    {
        /* code */
    }
    count++;
    return 1;
}