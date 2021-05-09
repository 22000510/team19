#include <stdio.h>
#include <string.h>
#include "manager.h"

int main(void){
  manager slist[100];
  int count = 0, index=0, menu;
  while(1){
    menu = selectmenu();
    if(menu == 0){
      printf("종료됨!");
      break;
    }
    else if(menu == 1){
      listCafe(slist,index);
    }
    else if(menu == 2){
      count += addCafe(&slist[index++]);
    }
    else if(menu == 3){
      int no = selectdatano(slist, index);
      if(no>0) {
        updateCafe(&slist[no-1]);
      }
      else {
        printf("취소됨!\n");
      }
    }
    else if(menu == 4){
      int no = selectdatano(slist, index);
      if(no>0){
        printf("정말로 삭제하시겠습니까?(삭제:1) ");
        int delok;
        scanf("%d",&delok);
        printf("\n");
        if(delok == 1){
          deleteCafe(&slist[no-1]);
          count--;
        }
      }
      else {
        printf("취소됨!\n");
      }
    }
  }
  return 0;
}
