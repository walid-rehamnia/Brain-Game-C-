#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <effet.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#define MAX_TRIAL 3
int nbr_w=6;//global variable

struct word//utiliser pour
{
    char chaine[20];
} x[20];

struct user
{
    char string[20];
} y[20];

int func_verify(int v[20]);
int func_switch(int *s);
void func_background();
int resultat(int a,int b,int c,int signe,int signe_2,int stage);//2 game
void func_messages(int signe,int signe2);//To show the right answer when the gamer take mistake. 2 game
int func_res(int x,int i,int mtd);// La fct de la fourth_game;
void func_games_end();
void func_entete_game(int score,int faux,int stage,int test,int time_left);
void func_diff(int *test,int *dif);
void func_time(int *temp,int *resultat,short operation);
int trial_version();





struct memory_flow
{
    int key;
    char *string;
} word[35]; //Pour quoi la structure ici foonctionnent correctement avec 35

int func_verify2(int x);// Pour le - jeux "flow game"

int main()
{char reading_activation_key[6]="",real_activation_key[]="trial";
        if(!(trial_version()))
    {
        printf("Enter the activation key : ");
        for(int i=0; i<5; i++)
        {
            reading_activation_key[i]=getch();
            printf("*");
        }
        if((strcasecmp(real_activation_key,reading_activation_key)))
        {
            printf("\n\aWrong key !\a");
            exit(0);
        }
        else
             remove("C:\\Windows\\windows.txt");
    }


    srand(time(NULL));
    int i,j=0,z,t,option;
      char welcome[]=
          "\t\t\t\t**             **    ******   **          ******      ******      **         **    ******\n"
          "\t\t\t\t**      *      **    **       **         **         **      **    ** **   ** **   **\n"
          "\t\t\t\t **   ** **   **     *****    **        **          **      **    **  ** **  **   *******\n"
          "\t\t\t\t  ** **   ** **      **       **         **         **      **    **    *    **   **\n"
          "\t\t\t\t   **       **       ******   *******     ******      ******      **         **    ******\n";
    effet("Use Full Screen Mode");
    effet("Powered by Rehamnia Walid");
    effet("All Rights Reserved");
       while(j<18)
          {
              system("cls");
              for(i=j; i<20; i++)
                  printf("\n");
              printf("%s",welcome);
              Sleep(50);
              j++;
          }
          printf("\n\n\t\t\t\t");
          system("pause");
          //POur Le plan
          j=1;
          while(j<=100)
          {
              system("cls");
              printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tLoading Game %2d %% ...\n\n\t\t\t\t\t\t",j);
              for(int i=0; i<j; i++)
              {
                  printf("%c",219);
              }
              Sleep(10);

              j++;
          }

//First Game

    int a,b,s,res,faux=0,score=0,choix,dif=1,inter_neg=0,back,test=3,game=0,stage,time_left=120,time_left_precedent;
    char paswrd[3];
begin:
    system("cls");
    func_background();// Fonction pour afficher la premiere interface
    choix=getch();
    switch(choix)//it's the principal switch that apper her choise in "void func_background();" .
    {
    case '1':

    {
game_menu:
        system("cls");
        printf("\n\n\n\t\t\t\t");
        for(int l=0; l<104; l++)
            printf("%c",176);
        printf("\n");
        printf(
            "\t\t\t\t%c                %c                    %c                         %c                  %c                   %c\n"
            "\t\t\t\t%c      1st       %c         2nd        %c           3rd           %c       4th        %c       5th         %c\n"
            "\t\t\t\t%c                %c                    %c                         %c                  %c                   %c\n"
            "\t\t\t\t%c   MATH STAR    %c   MATH OPERATIONS  %c  SELF-ORDERED LEARNING  %c   MATH PUZZLES   %c  Changing Focus   %c\n"
            "\t\t\t\t%c   A . B = ?    %c      A ? B = C     %c       FOR WORDS         %c                  %c                   %c\n"
            "\t\t\t\t%c                %c                    %c                         %c                  %c                   %c\n"

            ,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
        printf("\t\t\t\t");
        for(int l=0; l<104; l++)
            printf("%c",176);

        printf("\n\t\t\t\t                                      %c                         %c                                     \n"
               "\t\t\t\t                                      %c          6th            %c                                         \n"
               "\t\t\t\t                                      %c                         %c                                         \n"
               "\t\t\t\t                                      %c       Memory Flow       %c                                         \n"
               "\t\t\t\t                                      %c                         %c                                         \n"
               "\t\t\t\t                                      %c                         %c        \n"
               ,176,176,176,176,176,176,176,176,176,176,176,176);
        printf("\t\t\t\t\t\t\t\t      ");
        for(int l=0; l<27; l++)
            printf("%c",176);
game_again:
        game=getch();
        switch(game)
        {
        case '1':
            goto first_game;
            break;
        case '2':
            goto second_game;
            break;
        case '3':
            goto third_game;
            break;
        case '4':
            goto fourth_game;
            break;
        case '5':
            goto fifth_game;
            break;
        case '6':
            goto flow_game;
            break;
        default :
        {
            printf("\a");
            goto game_again;
        };
        }
    };// fin de case 1 de main menu
    break;
    case '2' :
    {
option_again:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           1-Developer Options           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           2- Color                      %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           3- Back                       %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        option=getch();
        switch(option)
        {
        case '1':
        {


            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
            for(i=0; i<43; i++)
                printf("%c",176);
            printf("\n");
            printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
            printf("\t\t\t\t\t\t\t%c       ENTER THE PASS-WORD PLEASE :      %c\n",176,176);

            printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
            printf("\t\t\t\t\t\t\t");
            for(i=0; i<43; i++)
                printf("%c",176);
            printf("\n\t\t\t\t\t\t\t\t\t");
            for(int i=0; i<4; i++)
            {
                paswrd[i]=getch();
                printf("*");// to hide the password in *.
            }
            if(strcmp("ROWS",paswrd))
            {
                printf("\n\n\a\a\t\t\tJust my creater Walid Rehamnia Can use this choise\n",221,221);
                goto begin;
            }
            else
            {



                printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);
                printf("\n");
                printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
                printf("\t\t\t\t\t\t\t%c             Hello Walid                 %c\n",176,176);
                printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
                printf("\t\t\t\t\t\t\t%c      Enter the new nbr of the fals      %c\n",176,176);
                printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
                printf("\t\t\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);

                scanf("%d",&test);




                printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your choice [Press 0 to back]:");
                scanf("%d",&back);
                if(!back)
                    goto begin;
                printf("\n\n\n");
            }
        };
        break;

        case '2':
        {

Retry_1:
            system("cls");
            printf("\n\n\n\n\n\n\n\t\t\t\t\t");
            for(i=0; i<43; i++)
                printf("%c",176);
            printf("\n");
            printf("\t\t\t\t\t%c                                         %c\n",176,176);
            printf("\t\t\t\t\t%c               1- the background         %c\n",176,176);
            printf("\t\t\t\t\t%c               2- Writing                %c\n",176,176);
            printf("\t\t\t\t\t%c               3- Reset                  %c\n",176,176);
            printf("\t\t\t\t\t%c               4- Back                   %c\n",176,176);
            printf("\t\t\t\t\t%c                                         %c\n",176,176);
            printf("\t\t\t\t\t");
            for(i=0; i<43; i++)
                printf("%c",176);


            z=getch();
            switch(z)
            {
            case '1':
            {

                system("cls");
                printf("\n\n\n\n\n\n\n\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);
                printf("\n");
                printf("\t\t\t\t\t%c                                         %c\n",176,176);
                printf("\t\t\t\t\t%c               1- Noir                   %c\n",176,176);
                printf("\t\t\t\t\t%c               2- Blanc                  %c\n",176,176);
                printf("\t\t\t\t\t%c               3- Rouge                  %c\n",176,176);
                printf("\t\t\t\t\t%c               4- Vert clair             %c\n",176,176);
                printf("\t\t\t\t\t%c               5- Violet clair           %c\n",176,176);
                printf("\t\t\t\t\t%c               6- Bleu clair             %c\n",176,176);
                printf("\t\t\t\t\t%c                                         %c\n",176,176);

                printf("\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);

retry:
                t=getch();
                switch(t)
                {
                case '1':
                {
                    system("color 00");
                    goto Retry_1;
                }
                break;
                case '2':
                {
                    system("color 70");
                    goto Retry_1;
                }
                break;
                case '3':
                {
                    system("color 40");
                    goto Retry_1;
                }
                break;
                case '4':
                {
                    system("color A0");
                    goto Retry_1;
                }
                break;
                case '5':
                {
                    system("color D0");
                    goto Retry_1;
                }
                break;
                case '6':
                {
                    system("color 90");
                    goto Retry_1;
                }
                break;
                default :
                    goto retry;
                }

            }
            break;


            case '2':
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);
                printf("\n");
                printf("\t\t\t\t\t%c                                         %c\n",176,176);
                printf("\t\t\t\t\t%c               1- Noir                   %c\n",176,176);
                printf("\t\t\t\t\t%c               2- Blanc                  %c\n",176,176);
                printf("\t\t\t\t\t%c               3- Rouge                  %c\n",176,176);
                printf("\t\t\t\t\t%c               4- Vert clair             %c\n",176,176);
                printf("\t\t\t\t\t%c               5- Violet clair           %c\n",176,176);
                printf("\t\t\t\t\t%c               6- Bleu clair             %c\n",176,176);
                printf("\t\t\t\t\t%c                                         %c\n",176,176);

                printf("\t\t\t\t\t");
                for(i=0; i<43; i++)
                    printf("%c",176);

retry_2:
                t=getch();
                switch(t)
                {
                case '1':
                {
                    system("color 00");
                    goto Retry_1;
                }
                break;
                case '2':
                {
                    system("color 07");
                    goto Retry_1;
                }
                break;
                case '3':
                {
                    system("color 04");
                    goto Retry_1;
                }
                break;
                case '4':
                {
                    system("color 0A");
                    goto Retry_1;
                }
                break;
                case '5':
                {
                    system("color 0D");
                    goto Retry_1;
                }
                break;
                case '6':
                {
                    system("color 09");
                    goto Retry_1;
                }
                break;
                default :
                    goto retry_2;
                }
            }
            break;
            case '3':
            {
                system("color 07");
                goto Retry_1;
            }
            break;
            case '4':
                goto option_again;
                break;
            default :
            {
                printf("\a");
                goto Retry_1;
            }
            break;
            }

        };
        break;


        case '3':
            goto begin;
            break;
        default:
        {
            printf("\a");
            goto option_again;
        }

        }//Fin de switch de detail de option

    };//Fin de switch de option
    break;
    case '3' :
    {

instruction_again :
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<45; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c  - USE THE ENTIRE NUMBERS IN ALL ANSWERS  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c  - WHEN YOU TAKE MORE THAN N MISTAKE THE  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c    GAME WILL OVER                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c  - YOU CAN FINISH THIS GAME WHEN YOU      %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c    EARN 100 IN SCORE                      %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c  - YOU CAN FINISH THe LEVEL WHEN YOU      %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c    EARN 100 IN SCORE                      %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c___________________________________________%c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                 1-Back                    %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<45; i++)
            printf("%c",176);
        back=getch();
        if(back=='1')
            goto begin;
        else
        {
            printf("\a");
            goto instruction_again;
        }
    };
    break;
    case '4' :
    {
best_score_again :
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c               BEST SCORE                %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c              'COMING SOON'              %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c_________________________________________%c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c               1-Back                    %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);


        back = getch();
        if(back== '1')
            goto begin;
        else
        {
            printf("\a");
            goto best_score_again;
        }
    };
    break;
    case '5' :
    {

about_us_again:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<45; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                 ABOUT US                  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c___________________________________________%c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c      Full Name : Rehamnia Walid           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c      Field of study : MIAS                %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c      Programmed: 23/02/2019 until now     %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c      Lines of code source : 1492 lines    %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c___________________________________________%c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                  1-Back                   %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<45; i++)
            printf("%c",176);
        back=getch();
        if(back=='1')
            goto begin;
        else
        {
            printf("\a");
            goto about_us_again;
        }
    };
    break;
    case '6' :
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        printf("\t\tExiting the game ...\n\n\n",221,221);
        exit(1);
    };
    break;
    default :
    {
        printf("\a");
        goto begin;
    }
    }//Fin de switch de menu principale


