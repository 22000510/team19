#include "manager.h"
int addCafe(manager *m){
  printf("이름은? ");
  scanf("%s",m->name);
  printf("가격은? ");
  scanf("%d",&m->price);
  printf("별점은? ");
  scanf("%d",&m->starpoint);
  m->pointnum=1;
  printf("\n");
  return 1;
}
void readproduct(manager m){
  printf("%10s %5d %4d %4d \n", m.name, m.price, m.starpoint, m.pointnum);
}
int selectmenu(){
  int menu;
  printf("1. 조회\n");
  printf("2. 추가\n");
  printf("3. 수정\n");
  printf("4. 삭제\n");
  printf("5, 저장\n");
  printf("6. 이름검색\n");
  printf("7. 별점검색\n");
  printf("8. 메뉴선택\n");
  printf("9. 별점추가\n");
  printf("0. 종료\n\n");
  printf("=> 원하는 메뉴는? ");
  scanf("%d", &menu);
  return menu;
}
void listCafe(manager *m, int count){
  printf("\n No Name price starpoint pointnum \n");
  printf("=====================================\n");
  for(int i=0; i<count; i++){
  if(m[i].price==-1) continue;
  printf("%2d",i+1);
  readproduct(m[i]);
  }
}
int selectdatano(manager *m, int count){
  listCafe(m, count);
  int no;
  printf("번호는(취소:0)? ");
  scanf("%d",&no);
  return no;
}
int updateCafe(manager *m){
  printf("이름은? ");
  scanf("%s",m->name);
  printf("가격은? ");
  scanf("%d",&m->price);
  printf("별점은? ");
  scanf("%d",&m->starpoint);
  m->starpoint = -1;
  printf("=>수정성공\n");
  return 1;
}
int deleteCafe(manager *m){
  m->price = -1;
  m->starpoint = -1;
  return 1;
}
int selectCafe(manager *m, int count){
  listCafe(m, count);
  int order;
  printf("주문할 메뉴는(취소:0)? ");
  scanf("%d",&order);
  return order;
}
void addStar(manager *m){
  int temp;
  printf("별점은? ");
  scanf("%d", &temp);
  printf("\n");
  m->starpoint*=m->pointnum;
  m->starpoint+=temp;      
  m->pointnum++;
  m->starpoint/=m->pointnum;
}
