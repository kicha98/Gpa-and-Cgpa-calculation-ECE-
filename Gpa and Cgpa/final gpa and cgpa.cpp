#include <iostream>
#include <string.h>
using namespace std;
int semselection;
char grade[20];
char select[5];
int choice;
int g,c;
int points,points1,points2,points3,points4,points5,points6,points7,points8;
int credits,credits1,credits2,credits3,credits4,credits5,credits6,credits7,credits8;
float gpa,gpa1,gpa2,gpa3,gpa4,gpa5,gpa6,gpa7,gpa8;
char dummy1[10]="s";
char dummy2[10]="a";
char dummy3[10]="b";
char dummy4[10]="c";
char dummy5[10]="d";
char dummy6[10]="e";
char dummy7[10]="gpa";
char dummy8[10]="cgpa";
float finalgpa;

int main()


{
    cout << "ENTER GPA or CGPA";

   cin >>select;

   if (strcmp(select, dummy7)==0 )
{
    cout <<"you have selected GPA \n";


cout <<"PLEASE ENTER SEM\n";
cout <<"1. SEM1 \n";
cout <<"2. SEM2 \n";
cout <<"3. SEM3 \n";
cout <<"4. SEM4 \n";
cout <<"5. SEM5 \n";
cout <<"6. SEM6 \n";
cout <<"7. SEM7 \n";
cout <<"8. SEM8 \n";
cin >>semselection;

switch(semselection)

{case 1:
{
cout <<"SEM 1 :\n";
cout <<"PLEASE ENTER SUGJECT CODE STARTING FROM 1 TO 9\n";
cout <<"1. HS6151 TECHNICAL ENGLISH \n";
cout <<"2. MA6151 MATHEMATICS -1 \n";
cout <<"3. PH6151 ENGINEERING PHYSICS -1 \n";
cout <<"4. CY6151 ENGINEERING CHEMISTRY -1 \n";
cout <<"5. GE6151 COMPUTER PROGRAMMING \n";
cout <<"6. GE6152 ENGINEERING GRAPHICS \n";
cout <<"7. GE6161 COMPUTER PRACTICES LABORATORY \n";
cout <<"8. GE6162 ENGINEERING PRACTICES LABORATORY -1 \n";
cout <<"9. GE6163 ENGINEERING CHEMISTRY AND PHYSICS LABORATORY -1 \n";
cin >>choice;

switch(choice)
{


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
case 1:
   {
cout <<"HS6151 TECHNICAL ENGLISH \n";


credits = 4;
cout <<"Enter your grade in lowercase letter : \n";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 \n";
    points =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 \n";
     points =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 \n";
     points =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 \n";
     points =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 \n";
     points =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 \n";
     points =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject \n";
     points =credits*10;
}



     }




case 2:
   {
       cout <<" \n";
       cout <<" \n";
cout <<"MA6151 MATHEMATICS -1 \n";

credits1 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points1 =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points1 =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points1 =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points1 =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points1 =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points1 =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points1 =credits*10;
}



    }



case 3:
    {
 cout <<" \n";
  cout <<" \n";
cout <<"PH6151 ENGINEERING PHYSICS -1 \n ";

credits2 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points2 =credits2*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points2 =credits2*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points2 =credits2*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points2 =credits2*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points2 =credits2*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points2 =credits2*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points2 =credits2*10;
}


}


case 4:
    {
         cout <<" \n";
          cout <<" \n";
cout <<"CY6151 ENGINEERING CHEMISTRY -1 \n ";
credits3 = 3;

cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points3 =credits3*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points3 =credits3*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points3 =credits3*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points3 =credits3*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points3 =credits3*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points3=credits3*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points3 =credits3*10;
}





    }



case 5:
    {
 cout <<" \n";
  cout <<" \n";
        cout <<"GE6151 COMPUTER PROGRAMMING \n ";

credits4 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points4 =credits4*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points4 =credits4*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points4 =credits4*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points4 =credits4*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points4 =credits4*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points4 =credits4*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points4 =credits4*10;
}



   }


case 6:
    {
         cout <<" \n";
          cout <<" \n";
    cout <<"GE6152 ENGINEERING GRAPHICS \n";

credits5 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points5 =credits5*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points5 =credits5*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points5 =credits5*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points5 =credits5*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points5 =credits5*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points5 =credits5*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points5 =credits5*10;
}

    }