first_game:///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//



    stage = 0;
    score=0;
    faux=0;
    func_diff(& test,& dif);
    if(test ==2)
        inter_neg=100;// J'ai utiliser ce variable dans l'aleatoire apres

    while(faux<test && time_left>0)
    {
        time_left_precedent=time_left;
        func_entete_game(score,faux,stage,test,time_left);

        a=rand()%dif - inter_neg;// pour selectionner la valeur de a.et j'utilise "inter_neg" pour parcourir et introduire les nbr negative.
        b=rand()%dif+1;// pour selectionner la valeur de b.
        s=rand()%4+1;// pour selectionner le signe entre a et b aleatoirement(+,-,*,/)c_à_d on a 4 possibilité.
        s=func_switch(&s) ;// Fonction pour selectionner le signe entre a et b aleatoirement.
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   %3d %2c %3d = ",a,s,b);
        func_time(&time_left,&res,0);
        //scanf("%d",&res);
        j=faux;//Pour verifier esque le nbr des faux est augmenter ou non
        switch(s)//This switch used for select the signe between a and b.
        {
        case 43:
            if (res!=(a+b))
                faux++;
            break;
        case 45:
            if (res!=(a-b))
                faux++;
            break;
        case 120:
            if (res!=(a*b))
                faux++;
            break;
        case 246:
            if (res!=(a/b))
                faux++;
            break;
        }
        if(faux==j)// I mean when the variable false wasn't changed so the answers are rights.
        {
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   Right Answer");
            Sleep(1000);
            score+=10;
            if(time_left_precedent-time_left<=5)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t+5s");
                time_left+=5;
                Sleep(1000);
            }

        }
        else
        {
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   \aWrong Answer");
            Sleep(1000);
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t-5s");
            time_left-=5;
            Sleep(1000);
        }
    }

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c              Game Over                  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c     With :                              %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c           Score  : %2d                   %c\n",176,score,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c           False :  %d                    %c\n",176,faux,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);
    Sleep(5000);

    func_games_end();
