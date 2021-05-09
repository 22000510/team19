#include <stdio.h>
#include <string.h>
#include "manager.h"

int main(void){
manager slist[100];
int count = 0, index=0, menu;
while(1){
menu = selectmenu();
if(menu == 0){printf("종료됨!");
break;
}
else if(menu == 1){
listCafe(slist,index);
}
else if(menu == 2){
count += addCafe(&slist[index++]);
}
}
return 0;
}
