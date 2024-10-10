#include<stdio.h>
int main(){
	jishan:
		printf("enter 1 for solar\n");
		printf("enter 2 for decorative\n");
        printf("enter 3 for indoor\n");
        printf("enter 4 for exit\n");
        int choice;
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice){
        	
			
			case 1:
        		printf("hii thank you for choosing solar lights\n");
        		goto jishan;
        		case 2:
        		printf("hii thank you for choosing decorative lights\n");
        		goto jishan;
        		case 3:
        		printf("hii thank you for choosing indoor lights\n");
        		goto jishan;
        		case 
				4:
        		printf("exited successfully\n");
        		break;
        		default:
        			printf("invalid choice\n");
        		goto jishan;
					
				
		}
}