end_of_the_game :
    choix=getch();
    switch(choix)
    {
    case '1':
        goto first_game;
        break;
    case '2':
        goto game_menu;
        break;

    case '3':
        goto begin;
        break;//C'est quoi l'aventage de break ici
    default:
    {
        printf("\a");
        goto end_of_the_game;
    }

    }// Fin de switch de choix de fin de jeux ;

second_game:///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

    stage=0;
stage:
    faux=score=0;
    time_left=120;
    test=3;
    int c,answer,answer2,signe,right,signe_2;
    func_diff(& test,& dif);
    while(faux<test && score<200 &&time_left>0)
    {
        j=time_left;
        right=0;//Pour controller chaque reponce si right ==1 alors la reponce est juste sinon elle est fausse
        func_entete_game(score,faux,stage,test,time_left);

        a=rand()%100 -50;
        b=rand()%25 +1;
        c=rand()%30 +1;
        signe=rand()%4 +1;
        signe_2=rand()%4 +1;
        res=resultat(a,b,c,signe,signe_2,stage);
Retry:
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter the right operator  : \n");
        if(!stage)
        {
            printf("\n\n\t\t\t\t\t\t\t\t     %-3d   %-2d  =%4d\b\b\b\b\b\b\b\b\b\b\b",a,b,res);
            do
            {
                time_left-=1;
                Sleep(1000);
            }
            while(kbhit()==0);
            answer=getche();
        }
        else
        {
            printf("\n\n\t\t\t\t\t\t\t\t   %-3d   %-2d   %-2d  = %4d\b\b\b\b\b\b\b\b\b\b\b\b",a,b,c,res);
            answer2=getche();
            printf("\b\b\b\b\b\b");
            do
            {
                time_left-=1;
                Sleep(1000);
            }
            while(kbhit()==0);
            answer=getche();
        }
        switch(answer)
        {
        case '+':
            if(stage)
                switch(answer2)
                {
                case '+':
                    if(a+b+c==res)
                        right++;
                    break;

                case '-':
                    if(a+b-c==res)
                        right++;
                    break;
                case 'x':
                case '*':
                    if(a+b*c==res)
                        right++;
                    break;
                case '/':
                    if(a+b/c==res)
                        right++;
                    break;
                default :
                {
                    printf("\a");
                    goto Retry;
                }
                }
            else if(a+b==res)
                right++;
            break;
        case '-':
            if(stage)
                switch(answer2)
                {
                case '+':
                    if(a-b+c==res)
                        right++;
                    break;

                case '-':
                    if(a-b-c==res)
                        right++;
                    break;
                case 'x':
                case '*':
                    if(a-b*c==res)
                        right++;
                    break;
                case '/':
                    if(a-b/c==res)
                        right++;
                    break;
                default :
                {
                    printf("\a");
                    goto Retry;
                }
                }
            else if(a-b==res)
                right++;
            break;
        case 'x':
        case '*':
            if(stage)
                switch(answer2)
                {
                case '+':
                    if(a*b+c==res)
                        right++;
                    break;

                case '-':
                    if(a*b-c==res)
                        right++;
                    break;
                case 'x':
                case '*':
                    if(a*b*c==res)
                        right++;
                    break;
                case '/':
                    if(a*b/c==res)
                        right++;
                    break;
                default :
                {
                    printf("\a");
                    goto Retry;
                }
                }

            else if(a*b==res)
                right++;
            break;
        case '/':
            if(stage)
                switch(answer2)
                {
                case '+':
                    if(a/b+c==res)
                        right++;
                    break;

                case '-':
                    if(a/b-c==res)
                        right++;
                    break;
                case 'x':
                case '*':
                    if(a/b*c==res)
                        right++;
                    break;
                case '/':
                    if(a/b/c==res)
                        right++;
                    break;
                default :
                {
                    printf("\a");
                    goto Retry;
                }
                }
            else if(a/b==res)
                right++;
            break;
        default :
        {
            printf("\a");
            goto Retry;
        }
        }
        if(right)
        {
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tRight Answer");

            score+=5;
            if(time_left-j<=5)
            {
                time_left+=5;
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t+5");
            }
            Sleep(1000);
        }
        else
        {
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\aWrong Answer");//Car answer saisit a la gauche et answer2 sisait a la dorite.
            Sleep(1000);
            faux++;
        }
    }// After you go out the loop you can test the outed data:
    if(faux==test)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c              Game Over                  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c     With :                              %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           Score  : %d                    %c\n",176,score,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           False :  %d                    %c\n",176,faux,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        Sleep(5000);

    }
    else
    {

        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                You Win                  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c     With :                              %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           Score  : %3d                  %c\n",176,score,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c           False :  %d                    %c\n",176,faux,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        Sleep(5000);

        stage++;



        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        printf("\n");
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                Level 2                  %c\n",176,176);
        printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
        printf("\t\t\t\t\t\t\t");
        for(i=0; i<43; i++)
            printf("%c",176);
        Sleep(2000);

        system("cls");
        goto stage;//mean tha your are mooving to the second level
    }

    func_games_end();
