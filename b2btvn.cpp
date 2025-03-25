#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct danhsach {
    char ten[100];
    int tuoi;
    int diemtb;
};
typedef struct danhsach ds;
void nhap(ds *ds) {
	getchar();
    printf("Nhap ten sinh vien: ");gets(ds->ten);
    printf("Nhap tuoi sinh vien ");scanf(" %d", &ds->tuoi);
	printf("Nhap diem tb  sinh vien: ");scanf("%d",&ds->diemtb);
   
}
void in(ds x){
	printf("\t%s \t %d \t %d\n",x.ten,x.tuoi,x.diemtb);
}
void xoa(int *n,ds x[],char name[]){
	for(int i = 0 ;i < *n;i++){
		if(strcmp(x[i].ten,name) == 0){
			for(int j = 0 ; j < *n-1;j++){
				x[j] = x[j+1];
			}
		}
		(*n)--;
	}
	
}


int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    ds a[100];
    
    while(1){
    	printf("\n-----------------------------------\n");
    	printf("1.Nhap thong tin hoc sinh.\n");
    	printf("2.In ra bang thong tin hoc sinh.\n");
    	printf("3.Xoa 1 sinh vien ra hoi danh sach.\n");
    	printf("4.Them 1 sinh vien vao danh sach.\n");
    	printf("0.Thoat.\n");
    	printf("\n-----------------------------------\n");
    	int lc;
    	printf("\n");
    	printf("\nYeu cau nhap lua chon: \n");
        scanf("%d",&lc);
        if(lc == 1){
        for(int  i= 0; i<n;i++){
        	nhap(&a[i]);
		}
		}
		else if(lc ==2 ){
			printf("STT \t TEN \t TUOI \t DIEM TB\n");
			for(int i =0 ; i < n;i++){
			printf("\n%d. ",i+1);
				in(a[i]);
			}
		}
		
		else if(lc ==3 ){
			char name[100];
			printf("Nhap ten can xoa khoi danh sach: \n");
			getchar();
			gets(name);
			xoa(&n,a,name);
		}
	else if(lc == 4){
			char name[200];
			int vtri;
			printf("Nhap ten can them vao danh sach: \n");
			getchar();
			gets(name);
			printf("Nhap vi tri can chen : \n");
			scanf("%d",&vtri);
			for(int i = n ;i > vtri;i--){
				strcpy(a[i].ten,a[i-1].ten);
			}
			strcpy(a[vtri].ten,name);
			++n;
		
		}
		else if(lc == 0){
		break;
    	
	}
}
}
