#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char num[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void board(){
 system("cls");
 cout <<"    TIC TAC TOE    "<<endl;
 cout<<" NOTE : PLEASE ENTER NUMBERS ONLY FROM 1 TO 9"<<endl;
 cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;

 for(int i=0;i<3;i++)
 {
   
   for(int j=0;j<3;j++){
       cout<<" | "<<num[i][j];
    }
    cout<<" |"<<endl;
     cout<<" ____|___|____"<<endl; 
     
     cout<<endl;
 }

}
int win(){
    if((num[0][0]==num[0][1] && num[0][1]==num[0][2])){
        return 1;
    }
    else if((num[1][0]==num[1][1] && num[1][1]==num[1][2])){
        return 1;
    }
    else if((num[2][0]==num[2][1] && num[2][1]==num[2][2])){
        return 1;
    }
    else if((num[0][0]==num[1][0] && num[1][0]==num[2][0])){
        return 1;
    }
    else if((num[0][1]==num[1][1] && num[1][1]==num[2][1])){
        return 1;
    }
    else if((num[0][2]==num[1][2] && num[1][2]==num[2][2])){
        return 1;
    }
    else if((num[0][0]==num[1][1] && num[1][1]==num[2][2])){
        return 1;
    }
    else if((num[0][2]==num[1][1] && num[1][1]==num[2][0])){
        return 1;
    }
    else if(num[0][0]!='1' && num[0][1]!='2'&& num[0][2]!='3'&& num[1][0]!='4' && num[1][1]!='5' && num[1][2]!='6'
     && num[2][0]!='7' && num[2][1]!='8' && num[2][2]!='9' ){
        return -1;
     }
     else {
        return 0;
     }
}

int main(){
int p=1,a=0,b,f,g;
char c;
int visited[10]={0};
int count = 0;
int num1;
srand((unsigned) time(0));
cout<<"  TIC TAC TOE "<<endl;
cout<<"ENTER THE NUMBER OF PLAYERS : "<<endl;
cout<<"ENTER 1 OR 2 : ";
cin>>f;
if(f==1){
 jump:
    while (count ==0) {
        num1 =1+ (rand() % 10);
        if ( visited[num1] == 0) {
               visited[num1] = 1;
               break;
        }
}
    while(a==0){
    board();
    p=p%2;
    if(p==0){
        cout<< endl;
        cout<<"PLAYER-2 (O) turn; enter the number : ";
        b=num1;
        c ='O';
    }
    else{
        cout<< endl;
        cout<<"PLAYER-1 (X) turn; enter the number :  ";
        cin>>b;
        cin.get();
        c='X';
    }
     if(b==1 && num[0][0]=='1'){
        num[0][0]=c;
    }
    else if(b==2 && num[0][1]=='2'){
        num[0][1]=c;
    }
    else if(b==3 && num[0][2]=='3'){
        num[0][2]=c;
    }
    else if(b==4 && num[1][0]=='4'){
        num[1][0]=c;
    }
    else if(b==5 && num[1][1]=='5'){
        num[1][1]=c;
    }
    else if(b==6 && num[1][2]=='6'){
        num[1][2]=c;
    }
    else if(b==7 && num[2][0]=='7'){
        num[2][0]=c;
    }
    else if(b==8 && num[2][1]=='8'){
        num[2][1]=c;
    }
    else if(b==9 && num[2][2]=='9'){
        num[2][2]=c;
    }
    else {
        if(c=='X'){
        cout<<"Invalid move"<<endl;
        cin.ignore();
        continue;
        }
        else if(c=='O'){
            goto jump;

        }
    }
    a=win();
    if(a==1){
        break;
    }
    p++;
}
}
if(f==2){
while(a==0){
    board();
    p=p%2;
    if(p==0){
        cout<< endl;
        cout<<"PLAYER-2 (O) turn; enter the number : ";
        cin>>b;
        cin.get();
        c ='O';
    }
    else{
        cout<< endl;
        cout<<"PLAYER-1 (X) turn; enter the number :  ";
        cin>>b;
        cin.get();
        c='X';
    }
     if(b==1 && num[0][0]=='1'){
        num[0][0]=c;
    }
    else if(b==2 && num[0][1]=='2'){
        num[0][1]=c;
    }
    else if(b==3 && num[0][2]=='3'){
        num[0][2]=c;
    }
    else if(b==4 && num[1][0]=='4'){
        num[1][0]=c;
    }
    else if(b==5 && num[1][1]=='5'){
        num[1][1]=c;
    }
    else if(b==6 && num[1][2]=='6'){
        num[1][2]=c;
    }
    else if(b==7 && num[2][0]=='7'){
        num[2][0]=c;
    }
    else if(b==8 && num[2][1]=='8'){
        num[2][1]=c;
    }
    else if(b==9 && num[2][2]=='9'){
        num[2][2]=c;
    }
    else {
        cout<<"Invalid move"<<endl;
        cin.ignore();
        continue;
    }
    a=win();
    if(a==1){
        break;
    }
    p++;
}
}
board();
if(a==1){
    if(p!=0)
        cout<<"PLAYER - " <<p <<" win";
    else
        cout<<"PLAYER - " <<p+2 <<" win";
}
else{
    cout<<"DRAW GAME";
}
return 0;


}