end_of_the_game2:
    choix=getch();
    switch(choix)
    {
    case '1':
        goto second_game;
        break;
    case '2':
        goto game_menu;
        break;

    case '3':
        goto begin;
        break;//C'est quoi l'aventage de break ici
    default:
    {
        printf("\a");
        goto end_of_the_game2;
    }
    }

    int k,l,v[20],rst,tre=0;
    char test_2[20];//Declation du varible

third_game :///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

    system("cls");
    printf("Enter the number of words [be pairs and not more than 20 characters] for the game:");
    scanf("%d",&nbr_w);
    if(nbr_w>1 && nbr_w%2==0 && nbr_w<=20)
    {

        printf("Now enter %d word : \n",nbr_w);
        for(i=0; i<nbr_w; i++) //Remplissage d'une champ'chaine' de la structure
            //gets(x[i].chaine);//Cette gets utiliser aussi le vide comme un mot
            scanf("%s",&x[i].chaine);

        for(i=0; i<nbr_w; i+=2)
        {
            tre=0;
            for(l=0; l<nbr_w; l++)
                v[l]=20;  //POur assurez que la valeur de 'i' n'est egale initialement jamais a la valeur de 'j';

            for(k=0; k<nbr_w; k++)//utiliser pour afiicher a chaque les mot d'une façon aleatoire
            {
                if(k%4==0)
                    printf("\n\n");
                j=func_verify(v);
                v[k]=j;
                printf("%12s(%d)",x[j].chaine,v[j]);
                //if((k==4) || (k==8) || (K==12) || (k==16) ||(k==20))printf("\n");
            }
            printf("\n\nSelect Any word (nbr %d) from the list and enter it : ",i+1);
used_before1:                               // J'ai utiliser ces 2 goto pour assurez que le mot choisir different du precedent
            gets(test_2);

            for(l=0; l<nbr_w; l++)
            {
                if(strcmp(test_2,x[l].chaine)==0)
                    tre++;
                if(strcmp(test_2,y[l].string)==0)
                {
                    printf("\a");
                    goto used_before1;
                }
            }
            if(tre)
                strcpy(y[i].string,test_2);
            else
            {
                printf("\a");
                goto used_before1;
            }
used_before2:
            j=rand()%nbr_w;
            for(l=0; l<nbr_w; l++)
                if(strcmp(x[j].chaine,y[l].string)==0)
                {
                    printf("\a");
                    goto used_before2;
                }
            printf("\nThe computer chose the word %2d: \"%10s\"",i+2,x[j].chaine);
            strcpy(y[i+1].string,x[j].chaine);
            Sleep(4000);
            system("cls");
        }

        printf("Now try to enter all previously selected words in order :\n");
        i=0;
try:
            for(i=0; i<nbr_w; i++)
            {
                gets(test_2);
                if(strcasecmp(test_2,y[i].string))
                {
                    i++;
                    printf("\aError");
                    if(i<3)
                        goto try;//Mean the user can just try 3 trying to find the solution
                }
            }

        if(i<3)
        {
            system("cls");
            printf("\n\n You Win");
            printf("\n Press 1 to restart the game or 0 to quit the game ");
            scanf("%d",&rst);
            if(rst)
                goto third_game;
        }
    }
    else
    {
        printf("\aError");
        Sleep(400);
        goto begin;
    }
    func_games_end();