case 7:
    { cout <<" \n";
     cout <<" \n";
        cout <<"GE6161 COMPUTER PRACTICES LABORATORY \n";

       credits6 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points6 =credits6*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points6 =credits6*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points6 =credits6*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points6 =credits6*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points6 =credits6*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points6 =credits6*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points6 =credits6*10;
}

}


case 8:
   {
 cout <<" \n";
  cout <<" \n";
    cout <<"GE6162 ENGINEERING PRACTICES LABORATORY -1 \n ";

    credits7 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points7 =credits7*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points7 =credits7*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points7 =credits7*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points7 =credits7*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points7 =credits7*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points7 =credits7*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points7 =credits7*10;
}




    }


case 9:
    { cout <<" \n";
     cout <<" \n";
        cout <<"GE6163 ENGINEERING CHEMISTRY AND PHYSICS LABORATORY -1 \n ";

        credits8 = 1;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points8 =credits8*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points8 =credits8*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points8 =credits8*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points8 =credits8*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points8 =credits8*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points8 =credits8*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points8 =credits8*10;
}



   } break;

default:

cout <<"PLS ENTER VALID CHOICE \n ";



}
cout <<" \n";
     cout <<" \n";
g =(points+points1+points2+points3+points4+points5+points6+points7+points8);
c =(credits+credits1+credits2+credits3+credits4+credits5+credits6+credits7+credits8);
gpa=g/c;
cout <<" \n";
     cout <<" \n";

 cout << "The obtained points ";
cout <<g;

cout <<" \n";
     cout <<" \n";

 cout << "The obtained total credits ";
cout <<c;

cout <<" \n";
     cout <<" \n";


     cout <<"THE GPA OF THIS SEM1\t "<<gpa;






}
break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
case 2:
{

cout <<"SEM 2 :\n";
cout <<"PLEASE ENTER SUGJECT CODE STARTING FROM 1 TO 9\n";
cout <<"1. HS6251 TECHNICAL ENGLISH -2 \n";
cout <<"2. MA6251 MATHEMATICS -2 \n";
cout <<"3. PH6251 ENGINEERING PHYSICS -2 \n";
cout <<"4. CY6251 ENGINEERING CHEMISTRY -2 \n";
cout <<"5. EC6201 ELECTRONICS DEVICES \n";
cout <<"6. EE6252 CIRCUIT THEORY \n";
cout <<"7. GE6161 COMPUTER PRACTICES LABORATORY \n";
cout <<"8. GE6162 ENGINEERING PRACTICES LABORATORY -1 \n";
cout <<"9. GE6163 ENGINEERING CHEMISTRY AND PHYSICS LABORATORY -1 \n";
cin >>choice;

switch(choice)
{



case 1:
   {
cout <<"HS6251 TECHNICAL ENGLISH -2 \n";


credits = 4;
cout <<"Enter your grade in lowercase letter : \n";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 \n";
    points =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 \n";
     points =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 \n";
     points =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 \n";
     points =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 \n";
     points =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 \n";
     points =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject \n";
     points =credits*10;
}



     }




case 2:
   {
       cout <<" \n";
       cout <<" \n";
cout <<"MA6251 MATHEMATICS -2 \n";

credits1 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points1 =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points1 =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points1 =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points1 =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points1 =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points1 =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points1 =credits*10;
}



    }



case 3:
    {
 cout <<" \n";
  cout <<" \n";
cout <<"PH6251 ENGINEERING PHYSICS -2 \n ";

credits2 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points2 =credits2*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points2 =credits2*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points2 =credits2*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points2 =credits2*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points2 =credits2*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points2 =credits2*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points2 =credits2*10;
}


}


case 4:
    {
         cout <<" \n";
          cout <<" \n";
cout <<"CY6251 ENGINEERING CHEMISTRY -2 \n ";
credits3 = 3;

cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points3 =credits3*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points3 =credits3*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points3 =credits3*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points3 =credits3*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points3 =credits3*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points3=credits3*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points3 =credits3*10;
}





    }



