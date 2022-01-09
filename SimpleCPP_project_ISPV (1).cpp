#include <simplecpp>

main_program{
  initCanvas("Pattern Simulator",1300,800);

  float b1x=100,b1y=100,
        b2x=200,b2y=100,
        b3x=300,b3y=100,
        b4x=400,b4y=100,
        b5x=500,b5y=100,
        b6x=600,b6y=100,
        b7x=700,b7y=100,
        b8x=800,b8y=100,
        b9x=900,b9y=100,
        b10x=1000,b10y=100,
        b11x=1100,b11y=50,
        b12x=1200,b12y=50,
        bWidth=100,bHeight=30;



  Rectangle button1(b1x,b1y,bWidth,bHeight),
            button2(b2x,b2y,bWidth,bHeight),
            button3(b3x,b3y,bWidth,bHeight),
            button4(b4x,b4y,bWidth,bHeight),
            button5(b5x,b5y,bWidth,bHeight),
            button6(b6x,b6y,bWidth,bHeight),
            button7(b7x,b7y,bWidth,bHeight),
            button8(b8x,b8y,bWidth,bHeight),
            button9(b9x,b9y,bWidth,bHeight),
            button10(b10x,b10y,bWidth,bHeight),
            button11(b11x,b11y,bWidth,bHeight),
            button12(b12x,b12y,bWidth,bHeight);

  Text t1(b1x,b1y,"Pattern 1"),
        t2(b2x,b2y,"Pattern 2"),
        t3(b3x,b3y,"Pattern 3"),
        t4(b4x,b4y,"Pattern 4"),
        t5(b5x,b5y,"Pattern 5"),
        t6(b6x,b6y,"Pattern 6"),
         t7(b7x,b7y,"Pattern 7"),
          t8(b8x,b8y,"Pattern 8"),
           t9(b9x,b9y,"Pattern 9"),
            t10(b10x,b10y,"Pattern 10"),
        t11(b11x,b11y,"About"),
        t12(b12x,b12y,"ThankYou");
  Turtle t;

  repeat(100){
    int clickPos = getClick();
    int cx = clickPos/65536;
    int cy = clickPos % 65536;
    int btn1=b1x-bWidth/2<= cx && cx<= b1x+bWidth/2 &&
       b1y-bHeight/2 <= cy && cy <= b1y+bHeight/2;

    if(btn1) {
        int n=50,h=0;
        for(int i=0;i<150;i++){
            h+=1/n;
            t.forward(i*2);
            t.left(145);
            wait(0.02);
            }

            return 0;
        }



    if(b2x-bWidth/2<= cx && cx<= b2x+bWidth/2 &&
       b2y-bHeight/2 <= cy && cy <= b2y+bHeight/2){

       int n=36,h=0;
       for(int i=0;i<n;i++){
            h+=1/n;
            t.left(10);
            for(int j=0;j<5;j++){
                t.forward(200);
                t.left(144);
                wait(0.1);
                }
        }

       return 0;
       }


    if(b3x-bWidth/2<= cx && cx<= b3x+bWidth/2 &&
       b3y-bHeight/2 <= cy && cy <= b3y+bHeight/2){

       int n=100,h=0;
       for(int i=0;i<30;i++){
            h+=1/n;

            for(int j=0;j<2;j++){
            t.left(250);
            t.forward(i*3);
                for(int v=0;v<3;v++){
                t.left(20);
                t.forward(22);
                }
            }
        }

       return 0;
       }


    if(b4x-bWidth/2<= cx && cx<= b4x+bWidth/2 &&
       b4y-bHeight/2 <= cy && cy <= b4y+bHeight/2){

       int n=150,h=0;
        t.left(180);
        for(int i=0;i<50;i++){
            h+=1/n;
            t.left(144);
            t.forward(i*5);
        }

       return 0;
       }


    if(b5x-bWidth/2<= cx && cx<= b5x+bWidth/2 &&
       b5y-bHeight/2 <= cy && cy <= b5y+bHeight/2){

       int n=200,h=0;
       for(int i=0;i<120;i++){
            t.left(59);
            for(int j=0;j<1;j++){
            t.forward(i*2);
            h+=1/n;
            }
       }

       return 0;
       }


    if(b6x-bWidth/2<= cx && cx<= b6x+bWidth/2 &&
       b6y-bHeight/2 <= cy && cy <= b6y+bHeight/2){

       for(int i=0;i<120;i++){

            t.forward(i*4);
            t.left(137);       }

       return 0;
       }
if(b7x-bWidth/2<= cx && cx<= b7x+bWidth/2 &&
       b7y-bHeight/2 <= cy && cy <= b7y+bHeight/2)
       {
       Turtle t,t1,t2,t3;
repeat(4)
{

t.forward(50);
t.right(85);
t.forward(50);
t.right(85);
t.forward(50);
t.right(85);
t.forward(50);
t.right(85);
t.forward(50);
t.right(85);

}

t1.penUp();
t1.left(180);
t1.forward(50);
t1.right(90);
t1.forward(50);
t1.right(90);
t1.penDown();
t1.setColor(BLUE);
repeat(12){
t1.forward(150);
t1.right(85);
t1.forward(150);
t1.right(85);
t1.forward(150);
t1.right(85);
t1.forward(150);
t1.right(85);
t1.forward(150);
t1.right(85);
}
t2.setColor(GREEN);
t2.penUp();
t2.left(180);
t2.forward(100);
t2.right(90);
t2.forward(100);
t2.right(90);
t2.penDown();
repeat(20){
t2.forward(250);
t2.right(85);
t2.forward(250);
t2.right(85);
t2.forward(250);
t2.right(85);
t2.forward(250);
t2.right(85);
t2.forward(250);
t2.right(85);
}
t3.setColor(YELLOW);
t3.penUp();
t3.left(180);
t3.forward(150);
t3.right(90);
t3.forward(150);
t3.right(90);
t3.penDown();
repeat(24){
t3.forward(350);
t3.right(85);
t3.forward(350);
t3.right(85);
t3.forward(350);
t3.right(85);
t3.forward(350);
t3.right(85);
t3.forward(350);
t3.right(85);
}

wait(1);
return 0;
}


       if(b8x-bWidth/2<= cx && cx<= b8x+bWidth/2 &&
       b8y-bHeight/2 <= cy && cy <= b8y+bHeight/2)
       {
       Turtle t;
int x=0;
repeat(50)
{
t.forward(1+x);
t.left(18);

repeat(10){
t.setColor(BLUE);
t.forward(4);
t.left(18);
x=x+1;
t.setColor(GREEN);
}
}
return 0;

}
       if(b9x-bWidth/2<= cx && cx<= b9x+bWidth/2 &&
       b9y-bHeight/2 <= cy && cy <= b9y+bHeight/2)
       {
     Turtle t;
int x=0;
repeat(50)
{
t.forward(20+x);
t.setColor(RED);

x=x+5;

repeat(5)
{
t.left(85);
t.forward(10);
t.setColor(BLUE);
t.right(85);
t.forward(10);
t.setColor(GREEN);
t.left(85);
t.forward(10);

}
}
wait(1);
return 0;
}
       if(b10x-bWidth/2<= cx && cx<= b10x+bWidth/2 &&
       b10y-bHeight/2 <= cy && cy <= b10y+bHeight/2)
       {

       Turtle t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t18,t19,t20;

repeat(25){
{

t1.forward(5);
t2.forward(10);
t3.forward(15);
t4.forward(20);
t5.forward(25);
t6.forward(30);
t7.forward(35);
t8.forward(40);
t9.forward(45);



t1.setColor(RED);
t2.setColor(BLUE);
t3.setColor(YELLOW);
t4.setColor(GREEN);
t5.setColor(BLACK);
t6.setColor(RED);
t7.setColor(BLUE);
t8.setColor(YELLOW);
t9.setColor(GREEN);
t10.setColor(BLACK);

t1.left(360.0/18);
t2.left(360.0/18);
t3.left(360.0/18);
t4.left(360.0/18);
t5.left(360.0/18);
t6.left(360.0/18);
t7.left(360.0/18);
t8.left(360.0/18);
t9.left(360.0/18);
t10.left(360.0/18);

}

}
return 0;
}

    if(b11x-bWidth/2<= cx && cx<= b11x+bWidth/2 &&
       b11y-bHeight/2 <= cy && cy <= b11y+bHeight/2){

    Rectangle r1(0,0,8000,7000);
    r1.setColor(COLOR("yellow"));
    r1.setFill(true);

        Text t1(b1x,b1y+100,"Project By:"),
        t2(b2x,b2y+250,"Ivan Azim"),
        t3(b3x,b3y+250,"Shubham Bhat"),
        t4(b4x,b4y+250,"Priti Desai"),
        t5(b5x,b5y+250,"Ved Sukhathankar");
        wait(10);
       }


    if(b12x-bWidth/2<= cx && cx<= b12x+bWidth/2 &&
       b12y-bHeight/2 <= cy && cy <= b12y+bHeight/2){

    Rectangle r3(0,0,8000,7000);
    r3.setColor(COLOR("orange"));
    r3.setFill(true);

        Line l1(100,50,100,250);
   Circle a(100,250,40);
   Text t1(100,250,"T");
    Line l2(200,50,200,300);
   Circle h(200,300,40);
   Text t2(200,300,"H");

    Line l3(280,50,280,250);
   Circle b(280,250,40);
   Text t3(280,250,"A");
       Line l4(330,50,330,320);
   Circle i(330,320,40);
   Text t4(330,320,"N");

    Line l5(430,50,430,250);
   Circle c(430,250,40);
   Text t5(430,250,"K");

    Line l6(530,50,530,250);
   Circle d(530,250,40);
    Text t7(530,250,"Y");
        Line l7(630,50,630,300);
  Circle k(630,300,40);
  Text t8(630,300,"O");

    Line l8(700,50,700,250);
   Circle e(700,250,40);
   Text t9(700,250,"U");

      while(1){



      a.setColor(RED);
      a.setFill();
      h.setColor(RED);
      h.setFill();



     b.setColor(BLUE);
      b.setFill();
       i.setColor(BLUE);
      i.setFill();

       c.setColor(RED);
      c.setFill();


       d.setColor(BLUE);
      d.setFill();
      k.setColor(BLUE);
      k.setFill();


       e.setColor(RED);
      e.setFill();


      wait(1);


     a.move(0,20);
      t1.move(0,20);
    b.move(0,20);
      t3.move(0,20);
    c.move(0,20);
      t5.move(0,20);
    d.move(0,20);
      t7.move(0,20);
   e.move(0,20);
      t9.move(0,20);


  h.move(0,20);
      t2.move(0,20);
  i.move(0,20);
      t4.move(0,20);

   k.move(0,20);
      t8.move(0,20);



    a.move(0,-20);
      t1.move(0,-20);
    b.move(0,-20);
      t3.move(0,-20);
 c.move(0,-20);
      t5.move(0,-20);
    d.move(0,-20);
      t7.move(0,-20);
 e.move(0,-20);
      t9.move(0,-20);


    h.move(0,-20);
      t2.move(0,-20);
    i.move(0,-20);
      t4.move(0,-20);

  k.move(0,-20);
      t8.move(0,-20);


      wait(1);

      a.setColor(BLUE);
      a.setFill();
       h.setColor(BLUE);
      h.setFill();
 b.setColor(RED);
      b.setFill();
      i.setColor(RED);
      i.setFill();

 c.setColor(BLUE);
      c.setFill();


        d.setColor(RED);
      d.setFill();
      k.setColor(RED);
      k.setFill();

       e.setColor(BLUE);
      e.setFill();

       wait(1);


      a.setColor(GREEN);
      a.setFill();
       h.setColor(GREEN);
      h.setFill();
       b.setColor(GREEN);
      b.setFill();
       i.setColor(GREEN);
      i.setFill();
c.setColor(GREEN);
      c.setFill();

       d.setColor(GREEN);
      d.setFill();
      k.setColor(GREEN);
      k.setFill();

       e.setColor(GREEN);
      e.setFill();


      wait(1);
      }

      wait(5);
       }
  }
}
