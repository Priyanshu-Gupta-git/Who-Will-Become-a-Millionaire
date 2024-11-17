#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct detail{
	char name[15];
    long int mo_num;
	char states[15];
	char ch;
	char st;
	
}detail;
void alldetail(struct detail *d)
{
	printf("\n\t\t<<<<<<<<======---||---======>>>>>>>>>>\n\n");
	printf("\t\tWELLCOME \n\n\t\t\tto\n\n\t\t\t\t\"KON BANEGA CROREPATI\"\n\n");
	printf("\t\t<<<<<<<<======---||---======>>>>>>>>>>\n\n");	printf("________***ENTER THE DETAILS***___________ \n\n");
	printf("<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n\n");
	printf("\t\tWhat is your good name\n\n\n");
	printf("<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n");
 	fgets(d->name,50,stdin);
 	printf("\n\n<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n");
	printf("\t\tWhat is your state name\n");
	printf("\n\n<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n");
	fgets(d->states,20,stdin);
	printf("\n\n<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n");
	puts("\t\tWHAT IS YOUR MOBILE NUMBER :");
	printf("\n\n<<IIIIIIIII>><<IIIIIIIII>>::||::<<IIIIIIIII>><<IIIIIIIII>>\n\n");
	fscanf(stdin,"%ld",&d->mo_num);
	getchar();
		printf("\n*********************************\n");
	printf("\"Before you can become a millionaire,\n you have to learn to think like a millionaire. \nYou have to learn how to motivate yourself to face fear with courage.\"\n");
	printf("*********************************\n");
	puts(" \t\t......Select the opstion.....\n\n\"_______PLAY OR NOT IF YOU WANT PLAY THEN ENTER________\" \n");
    printf("\t<|><|><|><|><|><|><|><|><|>\n");
	printf("\t\t<P>play \n\t\t<N>not\n");
	printf("\t<|><|><|><|><|><|><|><|><|>\n");
    scanf("%c",&d->ch);
}
int main()
{
	detail d;
	int c=0,r=0;
	FILE *fp;
	fp=fopen("detail.txt","a");
	if(fp==NULL){
	    printf("File is not found");
	    exit(0);
	}
    alldetail(&d);
    fprintf(fp,"%d\n");
	
    fputs(d.name,fp);
	fputs(d.states,fp);
	fprintf(fp,"%d\n",d.mo_num);
	
	if(d.ch=='p' || d.ch=='P'){
	puts("****||START THE GAME||****\n");
	getchar();
	printf("-----|Select the level|-----\n\n");
	printf("\tEasy for->|E|\n\tMediom for->|M|\n\tHard for->|H|\n");
	scanf("%c",&d.ch);
	
	if(d.ch=='e'||d.ch=='E')
	{
		printf(" ********level 1:Start********\n");
		printf("THIS IS FIRST QUESTION ON YOUR SCREEN\n");
		printf("What do we use scanf function for in c language\n");
		printf("________________________________________\n");
		getchar();	
		printf("(a)output\t\t (b)input\n(c)exit\t\t \t(d)nane of therse\n");
		scanf("%c",&d.ch);
		if(d.ch=='b'||d.ch=='B'){
			printf("YOUR ANSWER IS RIGHT\n");
			printf("you have won 1 crode\n");	
            c+=1;
            r+=1;
			getchar();
		}
		else
			printf("\t\twrong answer\n");
		
			printf("THIS IS SECOND QUESTION ON YOUR SCREEN\n");
	    	printf("who developed c language?\n");
	    	printf("________________________________________\n");
			printf("(a)Dennis ritchie \t\t(b)bjarne stroustrup\n(c)guido van rossum\t\t (d)nane of therse\n");
			
			scanf("%c",&d.ch);
		if(d.ch=='a'||d.ch=='A'){
		
    	printf("YOUR ANSWER IS RIGHT\n");
        c+=5;
        r+=1;
			printf("you have won 5 crode\n");}
		
			else{
	    	printf("\t\twrong answer");
		}
	
		printf("Do you want to play this further y or n?\n");
		getchar();
			scanf("%c",&d.ch);

	if(d.ch=='y'||d.ch=='Y'){
	goto level2;
		}
		else {
		    goto end;
		}
	}

        else if(d.ch == 'm' || d.ch == 'M') {
 	    level2:
 		printf(" ********level 2:Start********\n\n");
        printf("THIS IS THE FIRST QUESTION ON YOUR SCREEN\n");
        printf("Which of these is a looping statement?\n");
        printf("________________________________________\n");
        printf("(a)fgets\t\t(b)for\n(c)fputc\t\t(d)function\n");
        getchar();
        scanf("%c",&d.ch);

            if(d.ch == 'b' || d.ch == 'B') {
            printf("YOUR ANSWER IS RIGHT\n");
            printf("You have won 9 crore\n");
            c+=9;
             r+=1;
        }
            else{
        	printf("this is wrong answer\n");
        
		}
            printf("THIS IS THE SECOND QUESTION ON YOUR SCREEN\n");
            printf("Who developed the C++ language?\n");
            printf("________________________________________\n");
            printf("(a)Dennis Ritchie\t(b)Bjarne Stroustrup\n(c)Guido van Rossum\t(d)None of these\n");
            getchar();
			scanf("%c",&d.ch);
            if(d.ch == 'b' || d.ch == 'B') {
                printf("YOUR ANSWER IS RIGHT\n");
                printf("You have won 15 crore\n");
                c+=15;
                 r+=1;
               
            } else {
                printf("\t\tYOUR ANSWER IS WRONG\n");
            }
            printf("Do you want to play this further y or n?\n");
		    getchar();
	  		scanf("%c",&d.ch);

         	if(d.ch=='y'||d.ch=='Y'){
	        goto level3;
		}
	      	else {
		    goto end;
		}
        }

                    else if  (d.ch == 'h' || d.ch == 'H') {
               	    level3:
       	printf("******** level 3:Start********\n\n");
        printf("THIS IS THE FIRST QUESTION ON YOUR SCREEN\n");
        printf("________________________________________\n");
        printf("Who developed the python language?and when did python launched start ?\n");
        getchar();
        printf("(a)Dennis Ritchie 1991\t\t\t(b)Bjarne Stroustrup 1980\n(c)Guido van Rossum 1991\t\t(d)None of these\n");
		scanf("%c",&d.ch);
        getchar();
        if(d.ch == 'c' || d.ch == 'C') {
            printf("YOUR ANSWER IS RIGHT\n");
            printf("You have won 9 crore\n");
            c+=9;
             r+=1;
        }
        else{
        	printf("\t\tThis is wrong answer");
		}
            printf("THIS IS THE SECOND QUESTION ON YOUR SCREEN\n");
            printf("we cannot use the keword 'break'simply within a ?\n");
            printf("________________________________________\n");
            printf("(a)loop\t\t\t\t(b)declaration\n(c)switch\t\t\t(d)None of these\n");
			scanf("%c",&d.ch);
			getchar();
            if(d.ch == 'b' || d.ch == 'B') {
                printf("YOUR ANSWER IS RIGHT\n");
                printf("You have won 15 crore\n");
                c+=15;
                 r+=1;
            } else {
                printf("\t\tYOUR ANSWER IS WRONG\n");
            }     
       }
   
        else {
        printf("__________Why don't you play this game?_____________");
       	printf("\n\t ______________________________\n");
        printf("\n\n----------REASON------------\n");
        getchar();
        scanf("%[^\n]s",&d.st);
        printf("\n\n----------It's OK------------\n");
        printf("\n\nooooooooooooooooooooooooooooooooooooooooo\n");
         }
         end:
        printf("Total QUESTION 6 and  You have won %d QUESTION\n ",r);
        printf("Total amount You have won %d crore",c);
        fprintf(fp,"Total QUESTION 6 and  You have won %d QUESTION\n ",r);
        fprintf(fp,"Total amount %s have won %d crore\n",d.name,c);
        fprintf(fp,"_____________________________________________________");
       
        fclose(fp);
        }else {
        printf("__________Why don't you play this game?_____________");
       	printf("\n\t ______________________________\n");
        printf("\n\n----------REASON------------\n");
        getchar();
        scanf("%[^\n]s",&d.st);
        printf("\n\n----------It's OK------------\n");
        printf("\n\nooooooooooooooooooooooooooooooooooooooooo\n");
         }
        return 0;
       }