case 5:
    {
 cout <<" \n";
  cout <<" \n";
        cout <<"EC6201 ELECTRONIC DEVICES \n ";

credits4 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points4 =credits4*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points4 =credits4*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points4 =credits4*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points4 =credits4*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points4 =credits4*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points4 =credits4*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points4 =credits4*10;
}



   }


case 6:
    {
         cout <<" \n";
          cout <<" \n";
    cout <<"EE6201 CIRCUIT THEORY \n";

credits5 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points5 =credits5*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points5 =credits5*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points5 =credits5*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points5 =credits5*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points5 =credits5*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points5 =credits5*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points5 =credits5*10;
}

    }





case 7:
   {
 cout <<" \n";
  cout <<" \n";
    cout <<"GE6162 ENGINEERING PRACTICES LABORATORY -1 \n ";

    credits7 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points7 =credits7*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points7 =credits7*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points7 =credits7*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points7 =credits7*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points7 =credits7*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points7 =credits7*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points7 =credits7*10;
}




    }


case 8:
    { cout <<" \n";
     cout <<" \n";
        cout <<"GE6163 ENGINEERING CHEMISTRY AND PHYSICS LABORATORY -2 \n ";

        credits8 = 1;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points8 =credits8*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points8 =credits8*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points8 =credits8*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points8 =credits8*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points8 =credits8*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points8 =credits8*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points8 =credits8*10;
}



   } break;

default:

cout <<"PLS ENTER VALID CHOICE \n ";



}
cout <<" \n";
     cout <<" \n";
g =(points+points1+points2+points3+points4+points5+points6+points7+points8);
c =(credits+credits1+credits2+credits3+credits4+credits5+credits6+credits7+credits8);
gpa=g/c;
cout <<" \n";
     cout <<" \n";

 cout << "The obtained points ";
cout <<g;

cout <<" \n";
     cout <<" \n";

 cout << "The obtained total credits ";
cout <<c;

cout <<" \n";
     cout <<" \n";


     cout <<"THE GPA OF THIS SEM2\t "<<gpa;









}break;
case 3:
{
cout <<"SEM 3 :\n";
cout <<"PLEASE ENTER SUGJECT CODE STARTING FROM 1 TO 9\n";
cout <<"1. EC6303 SIGNAL AND SYSTEMS  \n";
cout <<"2. MA6151 MATHEMATICS -3 \n";
cout <<"3. EC6301 OOPS \n";
cout <<"4. EC6302 DIGITAL ELECTRONICS  \n";
cout <<"5. EE6352 ELECTRICAL ENGINEERING INSTRUMENTATION \n";
cout <<"6. EC6304 ELECTRONICS CIRCUITS-1 \n";
cout <<"7.EC6311 ANALOG AND CIRCUITS  LABORATORY  \n";
cout <<"8.EC6312 OOPS LABORATORY -1  \n";

cin >>choice;

switch(choice)
{



case 1:
   {
cout <<"EC6303 SIGNAL AND SYSTEMS \n";


credits = 4;
cout <<"Enter your grade in lowercase letter : \n";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 \n";
    points =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 \n";
     points =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 \n";
     points =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 \n";
     points =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 \n";
     points =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 \n";
     points =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject \n";
     points =credits*10;
}



     }




case 2:
   {
       cout <<" \n";
       cout <<" \n";
cout <<"MA6351 MATHEMATICS -3 \n";

credits1 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points1 =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points1 =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points1 =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points1 =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points1 =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points1 =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points1 =credits*10;
}



    }



case 3:
    {
 cout <<" \n";
  cout <<" \n";
cout <<"EC6301 OOPS \n ";

credits2 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points2 =credits2*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points2 =credits2*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points2 =credits2*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points2 =credits2*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points2 =credits2*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points2 =credits2*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points2 =credits2*10;
}


}


case 4:
    {
         cout <<" \n";
          cout <<" \n";
cout <<"EC6302 DIGITAL ELECTRONICS \n ";
credits3 = 3;

cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points3 =credits3*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points3 =credits3*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points3 =credits3*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points3 =credits3*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points3 =credits3*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points3=credits3*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points3 =credits3*10;
}





    }



case 5:
    {
 cout <<" \n";
  cout <<" \n";
        cout <<"EE6352 ELECTRICAL ENGINEERING INSTRUMENTATION\n ";

credits4 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points4 =credits4*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points4 =credits4*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points4 =credits4*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points4 =credits4*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points4 =credits4*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points4 =credits4*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points4 =credits4*10;
}



   }