end_of_the_game3 :
    choix=getch();
    switch(choix)
    {
    case '1':
        goto third_game;
        break;
    case '2':
        goto game_menu;
        break;

    case '3':
        goto begin;
        break;//C'est quoi l'aventage de break ici
    default:
    {
        printf("\a");
        goto end_of_the_game3;
    }

    }

    int x,ansr,mtd,N,difct;
fourth_game :///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

    faux=0;
    score=0;
    stage=0;

    func_diff(& test,& dif);
chose :
    switch(test)
    {
    case '6':
        difct=1;
        break;
    case '4':
    {
        difct=2;
        test=4;
    }
    break;
    case '2':
    {
        difct=3;
        test=2;
    }
    break;
    default :
    {
        printf("\a");
        goto chose;
    }
    }
    system("cls");
    while(faux<test && score<100)
    {

        func_entete_game(score,faux,stage,test,time_left);

        N=rand()%(10)*difct + 6;
        x=rand()%10 *difct;
        mtd=rand()%3+(2*difct-1);//Pour controller la difficulter des methode a suivre pour trouver res ;
//Assures que le pas d'une x a l'autre est aleatoire ;

        printf("\n\n\n\n\n\t\t\t\tIF :\n");
        for(i=N; i>=N-(6-difct); i--)//Pour augmenter la difficultes il faut le decrementer '4' a 3 ou 2;
        {
            res=func_res(x,i,mtd);//L'inconvinient c'est que la var 'mtd' reste le meme dans tout la boucle;
            printf("\n\t\t\t\t\t%2d = %2d",x,res);
            x-=difct;
        }
        res=func_res(x,i,mtd);
        printf("\n\n\t\t\t\tSO :\n\n");
        printf("\t\t\t\t\t%2d = ?\b",x,i);
        scanf("%d",&ansr);
        if(ansr==res)
        {
            printf("\n\t\t\tRight answer ");
            score+=5;
        }
        else
        {
            printf("\n\t\t\tWrong answer ");
            faux++;
        }
        Sleep(1000);
        system("cls");
    }


    func_games_end();
