/*accesing member of structure using structure pointer*/

#include<stdio.h>
struct abc{
    int x;
    int y;
};
int main(){
    struct abc a={5,10};
    struct abc *ptr=&a;

    printf("%d %d",ptr->x,ptr->y);
    return 0;
}