case 6:
    {
         cout <<" \n";
          cout <<" \n";
    cout <<"EC6304 ELECTRONICS CIRCUITS-1 \n";

credits5 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points5 =credits5*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points5 =credits5*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points5 =credits5*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points5 =credits5*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points5 =credits5*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points5 =credits5*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points5 =credits5*10;
}

    }


case 7:
    { cout <<" \n";
     cout <<" \n";
        cout <<"EC6311 ANALOG AND CIRCUITS  LABORATORY \n";

       credits6 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points6 =credits6*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points6 =credits6*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points6 =credits6*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points6 =credits6*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points6 =credits6*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points6 =credits6*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points6 =credits6*10;
}

}


case 8:
   {
 cout <<" \n";
  cout <<" \n";
    cout <<"EC6312 OOPS LABORATORY -1 \n ";

    credits7 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points7 =credits7*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points7 =credits7*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points7 =credits7*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points7 =credits7*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points7 =credits7*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points7 =credits7*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points7 =credits7*10;
}




    }


 break;

default:

cout <<"PLS ENTER VALID CHOICE \n ";



}
cout <<" \n";
     cout <<" \n";
g =(points+points1+points2+points3+points4+points5+points6+points7+points8);
c =(credits+credits1+credits2+credits3+credits4+credits5+credits6+credits7+credits8);
gpa=g/c;
cout <<" \n";
     cout <<" \n";

 cout << "The obtained points ";
cout <<g;

cout <<" \n";
     cout <<" \n";

 cout << "The obtained total credits ";
cout <<c;

cout <<" \n";
     cout <<" \n";


     cout <<"THE GPA OF THIS SEM1\t "<<gpa;




}break;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
case 4:
{


cout <<"SEM 4 :\n";
cout <<"PLEASE ENTER SUGJECT CODE STARTING FROM 1 TO 9\n";
cout <<"1. EC6403 ELECTROMAGNECTIC FILEDS \n";
cout <<"2. MA6451 MATHEMATICS -4 \n";
cout <<"3. EC6401 ELECTRONICS CIRCUITS -2 \n";
cout <<"4. EC6402 COMMUNICATION THEORY \n";
cout <<"5. EC6404 LIC  \n";
cout <<"6. EC6405 CONTROL SYSTEM ENGINEERING \n";
cout <<"7. EC6411 CIRCUIT SIMULATION LABORATORY \n";
cout <<"8. EE6461 CONTROL SYSTEM LABORATORY \n";
cout <<"9. EC6412 LIC LABORATORY \n";
cin >>choice;

switch(choice)
{



case 1:
   {
cout <<"EC6403 ELECTROMAGNECTIC FILEDS \n";


credits = 4;
cout <<"Enter your grade in lowercase letter : \n";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 \n";
    points =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 \n";
     points =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 \n";
     points =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 \n";
     points =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 \n";
     points =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 \n";
     points =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject \n";
     points =credits*10;
}



     }




case 2:
   {
       cout <<" \n";
       cout <<" \n";
cout <<"MA6451 MATHEMATICS -4 \n";

credits1 = 4;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points1 =credits*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points1 =credits*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points1 =credits*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points1 =credits*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points1 =credits*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points1 =credits*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points1 =credits*10;
}



    }



case 3:
    {
 cout <<" \n";
  cout <<" \n";
cout <<"EC6401 ELECTRONICS CIRCUITS -2 \n ";

credits2 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points2 =credits2*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points2 =credits2*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points2 =credits2*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points2 =credits2*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points2 =credits2*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points2 =credits2*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points2 =credits2*10;
}


}


case 4:
    {
         cout <<" \n";
          cout <<" \n";
cout <<"EC6402 COMMUNICATION THEORY \n ";
credits3 = 3;

cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points3 =credits3*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points3 =credits3*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points3 =credits3*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points3 =credits3*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points3 =credits3*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points3=credits3*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points3 =credits3*10;
}





    }



case 5:
    {
 cout <<" \n";
  cout <<" \n";
        cout <<"EC6404 LIC \n ";

credits4 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points4 =credits4*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points4 =credits4*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points4 =credits4*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points4 =credits4*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points4 =credits4*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points4 =credits4*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points4 =credits4*10;
}



   }


