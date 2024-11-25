#include <stdio.h>

int main(){
if(remove("C:\\Users\\Lucca\\Desktop\\Dragon Ball.txt")== 0){
    printf("that file was DELETED Successfully!");
}
else{
    printf("That file was NOT deleted!");
}
}