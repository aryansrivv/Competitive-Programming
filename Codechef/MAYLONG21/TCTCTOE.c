#include <stdio.h>
int main ()
{
    int t ; scanf ("%d",&t);
    while(t--)
    {
        int x=0,o=0,mt=0,Sx=0,So=0,Dx=0,Do=0,i; 
        char a[3], b[3] , c[3]; 
        scanf ("%s\n%s\n%s\n", &a,&b ,&c ) ;
        for (i=0 ; i <3 ;i++)
        {
            if (a[i]=='X'){x++;}
            else if (a[i]=='O'){o++;}
            else if (a[i]=='_'){mt++;}
            if (b[i]=='X'){x++;}
            else if (b[i]=='O'){o++;}
            else if (b[i]=='_'){mt++;}
            if (c[i]=='X'){x++;}
            else if (c[i]=='O'){o++;}
            else if (c[i]=='_'){mt++;}
        }
        if (a[0]==a[1] && a[1] == a[2])
        {
            if (a[1]=='X'){Sx++;}
            else if (a[1]=='O'){So++;}
        }
        if (b[0]==b[1] && b[1]==b[2])
        {
            if (b[1]=='X'){Sx++;}
            else if (b[1]=='O'){So++;}
        }
        if (c[0]==c[1] && c[1]==c[2])
        {
            if (c[1]=='X'){Sx++;}
            else if (c[1]=='O'){So++;}
        }
        if (a[0]==b[0] && b[0] == c[0])
        {
            if (a[0]=='X'){Sx++;}
            else if (a[0]=='O'){So++;}
        }
        if (a[1]==b[1] && b[1] == c[1])
        {
            if (a[1]=='X'){Sx++;}
            else if (a[1]=='O'){So++;}
        }
        if (a[2]==b[2] && b[2] == c[2])
        {
            if (a[2]=='X'){Sx++;}
            else if (a[2]=='O'){So++;}
        }
        if (a[0]==b[1] && b[1]==c[2])
        {
            if (a[0]=='X'){Dx++;}
            else if (a[0]=='O'){Do++;}
        }
        if (a[2]==b[1] && b[1]==c[0])
        {
            if (a[2]=='X'){Dx++;}
            else if (a[2]=='O'){Do++;}
        }
        
        if (mt==9){printf("2\n");}
        else if (mt==8){if (x==1){printf("2\n");}else {printf("3\n");}}
        else if (mt==7){if (x==1&&o==1){printf("2\n");}else {printf("3\n");}}
        else if (mt==6){if (x==2&&o==1){printf("2\n");}else {printf("3\n");}}
        else if (mt==5){if (x==2&&o==2){printf("2\n");}else {printf("3\n");}}
        else if (mt==4)
        {
            if (x==3&&o==2)
            {
                if (Sx==1||Dx==1){printf("1\n");}
                else {printf("2\n");}
            }
            else {printf("3\n");}
        }
        else if (mt==3)
        {
            if (x==3&&o==3)
            {
                if (So+Do==1&&Sx+Dx==0){printf("1\n");}
                else if (So+Do==0&&Sx+Dx==0){printf("2\n");}
                else {printf("3\n");}
            }
            else {printf("3\n");}
        }
        else if (mt==2)
        {
            if (x==4&&o==3)
            {
                if (Sx+Dx > 0&&So+Do==0){printf("1\n");}
                else if (So+Do==0&&Sx+Dx==0){printf("2\n");}
                else {printf("3\n");}
            }
            else {printf("3\n");}
        }
        else if (mt==1)
        {
            if (x==4&&o==4)
            {
                if (So+Do>0 && Sx+Dx==0){printf ("1\n");}
                else if (So+Do==0 && Sx+Dx==0){printf("2\n");}
                else {printf("3\n");}
            }
            else {printf("3\n");}
        }
        else if (mt==0)
        {
            if (x==5&&o==4)
            {
                if (Sx+Dx>=0 && So+Do==0){printf("1\n");}
                else {printf("3\n");}
            }
            else {printf("3\n");}
        }
        else {printf("3\n");}
    }
    return 0 ; 
}