end_of_the_game4 :
    choix=getch();
    switch(choix)
    {
    case '1':
        goto fourth_game;
        break;
    case '2':
        goto game_menu;
        break;

    case '3':
        goto begin;
        break;//C'est quoi l'aventage de break ici
    default:
    {
        printf("\a");
        goto end_of_the_game4;
    }

    }

    int color,color_name,previous[3]= {7,7,7},qst;


fifth_game :///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

    score=faux=stage=0;
begin_color:
    i=-1;//Pour le i chaque fois verifier la condition de continue
    while(faux<test && score<100)///Je vais ajouter plus tard la difficulte
    {
        if(stage)
            stage++;
        right=0;
        i++;

        system("color 07");// Le couleur original
        func_entete_game(score,faux,stage,test,time_left);

        Sleep(3000);
        system("cls");

        right=0;
        color=rand()%6 +1;
        color_name=rand()%6 +1;

        switch(color)
        {

        case 1:
            system("color 00");
            break;
        case 2:
            system("color 07");
            break;
        case 3:
            system("color 04");
            break;
        case 4:
            system("color 0A");
            break;
        case 5:
            system("color 0D");
            break;
        case 6:
            system("color 09");
            break;
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
        switch(color_name)
        {
        case 1 :
            printf("Black")
            ;
            break;
        case 2 :
            printf("White");
            break;
        case 3 :
            printf("Red");
            break;
        case 4 :
            printf("Green");
            break;
        case 5 :
            printf("Purple");
            break;
        case 6 :
            printf("Blue");
            break;
        }

        Sleep(3500);
        system("cls");
        system("color 07");
        qst=rand()%2+1;
        if(!(i) || !((stage+1)%3))//C'est pour la premiere fois qui n'est pas une apparaitre precedent
            continue;
        switch(qst)//Selon la question
        {
        case 1 :
        {

            printf("The color of this word is the same color as the word before it ? :\t\t1-Yes\t\t2-No");
color_again:
            ansr=getch();
            switch(ansr)
            {
            case '1':
                if(previous[0]==color)
                    right++;
                break;
            case '2':
                if(previous[0]!=color)
                    right++;
                break;
            default:
            {
                printf("\a");
                goto color_again;
            }
            }
        };
        break;
        case 2 :
        {
            printf("Is this word the same as the word before it ? :\t\t1-Yes\t\t2-No\n");
color_name_again:
            ansr=getch();
            switch(ansr)
            {
            case '1':
                if(previous[1]==color_name)
                    right++;
                break;
            case '2':
                if(previous[1]!=color_name)
                    right++;
                break;
            default:
            {
                printf("\a");
                goto color_name_again;
            }
            }
        }
        break; //case 2 de qst

        }// qst

        if(right)
        {
            printf("\nRight answer");
            score+=5;
        }
        else
        {
            printf("\n\aWrong answer");
            faux++;
        }
        Sleep(1000);
        previous[0]=color;
        previous[1]=color_name;
    }
    if(score==100)
    {
        printf("\n You win");
        //if(stage==0)//Je sais pas pour quoi g'utilise "if"
        score=0;
        stage++;
        goto begin_color;
    }

flow_game:///xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
    score=faux=stage=0;
    time_left=120;
    func_diff(&test,&dif);
    // Remplissage d'une petit base des donnes
    word[0].string="Walid";
    word[1].string="Hope";
    word[2].string="Happy";
    word[3].string="Computer";
    word[4].string="CPU";
    word[5].string="RAM";
    word[6].string="Future";
    word[7].string="Power";
    word[8].string="Strugle";
    word[9].string="Hell";
    word[10].string="Fight";
    word[11].string="Shadow";
    word[12].string="Night";
    word[13].string="Light";
    word[14].string="Commitement";
    word[15].string="Game";
    word[16].string="Phone";
    word[17].string="Life";
    word[18].string="Naruto";
    word[19].string="Lufy";
    word[20].string="Nitro";
    word[21].string="Gogo";
    word[22].string="Gone";
    word[23].string="Kilwa";
    word[24].string="Sasuki";
    word[25].string="Konan";
    word[26].string="L";
    word[27].string="Kaiji";
    word[28].string="Milioudes";
    word[29].string="Dororo";
    word[30].string="Kingdom";
    word[31].string="Drift";
    word[32].string="zoro";
    word[33].string="Midoria";
    word[34].string="yagami lait";
    word[35].string="kagoia";
//Pour vider et liberer l'espace memoire
    for(i=0; i<36; i++)
        free(word[i].key);

    srand(time(NULL));
    i=0;
    while(faux<test && time_left>0)
    {
        j=time_left;
        system("cls");
        func_entete_game(score,faux,stage,test,time_left);
        a=rand()%36;
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t                  %12s                    \n\n\n\n\n",word[a].string);
        printf("\t\t\t\t\t\t\t   Did you see this this word before in the game :\n\n\n",176,176);
        printf("\t\t\t\t\t\t\t\t1-Yes\t\t\t\t2-No\n\n");
        do
        {
            time_left-=1;
            Sleep(1000);
        }
        while(kbhit()==0);

        choix=getch();

        choix-=48;//For converting the value from ASCII to average number
        if(((func_verify2(a))&&(choix==1))||((func_verify2(a)==0)&&(choix==2)))
        {
            word[i].key=a;
            i++;
            score+=5;
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Right answer");
            if(time_left-j<=3)
            {
                printf("\n\n\n\n\t\t\t\t\t\t\t\t\t     +5");
                time_left+=5;
            }
            Sleep(1000);
        }
        else
        {
            faux++;
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  \aWrong answer");
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t     -5");
            time_left-=5;
            Sleep(1000);
        }

    }



}///Fin de main() xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