case 6:
    {
         cout <<" \n";
          cout <<" \n";
    cout <<"EC6405 CONTROL SYSTEM ENGINEERING \n";

credits5 = 3;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points5 =credits5*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points5 =credits5*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points5 =credits5*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points5 =credits5*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points5 =credits5*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points5 =credits5*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points5 =credits5*10;
}

    }


case 7:
    { cout <<" \n";
     cout <<" \n";
        cout <<"EC6411 CIRCUIT SIMULATION LABORATORY \n";

       credits6 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points6 =credits6*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points6 =credits6*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points6 =credits6*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points6 =credits6*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points6 =credits6*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points6 =credits6*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points6 =credits6*10;
}

}


case 8:
   {
 cout <<" \n";
  cout <<" \n";
    cout <<"EE6461 CONTROL SYSTEM LABORATORY  \n ";

    credits7 = 2;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points7 =credits7*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points7 =credits7*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points7 =credits7*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points7 =credits7*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points7 =credits7*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points7 =credits7*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points7 =credits7*10;
}




    }


case 9:
    { cout <<" \n";
     cout <<" \n";
        cout <<"EC6412 LIC LABORATORY \n ";

        credits8 = 1;
cout <<"Enter your grade in lowercase letter : ";
cin >>grade;
  if (strcmp(grade, dummy1)==0 )
{
    cout <<"Grade points is 10 ";
    points8 =credits8*10;
}
 else if (strcmp(grade, dummy2)==0 )
{
    cout <<"Grade points is 9 ";
     points8 =credits8*9;
}
else if (strcmp(grade, dummy3)==0 )
{
    cout <<"Grade points is 8 ";
     points8 =credits8*8;
}
else if (strcmp(grade, dummy4)==0 )
{
    cout <<"Grade points is 7 ";
     points8 =credits8*7;
}
else if (strcmp(grade, dummy5)==0 )
{
    cout <<"Grade points is 6 ";
     points8 =credits8*6;
}
else if (strcmp(grade, dummy6)==0 )
{
    cout <<"Grade points is 5 ";
     points8 =credits8*5;
}
else
{
    cout <<"Grade points is 10 but you have failed in this subject ";
     points8 =credits8*10;
}



   } break;

default:

cout <<"PLS ENTER VALID CHOICE \n ";



}
cout <<" \n";
     cout <<" \n";
g =(points+points1+points2+points3+points4+points5+points6+points7+points8);
c =(credits+credits1+credits2+credits3+credits4+credits5+credits6+credits7+credits8);
gpa=g/c;
cout <<" \n";
     cout <<" \n";

 cout << "The obtained points ";
cout <<g;

cout <<" \n";
     cout <<" \n";

 cout << "The obtained total credits ";
cout <<c;

cout <<" \n";
     cout <<" \n";


     cout <<"THE GPA OF THIS SEM1\t "<<gpa;




}break;
case 5:
{

cout << "COOMING SOON ";



}break;
case 6:
{


cout << "COOMING SOON ";


}break;
case 7:
{
cout << "COOMING SOON ";




}break;
case 8:
{

cout << "COOMING SOON ";



}break;



default:

cout <<"PLS ENTER VALID CHOICE \n ";
 }




}


else if(strcmp(select, dummy8)==0 )
{
    cout <<"you have selected CGPA ";

    cout <<" enter GPA for the all sem \n";

    cout <<"1. SEM1 \n";

    cin >>gpa1;
cout <<"2. SEM2 \n";

cin >>gpa2;


cout <<"3. SEM3 \n";
cin >>gpa3;




cout <<"4. SEM4 \n";
cin >>gpa4;


cout <<"5. SEM5 \n";

cin >>gpa5;


cout <<"6. SEM6 \n";
cin >>gpa6;



cout <<"7. SEM7 \n";
cin >>gpa7;



cout <<"8. SEM8 \n";
cin >>gpa8;
finalgpa =(gpa1+gpa2+gpa3+gpa4+gpa5+gpa6+gpa7+gpa8)/8;

cout <<"YOUR CGPA IS";
    cout <<finalgpa;
}
else
{
    cout<< "pls give correct command";
}



    return 0;
}
