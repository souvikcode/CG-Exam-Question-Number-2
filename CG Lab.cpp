#include <graphics.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
#include <conio.h>  


class bresen  
{  
    float x, y, x1, y1, x2, y2, dx, dy, m, c, xend;  
    public:  
    void get ();  
    void cal ();  
};  
 
 void bresen :: get ()  
{  
    printf ("Enter start & end points such that the straight line lines inside rectangle");  
    printf ("enter x1, y1, x2, y2 :");  
    scanf ("%f%f%f%f",&x1, &y1, &x2, &y2)  ;
}

void bresen ::cal ()  
{  
    /* request auto detection */  
    int gdriver = DETECT,gmode, errorcode;  
    /* initialize graphics and local variables */  
    initgraph (&gdriver, &gmode, " ");  
    /* read result of initialization */  
    errorcode = graphresult ();  
    
    dx = x2-x1;  
    dy=y2-y1;  
    m = dy/dx;  
    c = y1 - (m * x1);  
    if (dx<0)  
    {  
        x=x2;  
        y=y2;  
        xend=x1;  
    }  
    else  
    {  
        x=x1;  
        y=y1;  
        xend=x2;  
    }  
while (x<=xend)  
    {  
        putpixel (x, y, RED);  
        y++;  
        y=(x*x) +c;  }}
        
int main()
{
	// gm is Graphics mode which is a computer display 
    // mode that generates image using pixels. 
    // DETECT is a macro defined in "graphics.h" header file 
    int gd = DETECT, gm; 
  
    // location of left, top, right, bottom 
    int left, top; 
    int right, bottom; 
    
    printf("enter left, top, right, bottom of the rectangle :");
	scanf("%d%d%d%d",&left,&top,&right,&bottom);

    bresen b;  
    b.get ();  
    
     // initgraph initializes the graphics system 
    // by loading a graphics driver from disk 
    initgraph(&gd, &gm, ""); 
    
    
    // rectangle function 
    rectangle(left, top, right, bottom); 
    b.cal ();  
    printf("If you want to translate, enter 1, if you want to shear enter 2, and if you don't want to do anything enter 3: ");
int a ;
scanf("%d", &a);
if(a==1){
printf("Give the translation parameters");
int translation_param;
printf("If you want to translate horizontally enter 1 else 0 ");
scanf("%d", &translation_param);
if(translation_param== 1){
//Translating the rectangle, which means shifting the coordinates by the translation parameters
printf("Give the value to be shifted:");
int k;
std::cin>>k
x1 = x1+k;
x2 = x2+k;
x3 = x3+k;
x4 = x4+k;
}else{
y1 = y1+k;
y2 = y2+k;
y3 = y3+k;
y4 = y4+k;
}
}
else if (a==2){
printf("If you want to shear into X direction enter 1 else 0");
int translation_param;
std :: cin>>translation_param;
if(translation_param==1){
printf("Enter the shearing parameter: ");
int k;
std::cin>>k;
//for shearing we change the x coordinates by k*x , where k is the shearing parameter
x1 = x1 + k*x1;
x2 = x2 + k*x2;
x3 = x3 + k*x3;
x4 = x4 + k*x4;
}else if(translation_param==1){
printf("Enter the shearing parameter: ");
int k;
std::cin>>k;
//for shearing we change the x coordinates by k*x , where k is the shearing parameter
y1 = y1 + k*y1;
y2 = y2 + k*y2;
y3 = y3 + k*y3;
y4 = y4 + k*y4;
}
}
    getch(); 
  
    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system .
	closegraph(); 
}


