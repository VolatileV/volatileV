

#include <stdio.h>


//prototype
float rectangle_area(float a, float b);
float circle_area(float r);
float square_area(float s);


//main function
int main(){


    //infinite loop
    for(;1;){


        char ch,no;
        float s,area1;
        float l,b,area;
        float r,rr;


        //statement taking input as square/rectangle/circle
        printf("\nEnter what figure's area you desire (S/R/C) : ");
        scanf(" %c",&ch);



        if(ch=='S') {



            printf("\nEnter Side : ");
            scanf("%f",&s);


            area1=square_area(s);


            printf("\n\nArea of Square is %f",area1);
            
            
            printf("\n\n\nDo you want to repeat? (Y/N) : ");
            scanf(" %c",&no);
    

            if(no=='N'){
        
                printf("Thank You...");
        
                break;
    
            }
    
            else printf("\n Go on...");    
    
        }

        else if (ch=='R')
        {

        
            printf("\nEnter Length : ");
            scanf("%f",&l);


            printf("\nEnter Breadth : ");
            scanf("%f",&b);


            printf("\n\nArea of Rectangle is %f",rectangle_area(l,b));
            
            
            printf("\n\n\nDo you want to repeat? (Y/N) : ");
            scanf(" %c",&no);
    
    
            if(no=='N'){
        
                printf("Thank You...");
        
                break;
    
            }
    
            else printf("\nGo on...");    
    
        }
        
        else if (ch=='C'){



            printf("\nEnter Radius : ");
            scanf("%f",&r);


            printf("\n\nArea of Circle is %f",circle_area(r));


            printf("\n\n\nDo you want to repeat? (Y/N) : ");
            scanf(" %c",&no);


            if(no=='N'){
        
                printf("Thank You...");
        
                break;
    
            }
            else printf("\n Go on...");

        }
        
        else {
            
            printf("\n\nWrong Input...");
            
            
            printf("\n\n\nDo you want to repeat? (Y/N) : ");
            scanf(" %c",&no);


            if(no=='N'){
        
                printf("Thank You...");
        
                break;
    
            }


            else printf("\n Go on...");    

        }

    }

    return 0;

}

float rectangle_area(float a, float b){

    return a * b;

}

float circle_area(float r){

    return 3.14 * r * r;

}

float square_area(float s){

    return s * s;

}

