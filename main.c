#include<stdio.h>  //Header file use for print() and scan()
#include<conio.h>  //Header file use for getch()

void design();
int draw();
int win();
//Character Array that store the element character because in our program we use symbol X And O
char tic[9]={'1','2','3','4','5','6','7','8','9'};

int main()
{
    int i;    //Here i is used to store the value which was returned by win()
    int player;   //player is used to show which player's turn is or which player win
     int a=1,move;  //Here a is used to asign the value of player when player become X or O it make player int value again
     player=a;
    char mark;
     printf("\n\n\t\t\t    TIC TAK TOE GAME by Aakash");
    do{

    design();  //Here we call our layout


     player=player%2;//Here we check which player's turn is
     if(player==0){
        printf("\n\n\t\t\t\tPlayer 2 Turn");player=a;}//if player is even then it's player 2 turn because We asign player=1 above
     else if(player!=0){
        printf("\n\n\t\t\t\tPlayer 1 Turn");player=a;}//If player is odd then it's player 1 turn because We asign player=1 above


    mark=(player % 2)?'O':'X';//Here player asign our game's Symbol

    printf("\n\n\tChoose from upper box where you want to place your symbol ");

    scanf("%d",&move);//Here user give the value where he wants to put his symbol

    //mark=player;//Here mark asing the player valuse which is our player symbol


    //Here we check where put the mark

    if(move==1){
        tic[0]=mark;
       player=a;}//player become the symbol so here player again asing the value of a

    else if(move==2){
        tic[1]=mark;
        player=a;}

     else if(move==3){
        tic[2]=mark;
        player=a;}

     else if(move==4){
        tic[3]=mark;
        player=a;}

         else if(move==5){
        tic[4]=mark;
        player=a;}

         else if(move==6){
        tic[5]=mark;
        player=a;}

         else if(move==7){
        tic[6]=mark;
        player=a;}

         else if(move==8){
        tic[7]=mark;
        player=a;}

         else if(move==9){
        tic[8]=mark;
        player=a;}

        else{
            printf("Invalid Choice");
            player=a;
            player--;//when choice is invalid then here player and a both decrease by one and out of this they will increase so
            //value of player and a not affected
            a--;
            getch();
        }
        i=win();//Check anyone win game or Game is Draw
        player=player+1;//value of player increase
        a++;//value of a also increases because a gives his value to player
}

while(i==2);
design();

//It's for showing which player won or Game Draw

if(i==1){
     player=player%2;
     if(player==0){
        printf("\n\n\t\t\t\tPlayer 1 Won The Game");
}
     else if(player!=0){
        printf("\n\n\t\t\t\tPlayer 2 Won The Game");}}
else
    printf("\n\n\t\t\t\tGame is Drawn");


    getch();
return 0;
}

//This function is used for making the layout of tic tak toe game

 void design(){

 printf("\n\n\n\t\t\t\t %c || %c || %c",tic[0],tic[1],tic[2]);
 printf("\n\t\t\t\t___||___||____");
 printf("\n\t\t\t\t %c || %c || %c",tic[3],tic[4],tic[5]);
 printf("\n\t\t\t\t___||___||____");
 printf("\n\t\t\t\t %c || %c || %c",tic[6],tic[7],tic[8]);
 printf("\n\t\t\t\t___||___||____");
  printf("\n\t\t\t\t   ||   ||");
  printf("\n\n\n  \t\tPLAYER 1 Symbol is:O\tPLAYER 2 Symbol is:X");
 }

//This function is used for checking wining and drawn condition
//It return a specific number for wining condition
//A specific number for Draw condition
//And a specific number when above both condition not executed

 int win(){
     if(tic[0]==tic[1]&&tic[1]==tic[2])
        return 1;
     else if(tic[3]==tic[4]&&tic[4]==tic[5])
        return 1;
      else if(tic[6]==tic[7]&&tic[7]==tic[8])
        return 1;
         else if(tic[0]==tic[3]&&tic[3]==tic[6])
        return 1;
         else if(tic[1]==tic[4]&&tic[4]==tic[7])
        return 1;
         else if(tic[2]==tic[5]&&tic[5]==tic[8])
        return 1;
         else if(tic[0]==tic[4]&&tic[4]==tic[8])
        return 1;
         else if(tic[2]==tic[4]&&tic[4]==tic[6])
        return 1;
         else if(tic[0]!='1'&&tic[1]!='2'&&tic[2]!='3'&&tic[3]!='4'&&tic[4]!='5'&&tic[5]!='6'&&tic[6]!='7'&&tic[7]!='8'&&tic[8]!='9')
            return 0;
       else
        return 2;
}
