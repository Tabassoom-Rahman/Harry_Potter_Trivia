/*
   Project Name: HARRY POTTER TRIVIA

   Group Member's Name ---- ID
   Tabassoom Rahman ------- 2011062642
   Farhana Akbar ---------- 2012482642

*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void delay();
void main_menu();
void start_game();
void potterhead_book_easy();
void potterhead_book_medium();
void potterhead_book_hard();
void potterhead_movie_easy();
void potterhead_movie_medium();
void potterhead_movie_hard();
void nonpotterhead_book_easy();
void nonpotterhead_book_medium();
void nonpotterhead_book_hard();
void nonpotterhead_movie_easy();
void nonpotterhead_movie_medium();
void nonpotterhead_movie_hard();
void marathon();
void help();
void edit_score(int, char[]);
void reset_score();
void show_score_record();

    char option;
    char player_name[30];
int main()
{
        system("cls");
        printf("\n\n\t\t\tWelcome to HARRY POTTER TRIVIA");
        printf("\n\n\n");
        printf("\n\t\t\t\t             *");
        printf("\n\t\t\t\t            *");
        printf("\n\t\t\t\t     *     *");
        printf("\n\t\t\t\t    * *   *");
        printf("\n\t\t\t\t   *   * *");
        printf("\n\t\t\t\t  *     *");
        printf("\n\t\t\t\t *");
        printf("\n\t\t\t\t*");
        printf("\n\n\n");
        printf("\t\t\tPress any key to open the main menu.");
        getch();
        main_menu();
    }

void main_menu(){
        system("cls");
        printf("\n\n\n\n\n\n\n");
        printf("\n\t\t   # Press \"S\" to start the game.");
        printf("\n\t\t   # Press \"V\" to view the highest score.");
        printf("\n\t\t   # Press \"R\" to reset score.");
        printf("\n\t\t   # Press \"H\" for help.");
        printf("\n\t\t   # Press \"Q\" for quit.");
        option = toupper(getch());
        if(option=='S')
            start_game();
        else if(option=='V'){
            show_score_record();
            main_menu();
        }
        else if(option=='R'){
            reset_score();
            main_menu();
        }
        else if(option=='H'){
            help();
            main_menu();
        }
        else if(option=='Q')
            exit(0);
}
void start_game(){
    system("cls");
               printf("\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:\n\n\t\t\t");
               gets(player_name);
               printf("\n\n\t...........WELCOME %s to HARRY POTTER TRIVIA............",player_name);
               delay();
               system("cls");
               printf("\n\n\n\t\t\t     HARRY POTTER TRIVIA");
               printf("\n\n\t    Potterhead \t\t\t\t     Non_Potterhead");
               printf("\n\n     Book    \t\tMovie    \t\tBook   \t\t Movie");
               printf("\n\n     A.EASY  \t\tD.EASY   \t\tG.EASY \t\t J.EASY");
               printf("\n     B.Medium \t\tE.Medium  \t\tH.Medium  \t K.Medium");
               printf("\n     C.Hard   \t\tF.Hard    \t\tI.Hard   \t L.Hard");
               printf("\n\t\t               M.MARATHON ROUND");
               printf("\n\n\nPress the respective alphabetic option of the type you want to play.");

                option=toupper(getch());

                switch(option){

                case 'A':
                    potterhead_book_easy();
                    break;
                case 'B':
                    potterhead_book_medium();
                    break;

                case 'C':
                    potterhead_book_hard();
                    break;

                case 'D':
                    potterhead_movie_easy();
                    break;

                case 'E':
                    potterhead_movie_medium();
                    break;
                case 'F':
                    potterhead_movie_hard();
                    break;

                case 'G':
                    nonpotterhead_book_easy();
                    break;

                case 'H':
                    nonpotterhead_book_medium();
                    break;

                case 'I':
                    nonpotterhead_book_hard();
                    break;

                case 'J':
                    nonpotterhead_movie_easy();
                    break;

                case 'K':
                    nonpotterhead_movie_medium();
                    break;

                case 'L':
                    nonpotterhead_movie_hard();
                    break;
                case 'M':
                    marathon();
                default:
                    system("cls");
                    main_menu();
               }
}
void delay(){
    int a,b;
    for(a=1;a<=32767;a++){
       for(b=1;b<=32767;b++){
       }
    }
}

void potterhead_book_easy()
{
    system("cls");

    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.What is the name of Harry's owl?");
                printf("\n\nM.Hedwig\tN.Pigwidgeon\nO.Errol\t\tP.Buckbeak");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Hedwig.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.What's the name of Harry Potter's first broom?");
                printf("\n\nM.Nimbus 2001\t\tN.Nimbus 2000\nO.Firebolt\t\tP.Cleansweep 5");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Nimbus 2000.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.Who was the Potters' secret keeper before they died?");
                printf("\n\nM.Albus Dumbledore\tN.Severus Snape\nO.Sirius Black\t\tP.Peter Pettigrew");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Peter Pettigrew.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Who did Hermione take to the Yule Ball in Book 4?");
                printf("\n\nM.Cedric Diggory\tN.Viktor Krum\nO.Ron Weasley\t\tP.Harry Potter");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Viktor Krum.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.Did Harry and Dumbledore find the Horcrux in Book 6?");
                printf("\n\nM.They thought they had found it, but it turned out to be a fake");
                printf("\nN.Yes\nO.No - someone had already taken it\nP.There was no Horcrux");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.They thought they had found it, but it turned out to be a fake.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who does Harry Potter marry?");
                printf("\n\nM.Hermione Granger\tN.Ginny Weasley\nO.Cho Chang\t\tP.Luna Lovegood");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Ginny Weasley.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.What was Albus Dumbledore's favorite sweet?");
                printf("\n\nM.Chocolate Frog\tN.Pumpkin Pasty\nO.Sherbet Lemon\t\tP.Fizzing Whizzbees");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Sherbet Lemon.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What company did Mr Dursley work at?");
                printf("\n\nM.Mynt\t\t\tN.Grunnings\nO.Drill Company\t\tP.Samsung");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Grunnings.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.What is the name of the game Harry played in hogwarts?");
                printf("\n\nM.Cricket\t\tN.Quidditch\nO.Badminton\t\tP.Football");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Quidditch.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.How many founders are there in Hogwarts?");
                printf("\n\nM.One\t\tN.Two\nO.Three\t\tP.Four");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Four.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);
    getch();
    main_menu();
}
void potterhead_book_medium()
{
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.What was used by Dumbledore to light up the Street lights in Privet Drive?");
                printf("\n\nM.Torch Light\t\tN.Lighter\nO.Deluminator\t\tP.Flash Light");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Deluminator.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.How many children does Harry Potter have?");
                printf("\n\nM.One\t\tN.Two\nO.Three\t\tP.No child");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Three.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.Harry Potters’s eyes have a particular color. Which is that color?");
                printf("\n\nM.Green\t\tN.Blue\nO.Black\t\tP.Brown");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Green.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.The actual name of Lord Voldemort is ______?");
                printf("\n\nM.Voldemort\t\tN.Tom Marvolo Riddle\nO.Tom Riddle\t\tP.He Who Must Not Be Named");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Tom Marvolo Riddle.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.In which player position Harry belongs to the Gryffindor Quidditch Team?");
                printf("\n\nM.Keeper\t\tN.Beater\nO.Chaser\t\tP.Seeker");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is P.Seeker.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Which mode of Transport was used by Harry and Ron to move to Hogwarts? ");
                printf("\n\nM.Hogwarts Express\tN.Flying car\nO.Broom\t\t\tP.Floo Powder");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Flying car.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Who is the headmistress of Beauxbatons Academy of Magic?");
                printf("\n\nM.Madame Maxime\t\t\tN.Albus Dumbledore\nO.Severus Snape \t\tP.Igor Karkaroff");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Madame Maxime.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What is the name given to the most ardent followers of Lord Voldemort?");
                printf("\n\nM.Muggles\t\tN.Dementors\nO.Death Eaters\t\tP.Voldemort's Army");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Death Eaters.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Each year Mrs. Weasley gives a gift to Harry. What is that?");
                printf("\n\nM.A New Muffler\t\tN.A New Sweater\nO.ANew Jacket\t\tP.A New Robe");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.A New Sweater.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.On which occasion twelve-foot troll enter into Hogwart’s Academy?");
                printf("\n\nM.Christmas\t\t\tN.Goblet chooses the champions \nO.Session end Feast\t\tP.Halloween");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Halloween.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);


    getch();
    main_menu();
}
void potterhead_book_hard()
{
    system("cls");

    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Which Potion is known as Liquid Luck?");
                printf("\n\nM.Polyjuice Potion\tN.Felix Felicis\nO.Bottled Fame\t\tP.Essence of Dittiny");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Felix Felicis.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Who was Tonks' son's Godfather?");
                printf("\n\nM.Albus Severus Potter\t\tN.James Sirius Potter\nO.It doesn't say\t\tP.Harry Potter");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Harry Potter.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.What was James Potter's nickname?");
                printf("\n\nM.Prongs\t\tN.Mooney\nO.Padfoot\t\tP.Wormtail");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Prongs.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.What is the name of the female House Elf?");
                printf("\n\nM.Kreacher\t\tN.Honkey\nO.Winkey\t\tP.Dobby");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Winkey.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.What is the function of Finite Incantatem??");
                printf("\n\nM.To remove any magical spells\nN.To explode an object");
                printf("\nO.To stop time\nP.To make someone's teeth grow");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.To remove any magical spells.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Finish this Quote:\"I open at the______\"?");
                printf("\n\nM.Dawn\t\tN.Close\nO.Light\t\tP.End");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Close.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Who was Draco Malfoy's wife?");
                printf("\n\nM.Astoria Green Grass\tN.Pavarti Patil\nO.Romilda Vane\t\tP.It's never started");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Astoria Green Grass.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.Who guided Fleur to the Yule Ball?");
                printf("\n\nM.Harry Potter\t\tN.Ronald Weasley\nO.Draco Malfoy\t\tP.Roger Davies");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Roger Davies.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Which was the species of Hagrid’s pet dragon?");
                printf("\n\nM.Swedish Short-Snout Dragon\t\tN. Norwegian Ridgeback\nO.Romanian Longhorn Dragon\t\tP. Hungarian Horntail");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N. Norwegian Ridgeback.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.Name the category who was born into a wizarding family but hasn’t got any magic powers?");
                printf("\n\nM.Wizard\t\tN.Muggle\nO.Mudblood\t\tP.Squib");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Squib.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);


    getch();
    main_menu();
}
void potterhead_movie_easy()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who is the producer of the philosopher’s stone?");
                printf("\n\nM.Albus Dumbledore\t\tN.Tom Riddle\nO.Garrick Ollivander\t\tP.Nicolas Flamel");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Nicolas Flamel.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Hogwarts School of Witchcraft and Wizardry has a very loyal flock");
                printf("\n  of _________ used mainly to pull the carriages that lead elder students");
                printf("\n  from Hogsmeade station to the gates of the Castle.?");
                printf("\n\nM.Horse\t\tN.Hippogriff\nO.Dragon\tP.Thestrals");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Thestrals.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.In his first quidditch match, Harry’s team was against which House?");
                printf("\n\nM.Slytherin\t\tN.Hufflepuff\nO.Ravenclaw\t\tP.Durmstrang");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Slytherin.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Harry usually plays a game using the cupboard as _____ below the stairs?");
                printf("\n\nM.Toy Car\t\tN.Toy Horse\nO.Toy Soldiers\t\tP.Video Game");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Toy Soldiers.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.In which place Harry realized he can talk with the snakes?");
                printf("\n\nM.At The Zoo\t\tN.Hogwarts\nO.Hogsmeade\t\tP.Diagon Alley");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.At The Zoo.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.The place where Harry met with Quirinus Quirrell for the first time is");
                printf("\n\nM.Hogsmeade\t\tN.The Leaky Cauldron\nO.Diagon Alley\t\tP.Hogwarts");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.The Leaky Cauldron.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Gryffindor quidditch team captain is _______");
                printf("\n\nM.Angelina Johnson\tN.Fred Weasley\nO.Harry Potter\t\tP.Oliver Wood");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Oliver Wood.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.Name the place where Harry was born?");
                printf("\n\nM.Hogsmeade\t\t\tN.Godric’s Hollow\nO.4th Privet Drive\t\tP.Little Hangleton");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Godric’s Hollow.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Who kisses Harry after DA lesson in Harry Potter and the Order of the Phoenix’?");
                printf("\n\nM.Luna Lovegood\t\tN.Ginny Weasley\nO.Hermione Granger\tP.Cho Chang");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Cho Chang.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.Who is Harry's Father?");
                printf("\n\nM.Sirius Black\t\tN.Peter Pettigrew\nO.James Potter\t\tP.Remus Lupin");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is O.James Potter.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();
}
void potterhead_movie_medium()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.The colors which represent Ravenclaw house are ____and _____?");
                printf("\n\nM.Red and Golden\t\tN.Blue and Bronze\nO.Green and Silver\t\tP.Yellow and Black");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Blue and Bronze.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.In which House did Sorting hat want to include Harry?");
                printf("\n\nM.Slytherin\t\tN.Gryffindor\nO.Hufflepuff\t\tP.Ravenclaw");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Slytherin.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.Which character in Harry Potter carries a camera always with him at Hogwarts?");
                printf("\n\nM.Ginny Weasley\t\tN.Cho Chang\nO.Colin Creevey\t\tP.Draco Malfoy");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Colin Creevey.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Robert Pattinson portrayed which character in the film adaptation of");
                printf("\n  Harry Potter and the Goblet of Fire in 2005?");
                printf("\n\nM.Vincent Crabbe\tN.Draco Malfoy\nO.Percy Weasley\t\tP.Cedric Diggory");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Cedric Diggory.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.Which animal attacked Ron’s father when Harry had an intense dream?");
                printf("\n\nM.a Dementor\t\tN.A Snake\nO.A Death Eater\t\tP.Voldemort");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is N.A Snake.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Name the person who usually referred to as Wormtail or Scabbers?");
                printf("\n\nM.A Death Eater\t\t\tN.Voldemort\nO.Peter Pettigrew\t\tP.Sirius Black");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Peter Pettigrew.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Towards the end of the first book \"Harry Potter and the Philosopher's Stone\",");
                printf("\n  what gift did Hagrid give to Harry?");
                printf("\n\nM.A photo album of his parents\t\tN.Cake\nO.Butterbear\t\t\t\tP.Cloak of invisibility");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.A photo album of his parents.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.Who alone would be able to unseal the Chamber of Secrets?");
                printf("\n\nM.The Heir Of Gryffindor\tN.The Heir Of Hufflepuff\nO.The Heir Of Ravenclaw\t\tP.The Heir Of Slytherin");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.The Heir Of Slytherin.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Name the Godfather of Harry Potter?");
                printf("\n\nM.Lucius Malfoy\t\tN.Arthur Weasley\nO.Sirius BlackDoe\tP.James Potter");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Sirius BlackDoe.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.While doing the Triwizard Tournament’s second task, what Harry did for");
                printf("\n  breathing under the water.?");
                printf("\n\nM.He eats cake\t\tN.He eats gillyweed\nO.He eats Potion\tP.He eats Firewhiskey");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is N.He eats gillyweed.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();
}
void potterhead_movie_hard()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who directed Harry Potter and the Philosopher’s Stone?");
                printf("\n\nM.Steven Spielberg\t\tN.Rob Reiner\nO.Chris Columbus\t\tP.Richard Attenborough");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Chris Columbus.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.In the following famous Snape line, where does actor Alan Rickman");
                printf("\n  place a very long pause?");
                printf("\n\nM.People [PAUSE] will think you're up to something");
                printf("\nN.People will think you're [PAUSE] up to something");
                printf("\nO.People will think [PAUSE] you're up to something");
                printf("\nP.People will think you're up [PAUSE] to something");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.People will think you're [PAUSE] up to something.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.In Harry Potter and the Chamber of Secrets, what colour is the sock that Dobby  gets at the end?");
                printf("\n\nM.Grey\t\tN.Red\nO.Blue\t\tP.Black");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Grey.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.In the Chamber of Secrets book, Mrs Weasley magically fixes Harry's broken");
                printf("\n  glasses. Who repairs them in Diagon Alley in the film?");
                printf("\n\nM.Gilderoy Lockhart\tN.Hermione\nO.Hagrid\t\tP.Mrs.Weasley");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Hermione.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.What is the very first line of the film?");
                printf("\n\nM.I should have known that you would be here...");
                printf("\nN.Somebody's left something at the door , dear");
                printf("\nO.We're perfectly normal, thank you very much");
                printf("\nP.Good evening,Professor Dumbledore. Are the rumours true,Albus");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.I should have known that you would be here....");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.What is Gilderoy Lockhart doing in the large portrait of himself in");
                printf("\n  Chamber of Secrets?");
                printf("\n\nM.Riding a dragon\t\t\tN.Playing the bagpipes\nO.Catching a Golden Snitch\t\tP.Painting a Portrait of himself");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Painting a Portrait of himself.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.What is the spell Harry is attempting under the bedclothes in Harry Potter");
                printf("\n  and the Prisoner of Azkaban’s opening scene?");
                printf("\n\nM.Lacarnum Inflamarae\tN.Expecto Patronum\nO.Expelliarmus\t\tP.Lumos Maxima");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Lumos Maxima.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.In Prisoner of Azkaban, which lead singer of which rock band has a cameo in");
                printf("\n  The Leaky Cauldron, as a wizard magically stirring his tea?");
                printf("\n\nM.Ian Brown of The Stone Roses");
                printf("\nN.Shaun Ryder of the Happy Mondays");
                printf("\nO.Bobby Gillespie of Primal Scream");
                printf("\nP.Jarvis Cocker of Pulp");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Ian Brown of The Stone Roses.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.In Harry Potter and the Goblet of Fire, what does Cedric Diggory do the");
                printf("\n  first time we see him in the film?");
                printf("\n\nM.Sparkle in the sunlight");
                printf("\nN.Jump from a tree");
                printf("\nO.Materialise in mid-air");
                printf("\nP.Jump from his broom");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Jump from a tree.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.Barty Crouch Jr, played by David Tennant, is notable for what facial tic?");
                printf("\n\nM.Ear wriggling\t\t\tN.Nose twitching\nO.Spasmodic blinking\t\tP.Sticking his tongue out");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Sticking his tongue out.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_book_easy()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.How many book in Harry Potter series?");
                printf("\n\nM.Eight\t\tN.Seven\nO.Nine\t\tP.Five");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Seven.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Who is Hermione Granger?");
                printf("\n\nM.Harry's BestFriend\t\tN.Muggle\nO.Dudley's Sister\t\tP.Malfoy's Cousin");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Harry's BestFriend.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.How many Houses in Hogwarts?");
                printf("\n\nM.One\t\tN.Two\nO.Three\t\tP.Four");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Four.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.What is Dobby?");
                printf("\n\nM.A Wizard\tN.An Elf\nO.A Muggle\tP.Nothing, just a name");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.An Elf.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.The platforms from where Hogwarts Express passes are____");
                printf("\n\nM.Nine and Three-quarters\tN.Nine and Half");
                printf("\nO.Nine\t\t\t\tP.Ten");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.Nine and Three-quarters.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who brought Harry to Hogwarts when he was matured to go there?");
                printf("\n\nM.Ron\t\t\tN.Hermione\nO.Hagrid\t\tP.Dumbledore");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Hagrid.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Name the Daily which was described throughout the Harry Potter series?");
                printf("\n\nM.Daily Star\t\tN.Daily Wizard\nO.Daily Magic\t\tP.Daily Prophet");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Daily Prophet.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What is the name of the railway station in London to catch the train to");
                printf("\n  Hogwarts where you should stay in between platforms 9and 10?");
                printf("\n\nM.Hogwarts\t\tN.King's Station\nO.Criss Cross\t\tP.King’s Cross");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.King’s Cross.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Vernon Dursley had his own office on the _______ floor of his drill");
                printf("\n  company, Grunnings");
                printf("\n\nM.9th\t\tN.5th\nO.1st\t\tP.10th");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.9th.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.What is the theme of Harry Potter book?");
                printf("\n\nM.Comedy\tN.Love Story\nO.Magic\t\tP.Horror");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is O.Magic.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_book_medium()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1. What is the animal of the Gryffindor House?");
                printf("\n\nM.Lion\t\tN.Cat\nO.Eagle\t\tP.Snake");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Lion.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.How many Horcruxes did Voldemort have?");
                printf("\n\nM.Ten\t\tN.Five\nO.Seven\t\tP.None");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Seven.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.In which book did Voldemort regain his body again?");
                printf("\n\nM.Harry Potter and the Half-Blood Prince");
                printf("\nN.Harry Potter and the Goblet of Fire");
                printf("\nO.Harry Potter and the Order of the Phoenix");
                printf("\nP.Harry Potter and the Prisoner of Azkaban");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Harry Potter and the Goblet of Fire.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Who is the writer of Harry Potter?");
                printf("\n\nM.William Shakespeare\tN.Sir Arthur Conan Doyle\nO.Dan Brown\t\tP.J.K.Rowling");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.J.K.Rowling.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.What's the name of 5th book in Harry Potter series?");
                printf("\n\nM.Harry Potter and the Half-Blood Prince");
                printf("\nN.Harry Potter and the Chamber of Secrets");
                printf("\nO.Harry Potter and the Order of the Phoenix");
                printf("\nP.Harry Potter and the Prisoner of Azkaban");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is O.Harry Potter and the Order of the Phoenix.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who is Albus Dumbledore?");
                printf("\n\nM.Potion Teacher\t\tN.Headmaster of Hogwarts\nO.Harry's Godfather\t\tP.Herbology Teacher");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is Headmaster of Hogwarts.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Who taught Potion?");
                printf("\n\nM.Albus Dumbledore\tN.Professor McGonagall\nO.Severus Snape\t\tP.Arthur Weasley");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Severus Snape.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What is the full name of Hogwarts?");
                printf("\n\nM.The Hogwarts School of Witchcraft and Wizardry");
                printf("\nN.The Hogwarts School of Wizardry and Witchcraft");
                printf("\nO.The Hogwarts School of Wizardry\nP.The Hogwarts School");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.The Hogwarts School of Witchcraft and Wizardry.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Which class has had a different teacher each year?");
                printf("\n\nM.Transfiguration\tN.Charms\nO.Divination\t\tP.Defense Against the Dark Arts");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Defense Against the Dark Arts.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.Who is Hagrid?");
                printf("\n\nM.Teacher\t\tN.Gamekeeeper\nO.Healer\t\tP.Student");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is N.Gamekeeeper.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_book_hard()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who was Harry Potter's first crush?");
                printf("\n\nM.Hermione Granger\tN.Romilda Vane\nO.Ginny Weasley\t\tP.Cho Chang");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Cho Chang.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.What was the name of Harry Potter's oldest son?");
                printf("\n\nM.James Sirius Potter\t\tN.Albus Severus Potter\nO.Ronald Fred Weasley\t\tP.It doesn't say");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.James Sirius Potter.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.What was the name of Weasley's owl?");
                printf("\n\nM.Horus\t\tN.Hedwig\nO.Errol\t\tP.Buckbeak");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Errol.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Who was the first person to be petrified by the Basilisk?");
                printf("\n\nM.Hermione\t\t\tN.Mrs.Norris\nO.Nearly Headless Nick\t\tP.Dean Thomas");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Mrs.Norris.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.Which is the middle name of Tom Riddle who is also called Lord Voldemort?");
                printf("\n\nM.Tom\t\tN.Riddle\nO.Lord\t\tP.Marvolo");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is P.Marvolo.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who later becomes Lord Voldemort’s trusted snake and horcrux?");
                printf("\n\nM.Snake\t\t\tN.Anaconda\nO.Nagini\t\tP. Basilisk");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Nagini.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.At what age one can join in Hogwarts School of Witchcraft?");
                printf("\n\nM.11\t\tN.5\nO9.\t\tP.10");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.11.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.Who are the parents of Ron?");
                printf("\n\nM.James and Lily\t\tN.Molly and Arthur Weasley\nO.Vernon and Petunia\t\tP.It doesn't mention");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Molly and Arthur Weasley.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Who was appointed as the guards of Azkaban prison by The Ministry of Magic?");
                printf("\n\nM.Dementors\t\tN.Healers\nO.DeathEaters\t\tP.Wizards");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Dementors.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.In the first book, which flavor ice cream is eating by Harry at the zoo?");
                printf("\n\nM.Chocobar\t\tN.Cone\nO.Orange Ice Pop\tP.Lemon Ice Pop");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Lemon Ice Pop.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_movie_easy()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who has done the role of Harry Potter in the films?");
                printf("\n\nM.Daniel Radcliffe\tN.Tom Felton\nO.Rupert Grint\t\tP.Eddie Redmayne");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Daniel Radcliffe.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Who are Harry's best friends?");
                printf("\n\nM.Malfoy and Crabbe\t\tN.Ron and Hermione\nO.Neville and Luna\t\tP.Fred and Goerge");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Ron and Hermione.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.What was shape of Harry's spectacle?");
                printf("\n\nM.Square\t\tN.Oval\nO.Half moon\t\tP.Round");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Round.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.What's the last name of Ron?");
                printf("\n\nM.Malfoy\t\tN.Granger\nO.Weasley\t\tP.Potter");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Weasley.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.Ronald Weasleyhad a phobia on which insect?");
                printf("\n\nM.Spiders\tN.Rat\nO.Cat\t\tP.Dog");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is M.Spiders.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who had opened the Chamber of Secret for the last time?");
                printf("\n\nM.Voldemort\t\tN.Harry\nO.Hagrid\t\tP.Ginny Weasley");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Ginny Weasley.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Who is the main character in Harry Potter Series?");
                printf("\n\nM.Voldemort\t\t\tN.Harry Potter\nO.Albus Dumbledore\t\tP.Hermione Granger");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Harry Potter.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What's the color of Harry's pet owl?");
                printf("\n\nM.Black\t\tN.Brown\nO.White\t\tP.Grey");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.White.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.Who is the large dog that accompanied Hagrid in many places?");
                printf("\n\nM.Fang\t\tN.Hedwig\nO.Fluffy\tP.Norbert");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Fang.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10. Who was Harry’s captain in Slytherin in his first Quidditch match?");
                printf("\n\nM.Draco Malfoy\t\tN.Oliver Wood\nO.Fred Weasley\t\tP.Marcus Flint");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.Marcus Flint.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_movie_medium()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.How many movie in Harry potter Series??");
                printf("\n\nM.Eight\t\tN.Seven\nO.Five\t\tP.Nine");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Eight.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Which of these Wizards was particularly gifted at memory charms?");
                printf("\n\nM.Hermione Granger\t\tN.Gilderoy Lockhert\nO.Aberforh Dumbledore\t\tP.Nwet Scamander");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Gilderoy Lockhert.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.Name the person who usually referred to as Wormtail or Scabbers?");
                printf("\n\nM.James potter\t\tN.Sirius Black\nO.Peter Pettigrew\tP.Remus Lupin");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Peter Pettigrew.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4. The role of Professor McGonagall was done in the movies by _________?");
                printf("\n\nM.Emma Watson\t\tN.Helena Bonham Carter \nO.Julie Walters\t\tP. Maggie Smith");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P. Maggie Smith.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.Which is the last movie of Harry Potter series?");
                printf("\n\nM.Harry Potter and the Deathly Hallows: Part 1");
                printf("\nN.Harry Potter and the Goblet of Fire");
                printf("\nO.Harry Potter and the Order of the Phoenix");
                printf("\nP.Harry Potter and the Deathly Hallows: Part 2");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is P.Harry Potter and the Deathly Hallows: Part 2.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.What was Neville Longbottom's greatest fear?");
                printf("\n\nM.Lord Voldemort\tN.Dementor\nO.Severus Snape\t\tP.The Cruciatus Curse");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Severus Snape.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.Who is the Half Blood Prince?");
                printf("\n\nM.Draco Malfoy\t\tN.Severus Snape\nO.Tom Riddle\t\tP.Horace Slughorn");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Severus Snape.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.What gift did grandmother give Neville in his first year at  Hogwarts?");
                printf("\n\nM.A Remembrall\t\tN.A Broom\nO.A Gift Box\t\tP.A Wand");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.A Remembrall.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.What's the name of Malfoy's house elf?");
                printf("\n\nM.Winky\t\tN.Dobby\nO.Kreacher\tP.None of these");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Dobby.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.Who is Harry’s Father?");
                printf("\n\nM.Lucius Potter\t\tN.Severus Potter\nO.Sirius Potter\t\tP.James Potter");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is P.James Potter.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void nonpotterhead_movie_hard()
{
    system("cls");
    int count=0, i;
        for(i=1; i<=10; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who is the Heir of Slytherin?");
                printf("\n\nM.Tom Riddle\t\tN.Harry Potter\nO.Rubeus Hagrid\t\tP.Draco Malfoy");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Tom Riddle.");
                    getch();
                    break;
                }
            case 2:
                printf("\n\n2.Sirius Black escapes on what kind of fantastic beast in the");
                printf("\n  Prisoner of Azkaban?");
                printf("\n\nM.Phoenix\t\tN.Hippogriff\nO.Unicorn\t\tP.Dragon");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Hippogriff.");
                    getch();
                    break;
                }
            case 3:
                printf("\n\n3.Where does Dumbledore's Army practice?");
                printf("\n\nM.Shrieking Shack\t\tN.Forbidden Forest\nO.Room of Requirement\t\tP.Great Hall");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Room of Requirement.");
                    getch();
                    break;
                }
            case 4:
                printf("\n\n4.Which character was NOT an Animagus?");
                printf("\n\nM.Peter Pettigrew\tN.James Potter\nO.Remus Lupin\t\tP.Professor McGonagall");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Remus Lupin.");
                    getch();
                    break;
                }
            case 5:
                printf("\n\n5.You can only see a Thestral if you….?");
                printf("\n\nM.Believe in the Deathly Hallows");
                printf("\nN.Wear special goggles\nO.Bow to them\nP.Have seen death");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is P.Have seen death.");
                    getch();
                    break;
                }
            case 6:
                printf("\n\n6.Who is the ghost of Gryffindor Tower?");
                printf("\n\nM.Sir Nicholas\t\tN.Fat Friar\nO.Bloody Baron\t\tP.Grey Lady");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Sir Nicholas.");
                    getch();
                    break;
                }
            case 7:
                printf("\n\n7.What potion does Harry use to get Professor Slughorn to tell his secret?");
                printf("\n\nM.Polyjuice\t\tN.Amortentia\nO.Veritas Serum\t\tP.Felix Felicis");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Felix Felicis.");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n8.Which Weasley brother marries former Beauxbatons student Fleur Delacour?");
                printf("\n\nM.Fred\t\t\tN.Bill\nO.Charlie\t\tP.Percy");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Bill.");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n9.What spell does Ron use against the troll in Harry Potter and");
                printf("\n  the Sorcerer's Stone?");
                printf("\n\nM.Alohomora\t\t\tN.Expelliarmus\nO.Wingardium Leviosa\t\tP.Stupefy");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Wingardium Leviosa.");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n10.What's the name of the dog guarding the Sorcerer’s Stone?");
                printf("\n\nM.Fluffy\t\tN.The Grim\nO.Padfoot\t\tP.Fang");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                printf("\n\nWrong!!! The correct answer is M.Fluffy.");
                getch();
                break;
                }

            }
        }
        system("cls");
        printf("\n\n\n\n\n\t\t\tYour score is: %d", count);

    getch();
    main_menu();

}
void marathon()
{
    system("cls");
    int count=0, i, score;
        for(i=1; i<=50; i++){
            system("cls");
            switch(i){

            case 1:
                printf("\n\n1.Who was the original bearer of the Cloak of Invisibility?");
                printf("\n\nM.Harry Potter\tN.Ignotus Peverell\nO.James Potter\tP.Albus Dumbledore");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Ignotus Peverell.");
                    getch();
                    goto score;
                    break;
                }
                case 2:
                printf("\n\n2.Which of these was not a Horcrux?");
                printf("\n\nM.Nagini\t\t\tN.The Sword of Gryfindor\nO.The Diadem of Ravenclaw\tP.The Riddle's Diary");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.The Sword of Gryfindor.");
                    getch();
                    goto score;
                    break;
                }
                case 3:
                printf("\n\n3.What material is inside of Harry Potter's wand?");
                printf("\n\nM.Phoenix Tail Feathers\t\tN.Dragon Heartstrings\nO.Shards of Unicorn Horn\tP.Centour Tears");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Phoenix Tail Feathers.");
                    getch();
                    goto score;
                    break;
                }
                case 4:
                printf("\n\n4.What was Hagrid getting at \"Nocturn Alley\" in \"The Chamber of Secrets\"?");
                printf("\n\nM.It was not classified\t\tN.Food for Fang\nO.Unicorn Blood\t\t\tP.Fless Eating Slug Repellent");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Fless Eating Slug Repellent.");
                    getch();
                    goto score;
                    break;
                }
                case 5:
                printf("\n\n5.Finish the quote:\"I must not tell ______.");
                printf("\n\nM.secrets\tN.others\nO.lies\t\tP.the truth");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.lies.");
                    getch();
                    goto score;
                    break;
                }
                case 6:
                printf("\n\n6.What was Dumbledore's sister name?");
                printf("\n\nM.Rita\t\tN.Minerva\nO.Ariana\tP.Abella");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Ariana.");
                    getch();
                    goto score;
                    break;
                }
                case 7:
                printf("\n\n7.Which of these wizards was particularly gifted at memory charms?");
                printf("\n\nM.Hermione\t\tN.Gilderoy Lockhart\nO.Aberforth Dumbledore\tP.Newt Scamander");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Gilderoy Lockhart.");
                    getch();
                    goto score;
                    break;
                }
                case 8:
                printf("\n\n8.Which of these wizards was not a Death Eater?");
                printf("\n\nM.Fenrir Greyback\tN.Peter pettigrew\nO.Yaxley\t\tP.Gregoravich");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Gregoravich.");
                    getch();
                    goto score;
                    break;
                }
                case 9:
                printf("\n\n9.The 1994 Quidditch World Cup was held between:?");
                printf("\n\nM.Ireland and Peru\tN.Ireland and Bulgaria\nO.Ireland and Scotland\tP.Ireland and Luxemborg");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Ireland and Bulgaria.");
                    getch();
                    goto score;
                    break;
                }
                case 10:
                printf("\n\n10.Dumbledore was born in the wizarding village called:?");
                printf("\n\nM.Mould-on-the-Wold\tN.Falmouth\nO.Barnton\t\tP.Ottery St. Catchpole");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Mould-on-the-Wold.");
                    getch();
                    goto score;
                    break;
                }
                case 11:
                printf("\n\n11.Gillert Grindleward was expelled from Durmstrang at the age of:?");
                printf("\n\nM.14\tN.15\nO.16\tP.17");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.16.");
                    getch();
                    goto score;
                    break;
                }
                case 12:
                printf("\n\n12.What did Fred and George gave Ron to eat, after which it resulted");
                printf("\n  in a burnt hold through his tongue?");
                printf("\n\nM.Fizzing Whizzbees\tN.Cockroach Clusters\nO.Acid Pop\t\tP.QueenBee");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Acid Pop.");
                    getch();
                    goto score;
                    break;
                }
                case 13:
                printf("\n\n13.When did Harry Potter first see the lost Ravenclaw’s Diadem?");
                printf("\n\nM.Fourth year\tN.First year\nO.Fifth year\tP.Sixth year");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Sixth year.");
                    getch();
                    goto score;
                    break;
                }
                case 14:
                printf("\n\n14.Which Peverell brother possessed the elder wand?");
                printf("\n\nM.Antioch\tN.Cadmus\nO.Ignotus\tP.Dumbledore");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Antioch.");
                    getch();
                    goto score;
                    break;
                }
                case 15:
                printf("\n\n15.Bellatrix Black was married to ____________?");
                printf("\n\nM.Rabastan Lestrange\tN.Lucius Lestrange\nO.Radolphus Lestrange\tP.Tom Lestrange");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Radolphus Lestrange.");
                    getch();
                    goto score;
                    break;
                }
                case 16:
                printf("\n\n16.Severus Snape lived in the town called________?");
                printf("\n\nM.Budleigh Babberton\tN.Cokeworth\nO.Little Hangleton\tP.Hogsmeade");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Cokeworth.");
                    getch();
                    goto score;
                    break;
                }
                case 17:
                printf("\n\n17.Hepzibah Smith was the owner of __________?");
                printf("\n\nM.Helga Hufflepuff’s Cup\t\tN.Salazar Slytherin’s Locket\nO.Both the options mentioned above\tP.None of them");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Both the options mentioned above.");
                    getch();
                    goto score;
                    break;
                }
                case 18:
                printf("\n\n18.Which book provided specific instructions about the creation");
                printf("\n   and nature of Horcrux?");
                printf("\n\nM.Tales of Beedle the Bard\tN.Famous Fire Eaters\nO.Magick Moste Evile\t\tP.Secret of the Darkest Art");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Secret of the Darkest Art.");
                    getch();
                    goto score;
                    break;
                }
                case 19:
                printf("\n\n19.The fifth film introduced us to Bellatrix Lestrange. But who plays her?");
                printf("\n\nM.Kelly Macdonald\tN.Helen McCrory\nO.Michelle Fairley\tP.Hlena Bonham-Carter");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Hlena Bonham-Carter.");
                    getch();
                    goto score;
                    break;
                }
                case 20:
                printf("\n\n20.Which London bridge is destroyed at the beginning of the");
                printf("\n   Harry Potter and the Half-Blood Prince?");
                printf("\n\nM.Millennium Bridge\tN.Blackfriars Bridge\nO.London Bridge\t\tP.Westminster Bridge");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Millennium Bridge.");
                    getch();
                    goto score;
                    break;
                }
                case 21:
                printf("\n\n21.What relation is Hero Fiennes Tiffin – who plays the 11-year-old");
                printf("\n   Tom Riddle – to Ralph Fiennes, who plays Voldemort?");
                printf("\n\nM.His son\tN.No relation at all - their names are just a coincidence\nO.His grandson\tP.His nephew");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.His nephew.");
                    getch();
                    goto score;
                    break;
                }
                case 22:
                printf("\n\n22.In Harry Potter and the Deathly Hallows Part One, what Nick Cave song");
                printf("\n   do Harry and Hermione dance to in the tent?");
                printf("\n\nM.Into My Arms\t\tN.O Children\nO.Jubilee Street\tP.We No Who U R");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.O Children.");
                    getch();
                    goto score;
                    break;
                }
                case 23:
                printf("\n\n23.In Harry Potter and the Deathly Hallows Part One, who narrates the");
                printf("\n  \"The Tale of the Three Brothers\"?");
                printf("\n\nM.Rupert Grint\tN.Rhys Ifans\nO.Emma Watson\tP.Daniel Radcliffe");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Emma Watson.");
                    getch();
                    goto score;
                    break;
                }
                case 24:
                printf("\n\n24.In Harry Potter and the Deathly Hallows Part Two, what colour dress is Albus");
                printf("\n   and Aberforth Dumbledore’s sister Ariana wearing in her portrait?");
                printf("\n\nM.Yellow\tN.Blue\nO.Green\t\tP.Red");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Blue.");
                    getch();
                    goto score;
                    break;
                }
                case 25:
                printf("\n\n25.Who does Neville say that he’s \"mad for\" at the height of the?");
                printf("\n   Battle of Hogwarts?");
                printf("\n\nM.Luna Lovegood\t\t\tN.Padma Patil\nO.Professor Mcgonagall\t\tP.Lavender Brown");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Luna Lovegood.");
                    getch();
                    goto score;
                    break;
                }
                case 26:
                printf("\n\n26.What is the final line of the final film?");
                printf("\n\nM.Really\tN.Sure\nO.Ready\t\tP.Okay");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Ready.");
                    getch();
                    goto score;
                    break;
                }
                case 27:
                printf("\n\n27.Harry, Ron, and Hermione help save the Sorcerer's Stone from being stolen.");
                printf("\n  How old was its co-creator, Nicholas Flamel, when he decided to destroy it?");
                printf("\n\nM.100\tN.700\nO.565\tP.665");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.665.");
                    getch();
                    goto score;
                    break;
                }
                case 28:
                printf("\n\n28.Monkshood and wolfsbane are the same plant, also known as what?");
                printf("\n\nM.Aconite\tN.Mandrake\nO.Bubotuber\tP.Mimbulus mimbletonia");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Aconite.");
                    getch();
                    goto score;
                    break;
                }
                case 29:
                printf("\n\n29.How many staircases does Hogwarts have?");
                printf("\n\nM.111\t\tN.142\nO.1723\t\tP.123");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.142.");
                    getch();
                    goto score;
                    break;
                }
                case 30:
                printf("\n\n30.How many possible Quidditch fouls are there?");
                printf("\n\nM.500\t\tN.70\nO.50\t\tP.700");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.700.");
                    getch();
                    goto score;
                    break;
                }
                case 31:
                printf("\n\n31.Dumbledore has a scar above his left knee that is a perfect map of what?");
                printf("\n\nM.The London Bridge\t\tN.The Hogwarts Castle\nO.The London Underground\tP.Riddle House");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.The London Underground.");
                    getch();
                    goto score;
                    break;
                }
                case 32:
                printf("\n\n32.What does the Imperius Curse do?");
                printf("\n\nM.kills\t\tN.Controls\nO.Tortures\tP.Turn the person into a pig");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Controls.");
                    getch();
                    goto score;
                    break;
                }
                case 33:
                printf("\n\n33.For Harry's 17th birthday, what color did Hermione turn the leaves of the");
                printf("\n   Weasley’s crabapple tree?");
                printf("\n\nM.Red\t\tN.Gold\nO.Black\t\tP.Sky Blue");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Gold.");
                    getch();
                    goto score;
                    break;
                }
                case 34:
                printf("\n\n34.What is the max speed for a Firebolt broomstick?");
                printf("\n\nM.150 mph\tN.160 mph\nO.100 mph\tP.155 mph");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.150 mph.");
                    getch();
                    goto score;
                    break;
                }
                case 35:
                printf("\n\n35.Harry first took the Knight Bus in \"The Prisoner of Azkaban.\"");
                printf("\n   How much does a ticket cost if it includes hot chocolate?");
                printf("\n\nM.1 Galleon\tN.20 Sickles\nO.2Galleons\tP.14 Sickles");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.14 sickles.");
                    getch();
                    goto score;
                    break;
                }
                case 36:
                printf("\n\n36.In the Hall of Prophecy there are rows and rows of glowing orbs.");
                printf("\n   Which row contains the prophecy about Harry and Voldemort?");
                printf("\n\nM.Row 99\tN.Row 9\nO.Row 55\tP.Row 97");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Row 97.");
                    getch();
                    goto score;
                    break;
                }
                case 37:
                printf("\n\n37.In the Quidditch World Cup, Ireland's team had three main chasers:");
                printf("\n   Mullet, Troy, and Moran. Which one scored the first goal?");
                printf("\n\nM.Troy\t\tN.Mullet\nO.Moran\t\tP.None of them");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Troy.");
                    getch();
                    goto score;
                    break;
                }
                case 38:
                printf("\n\n38.What is the name of the Apparition instructor who comes to Hogwarts");
                printf("\n   in Harry's sixth year?");
                printf("\n\nM.Firenze\t\tN.Cuthbert Binns\nO.Wilkie Twycross\tP.Rubeus Hagrid");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Wilkie Twycross.");
                    getch();
                    goto score;
                    break;
                }
                case 39:
                printf("\n\n39.Voldemort stole Helga Hufflepuff's cup from an old woman named");
                printf("\n   Hepzibah Smith. What was the name of her house-elf?");
                printf("\n\nM.Dobby\t\tN.Hokey\nO.Winky\t\tP.Kreacher");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Hokey.");
                    getch();
                    goto score;
                    break;
                }
                case 40:
                printf("\n\n40.Ginny Weasley bought a pet Pygmy Puff from her older brothers' joke shop.");
                printf("\n   What did she name it?");
                printf("\n\nM.Arnold\tN.Hedwig\nO.Honkey\tP.Buckbeak");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Arnold.");
                    getch();
                    goto score;
                    break;
                }
                case 41:
                printf("\n\n41.The visitor’s entrance to the Ministry of Magic is an abandoned red telephone");
                printf("\n   booth in London. What is the five-digit code you must dial to get in?");
                printf("\n\nM.1-7-2-3-4\tN.4-0-2-0-6\nO.6-6-2-4-4\tP.6-2-4-4-2");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.6-2-4-4-2.");
                    getch();
                    goto score;
                    break;
                }
                case 42:
                printf("\n\n42.Many know that Gryffindor's ghost is Nearly Headless Nick.");
                printf("\n   But what is his full name?");
                printf("\n\nM.Sir Nicholas de Mimsy-Porpington\tN.Nearly Headless Nick\nO.Nicholas Flamel\t\t\tP.Sir Nicholas");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.Sir Nicholas de Mimsy-Porpington.");
                    getch();
                    goto score;
                    break;
                }
                case 43:
                printf("\n\n43.Where is the Slytherin common room located?");
                printf("\n\nM.Next to the kitchen\tN.The Dungeons\nO.In the west tower\tP.Below the great hall");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.The Dungeons.");
                    getch();
                    goto score;
                    break;
                }
                case 44:
                printf("\n\n44.Who is the Hufflepuff house ghost?");
                printf("\n\nM.Cuthbert Binns\tN.Sir Patrik Delaney Padmore\nO.The Fat Friar\t\tP.The grey Lady");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.The Fat Friar.");
                    getch();
                    goto score;
                    break;
                }
                case 45:
                printf("\n\n45.Slughorn teaches his students that Amortentia smells different");
                printf("\n   to each person. What food does Harry smell?");
                printf("\n\nM.Pumpkin Juice\t\tN.Mrs Weasley's Fudge\nO.Lemon Drops\t\tP.Treacle Tart");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Treacle Tart.");
                    getch();
                    goto score;
                    break;
                }
                case 46:
                printf("\n\n46.Which Hogwarts professor was rumoured to be a duelling champion");
                printf("\n   in their youth?");
                printf("\n\nM.Minerva Mcgonagall\tN.Severus Snape\nO.Filius Flitwick\tP.Horace Slughorn");
                if(toupper(getch())=='O')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is O.Filius Flitwick.");
                    getch();
                    goto score;
                    break;
                }
                case 47:
                printf("\n\n47.What the birthday of Daniel Radcliffe(Harry Potter Cast)?");
                printf("\n\nM.23 July\tN.31 July\nO.17 February\tP.14 April");
                if(toupper(getch())=='M')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is M.23 July.");
                    getch();
                    goto score;
                    break;
                }
                case 48:
                printf("\n\n48.What's the name of Draco Malfoy's Sister?");
                printf("\n\nM.Narcissa Malfoy\tN.Rose Malfoy\nO.Lily Malfoy\t\tP.Skylar Malfoy");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Skylar Malfoy.");
                    getch();
                    goto score;
                    break;
                }
                case 49:
                printf("\n\n49.In which movie does Sirius Black die?");
                printf("\n\nM.Harry Potter and the Goblet of Fire\nN.Harry Potter and the Order of the Phoenix");
                printf("\nO.Harry Potter and the Deathly Hallows: Part 1\nP.Harry Potter and the Sorcerer's Stone");
                if(toupper(getch())=='N')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is N.Harry Potter and the Order of the Phoenix.");
                    getch();
                    goto score;
                    break;
                }
                case 50:
                printf("\n\n50.Which of the Harry Potter movies is not or hardly set at Hogwarts?");
                printf("\n\nM.Harry Potter and the Order of the Phoenix\nN.Harry Potter and the Goblet of Fire");
                printf("\nO.Harry Potter and the Sorcerer's Stone\nP.Harry Potter and the Deathly Hallows: Part 1");
                if(toupper(getch())=='P')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    goto score;
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is P.Harry Potter and the Deathly Hallows: Part 1.");
                    getch();
                    goto score;
                    break;
                }

            score:
                system("cls");
                score = count;
                if(score>=40 && score<=50)
                {
                    printf("\n\n\t\t\tO-O  O-O CONGRATULATION O-O  O-O ");
                    printf("\n\n\t\t ********** It's BRILLIANT!!!!! ***********");
                    printf("\n\n\t\t%s your score is:%d",player_name, count);
                    printf("\n\n\t\tYou're really a TRUE POTTERHEAD !!!!!");
                    printf("\n\n\t\tThank you , Thank you very much.");
                    printf("\n\n\tO-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O");

                    goto go;
                }
                else if(score>=21 && score<=39)
                {
                    printf("\n\n\n\n\t\t   O-O  O-O  O-O WOW !!! O-O  O-O  O-O");
                    printf("\n\n\n\t\t\t%s your score is:%d",player_name, count);
                    printf("\n\n\t\t\tGood Job POTTERHEAD");
                    printf("\n\n\tO-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O");
                }
                else
                {
                    printf("\n\n\n\n\t\t  O-O  O-O  O-O BLOODY HELL O-O  O-O  O-O");
                    printf("\n\n\n\t\t\t%s your score is:%d",player_name, count);
                    printf("\n\n\t\t\tBetter Luck next time.");
                    printf("\n\n\tO-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O");
                }

                go:
                    puts("\n\n\n\t\tPress \"N\" for playing the next. ");
                    puts("\n\t\tPress any key to go to the main menu.");
                    if(toupper(getch())=='N'){
                        start_game();
                    }
                    else{
                        edit_score((int)score, player_name);
                        main_menu();
                    }
            }
        }

    getch();
}

void help(){
    system("cls");
    printf("\n                                 \"HELP HOUSE\"");
    printf("\n                                 ************");
    printf("\n # There are 12 different categories questions int the game");
    printf("\n # You can play each category separately.");
    printf("\n # Each category contains 10 different questions and each question contains");
    printf("\n   4 options.");
    printf("\n # When you start a category, you have to answer all the questions in that ");
    printf("\n   category.You'll get 1 mark for every correct answer.After answering all ");
    printf("\n   the 10 questions you'll get your score.");
    printf("\n # There is a \"MARATHON ROUND\" containing 50 questions for the crazy");
    printf("\n   Potterheads.It's a quiet tough round because you've to give the ");
    printf("\n   correct answer for the every next question.Here also every question");
    printf("\n   contains 1 mark.");
    printf("\n # There is no negative marking for incorrect answers.");
    printf("\n\n\t  ******************** BEST OF LUCK **********************");
    printf("\n\n\t  O-O HARRY POTTER TRIVIA is develpoed by A POTTERHEAD O-O");


    getch();
}

void edit_score(int score, char plyr_name[30]){
    system("cls");
    FILE* f;
    f = fopen("score.txt", "a");
        fprintf(f, "%s\n%d\n", plyr_name, score);
        fclose(f);
}

void reset_score(){

    system("cls");
    FILE* f;
    f = fopen("score.txt", "w");
    fclose(f);
    getch();
}

void show_score_record(){
    system("cls");
    struct plyr{
        int scr;
        char plyr_nme[30];
    }player;
    int numm[20],z,i,q;
    char namm[20][30];
    FILE *f;
    f=fopen("score.txt","r");
    for(z=0;!feof(f);z++){
        fscanf(f,"%s %d",namm[z],&numm[z]);
    }
    player.scr=numm[0];
    for(i=z-1;i>=0;i--){
        if(numm[i]>player.scr){
            q=i;
            player.scr=numm[i];
        }
    }
    printf("\n\n\n\n\t\tO-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O ");
    printf("\n\n\t\t\t%s has secured the Highest score %d", namm[q], player.scr);
    printf("\n\n\t\tO-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O  O-O ");
    fclose(f);
    getch ();
    }
