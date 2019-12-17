#include<stdio.h>

int main(){

    int st_id[10], i, n, id, pos=8, low, high, mid;
    printf("give n\n");
    scanf("%d", &n);
    printf("enter st in ascending id\n");
    for(i = 0; i<n; i++){
    scanf("%d", &st_id[i]);
    }

    printf("number to be searched\n");
    scanf("%d", &id);

    low = 0;
    high = n-1;

    while(low <= high){

    mid = (low+high) /2;

    if(id == st_id[mid])
    {
    printf("student id %d founded at position %d\n", id, mid);
    pos = 10;
    break;
    }
    else if(id < st_id[mid]) high = mid-1;
    else low = mid+1;
    }
    if(pos == 8) printf("student id not found");
    return 0;
}