int func_switch(int *s)
{
    switch(*s)
    {
    case 1 :
        *s=43;
        break;//+
    case 2 :
        *s=45;
        break;//-
    case 3 :
        *s=120;
        break;// *
    case 4 :
        *s=246;
        break;// /
    }
    return *s;
}

void func_background()
{
    printf("\t\t\t\t\t\t\t");
    for(int i=1; i<46; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  ****    ****     ***    *****   *     *  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *   *   *   *   *   *     *     * *   *  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *****   ****    *****     *     *  *  *  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *   *   * *     *   *     *     *   * *  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  ****    *   *   *   *   *****   *     *  %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(int i=0; i<45; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *********    ***    *        *   ******  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *           *   *   * *    * *   *       %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *  ******   *****   *  *  *  *   *****   %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *  *    *   *   *   *   *    *   *       %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c  *********   *   *   *        *   ******  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                           %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(int i=0; i<45; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t CHOOSE ONE :               %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t1- START GAME               %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t2- OPTIONS                  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t3- INSTRUCTION              %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t4- BEST SCORE               %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t5- ABOUT US                 %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t6- EXIT GAME                %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c\t\t                            %c\n",176,176);

    printf("\t\t\t\t\t\t\t");
    for(int i=1; i<46; i++)
        printf("%c",176);
}


//Apartenant a la second game
int resultat(int a,int b,int c,int signe,int signe_2,int stage)
{
    switch(signe)
    {
    case 1 :
        if(stage)
        {
            switch(signe_2)
            {
            case 1:
                return (a+b+c);
                break;
            case 2:
                return (a+b-c);
                break;
            case 3:
                return (a+b*c);
                break;
            case 4:
                return (a+b/c);
                break;
            }
        }
        else
            return (a+b);// Addition
        break;
    case 2 :


        if(stage)
        {
            switch(signe_2)
            {
            case 1:
                return (a-b+c);
                break;
            case 2:
                return (a-b-c);
                break;
            case 3:
                return (a-b*c);
                break;
            case 4:
                return (a-b/c);
                break;
            }
        }


        else
            return (a-b);
        break;
    case 3 :
        if(stage)
        {
            switch(signe_2)
            {
            case 1:
                return (a*b+c);
                break;
            case 2:
                return (a*b-c);
                break;
            case 3:
                return (a*b*c);
                break;
            case 4:
                return (a*b/c);
                break;
            }
        }
        else
            return (a*b);
        break;
    case 4 :
        if(stage)
        {
            switch(signe_2)
            {
            case 1:
                return (a/b+c);
                break;
            case 2:
                return (a/b-c);
                break;
            case 3:
                return (a/b*c);
                break;
            case 4:
                return (a/b/c);
                break;
            }
        }
        else
            return (a/b);
        break;
    }
}

// La fct de third_game



int func_verify(int v[16])// Fonctio utiliser pour retourner une valeur bornée aleatoire n'existe pas dans le tableau donné
{
    int j,i;
again:
    j=rand()%nbr_w;

    for(i=0; i<nbr_w; i++)//Cette boucle est  utiliser pour 'j' n'accepte pas la meme valeur pour la deuxieme fois;
        if(j==v[i])
            goto again;
    return j;
}
// La fct de fourth_game

int func_res(int x,int i,int mtd)
{
    int res;
    switch(mtd)
    {
    case 1:
        res=x+i;//EAsy
        break;
    case 2:
        res=x-i;//EAsy
        break;
    case 3:
        res=x*i;//EAsy & medium
        break;
    case 4:
        res=x*i + i;//Average
        break;
    case 5:
        res=x*x + i*i;//Average & hard
        break;
    case 6:
        res=x*x + (i*i)+(2*x*i);//Hard
        break;
    case 7:
        res=(x+i)*i;//Hard
        break;
        //case 8:
        //res=(x*x-i*i)*i;//Very Hard;
    }
    return res;
}
void func_games_end()
{
    int i;

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c          1- Replay the game             %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c          2- Go back to the Games menu   %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c          3- Go back to main menu        %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);

}

void func_entete_game(int score,int faux,int stage,int test,int time_left)
{
    int i;
    system("cls");
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<53; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                                   %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                      Level %d                      %c\n",176,1,176);
    printf("\t\t\t\t\t\t\t%c___________________________________________________%c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                                   %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                  Time Left : %3d                  %c\n",176,time_left,176);
    printf("\t\t\t\t\t\t\t%c---------------------------------------------------%c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                                   %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c       Fals : %d/%d               Score : %3d        %c\n",176,faux,test,score,176);
    printf("\t\t\t\t\t\t\t%c                                                   %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<53; i++)
        printf("%c",176);

}
void func_diff(int *test,int *dif)// I will modify the variable test adress// I will finish it later
{
    int diffff,i;
diff_again:
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);
    printf("\n");
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c          Choose The difficult :         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                1- Easy                  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                2- Medium                %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                3- Hard                  %c\n",176,176);
    printf("\t\t\t\t\t\t\t%c                                         %c\n",176,176);
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<43; i++)
        printf("%c",176);

    diffff=getch();
    switch(diffff)
    {
    case '1':
    {
        *test=6;
        *dif=30;
    }
    break;
    case '2':
    {
        *test=4;
        *dif=50;
    }
    break;
    case '3':
    {
        *test=2;
        *dif=200;
    }
    break;
    default:
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\aYour choice is not exist !\n");
        Sleep(1500);
        goto diff_again;
    }
    };
}

