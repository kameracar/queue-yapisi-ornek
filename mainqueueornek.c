#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int queue[SIZE]={};
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();


int main() {
	int islem;
	while(1){
		printf("lutfen islemi seciniz\n1-enqueue\n2-dequeue\n3-goruntuleme\n4-cikis\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("lutfen gecerli bir sey seciniz\n");
				break;
		}
	}
	
}

void enqueue(){
	int alinan;
	if(rear==SIZE-1){
		printf("queue tamamen dolmus\n");
	}else{
		rear++;
		printf("enqueue yapilacak degeri giriniz: \n");
		scanf("%d",&alinan);
		queue[rear]=alinan;
		if(front==-1){
			front=0;
		}
	}
}
void dequeue(){
	if(rear==-1 || front==rear){
		printf("queue tamamen bos\n");
		front=rear=-1;
	}else{
		front++;
	}
}

void display(){
	if(rear==-1){
		printf("queue bos\n");
	}else{
		int i;
		for(i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}	
}
