#include <stdio.h>
#include <stdlib.h>

//QUESTION 1

int swap(int *a,int *b) {
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main() {
    int n1,n2;
    printf("enter any num:");
    scanf("%d",&n1);
    printf("enter any num:");
    scanf("%d",&n2);
    printf("value before swapping %d,%d\n",n1,n2);
    swap(&n1,&n2);
    printf("value after swapping %d,%d\n",n1,n2);
    return;
}



//QUESTION 2

int main() {
    char string[200];
    printf("enter the string: ");
    scanf("%s",string);
    int len=strlen(string);
    char *lastchar= string + (len-1);
    for (int i=0;i<=len;i++) {
        printf("%c",*lastchar);
        lastchar--;
    }
    return 0;

}

//QUESTION 3


int main() {
    int n;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("enter %d numbers:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",ptr);
        ptr++;
    }
    printf("the array is:");
    ptr=arr;
    for (int i=0;i<n;i++) {
      printf("%d",*ptr);
      ptr++;
    }
    return 0;
}





//QUESTION 4

int search(int x,int y,const *arr) {
    for (int i=0;i<y;i++) {
        if (*arr==x) {
            printf("search matched\n");
            return 1;
        }
        arr++;
    }
    return 0;
}
int main() {
    int n ,element;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=&arr;
    printf("enter %d numbers:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",ptr);
        ptr++;
    }
    printf("enter the element you want to search:");
    scanf("%d",&element);
     if (search(element,n,arr)) {
        printf("element found");
     }else {
         printf("not found");
     }
    return 0;
}




//QYUESTON 5

int main() {
    int row,col;
    printf("enter num of rows:");
    scanf("%d",&row);
    printf("enter  num of col:");
    scanf("%d",&col);
    int matrix1[row][col],matrix2[row][col],matrix3[row][col];
    printf("matrix1:\n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("matrix2:\n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }
    int (*ptr1)[row]=matrix1;
    int (*ptr2)[row]=matrix2;
    int (*ptr3)[row]=matrix3;
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
                (*ptr3)[j]=(*ptr1)[j]+((*ptr2)[j]);
        }
        ptr1++;
        ptr2++;
        ptr3++;
    }
    printf("the final matrix is: \n");
    for (int i =0;i<row;i++) {
        for (int j=0;j<col;j++) {
            printf("%d  ",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
