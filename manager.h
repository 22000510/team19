#include <stdio.h>
#include <string.h>
typedef struct{
 char name[100];
 int weight;
 int price;
 int starpoint;
 int pointnum;
} manager;

void listCafe(manager *m, int count);//제품 리스트 보여주기
int addCafe(manager *m);//목록 추가
int selectmenu(); //실행할 함수 메뉴 고르기 함수
int selectdatano(manager *m, int count); // 제품번호 고르기 함수
void readproduct(manager m);
int updateCafe(manager *m);
int deleteCafe(manager *m);
int selectCafe(manager *m, int count);
void addStar(manager *m);
void saveFile(manager *m, int count);
