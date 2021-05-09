#include "manager.h"
int addCafe(manager *m){
printf("이름은?");scanf("%s",m->name);
printf("가격은? ");
scanf("%d",&m->price);
printf("별점은? ");
scanf("%d",&m->starpoint);
return 1;
}
void readproduct(manager m){
printf("%8s %4d %4d \n",m.name,m.price,m.starpoint);
}
int selectmenu(){
int menu;
printf("1. 조회\n");
printf("2. 추가\n");
printf("3. 수정\n");
printf("4. 삭제\n");
printf("5, 저장\n");
printf("6. 이름검색\n");
printf("7. 가격검색\n");
printf("8. 별점검색\n");
printf("0. 종료\n\n");
printf("=> 원하는 메뉴는?");
scanf("%d",&menu);
return menu;
}
void listCafe(manager *m, int count){
printf("\n Name price starpoint \n");
printf("===========================================\n");
for(int i =0; i< count; i++){
if(m[i].price==-1) continue;
printf("%2d",i+1);
readproduct(m[i]);}
printf("\n Name price starpoint \n");
}
int selectdatano(manager *m, int count){
listCafe(m, count);
int no;
printf("번호는(취소:0)?");
scanf("%d",&no);
return no;
}