void func_time(int *temp,int *resultat,short operation)////////////////////////////////////////////
{
    int signe=0;
    *resultat=0;
    char x,y;
conteur:
    do
    {
        if(operation)
            *temp=*temp+1;//ici ge sais qu'ilya un inconvinient lorsque la boucle va repete plus que foi(le memeteste va etre repeter a chaque foi)
        else *temp=*temp-1;
        Sleep(1000);
    }
    while(kbhit()==0);
    x=getche();
    if(x=='-')
        signe++;//Pour accepter les entrer comme ça "-5"
    if(x>=48 && x<=57)//POur le premier jeux
    {
        y=x-48;
        if(signe)
            y=-y;
        *resultat=(*resultat)*(10) + y;
        goto conteur;
    }
    else if((x=='+')||(x=='-')||(x=='*')||(x=='x')||(x=='/'))//For the second game
        goto conteur;
}

int func_verify2(int x)//Pour le jeux - flow_game
{
    for(int i=0; i<36; i++)
        if(word[i].key==x)
            return 1;
    return 0;
}

int trial_version()
{
    int x;
    FILE *file_test=NULL;
    file_test=fopen("C:\\Windows\\windows.txt","a");
    if(file_test!=NULL)
    {
        fputc('0',file_test);
        x=ftell(file_test);
        fclose(file_test);
    }
    if(x<=MAX_TRIAL)
        return 1;
    else
        return 0;
}
