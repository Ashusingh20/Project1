#include<conio.h>
#include<stdio.h>
#include<time.h>
int ia=0;
static int sia=0;
typedef struct sr{
int dude;
int modi;
struct sr *tumtum,*bro;
}sr;
sr *pt(sr *,int);
sr *pb(sr *,int);
void  ft(sr *);
void  fg(sr *);
void  fA(sr *);
int   fat( sr *);
sr *pd(sr *);
sr *pg(sr *);
sr *pa(sr *);
sr *pab(sr *);
sr *pc(sr *);
sr *pd(sr *);
int fb(sr *);

void main()
{
    sr *pn=NULL;
int ix,in,i,iat;
long double dk=0;
clock_t timepass,bus;
do{printf("\n%d",sia);
printf("\n1) : ");
printf("\n2) : "); 
printf("\n3) : ");
 printf("\n4) : ");
  printf("\n5) : ");
  printf("\n Kuch bhi type kar de : ");
   scanf("%d",&iat);

   switch(iat){
case 1:printf("\nKuch bhi type kar de :");
scanf("%d",&in);
       printf("\n Kuch bhi type kar de :");
    pn=NULL;
 timepass = clock();
  for(i=0;i<in;i++) {
                        scanf("%d",&ix);
   timepass = clock();
         pn=tata_ko_mila_bata(pn,ix);
   bus = clock();
             dk = dk + bus-timepass ;
              }
        printf("Nahi samaz mai aa raha hai = %ld",dk);
    break;
 case 2
:printf("\nKuch bhi type kar de : ");
   scanf("%d",&ix);
     pn=tata_ko_mila_bata(pn,ix);
  break;
  case 3:printf("\nKuch bhi type kar de : ");
     scanf("%d",&ix);
   pn=bata_ko_mila_tata(pn,ix);
 break;
  case 4:
   printf("\nprint :\n");      
     fg(pn);
printf("\nprint :\n");
     tutu(pn);
 printf("\nprint :\n");
             Amit(pn);
        printf("%d",ia);
              printf("\nprint :\n");
    koitopasskarde(pn,0);
   break;
  }}
  while(iat!=5);
  }
   sr * tata_ko_mila_bata(sr *end,int x)
   {
if(end==NULL)
    {
end=(sr*)malloc(sizeof(sr));
  end->modi=x;
 end->bro=NULL;
end->tumtum=NULL;
 }
    else  if(x > end->modi)     {
            end->tumtum=tata_ko_mila_bata(end->tumtum,x);
             if(fb(end)==-2) 
             if(x>end->tumtum->modi) end=a(end);
               else end=d(end);
            }
 else  if(x<end->modi)            {
   end->bro=tata_ko_mila_bata(end->bro,x);
 if(fb(end)==2)
                    if(x < end->bro->modi)
   end=b(end);  
   else
  end=c(end);            
  }
  end->dude=tomtom(end);
   return(end);
} 
sr * bata_ko_mila_tata(sr *end,int x)
{       sr *p; if(end==NULL) {
        return NULL;  
         } 
         else    if(x > end->modi)
  {           end->tumtum=bata_ko_mila_tata(end->tumtum,x);      
        if(busbahuthogaya(end)==2)
if(busbahuthogaya(end->bro)>=0)                  
  end=b(end);
else                  
  end=c(end);     
     }
else           
 if(x<end->modi)             
    {
end->bro=bata_ko_mila_tata(end->bro,x);
  if(busbahuthogaya(end)==-2)// windup
                        if(busbahuthogaya(end->tumtum)<=0)    
                                               end=a(end);
 else                            
 end=d(end);
                }         
                   else              {
                                 if(end->tumtum !=NULL)     
                                       {
   p=end->tumtum;                    
     while(p->bro != NULL)
   p=p->bro;
 end->modi=p->modi;
     end->tumtum=bata_ko_mila_tata(end->tumtum,p->modi);
if(busbahuthogaya(end)==2)// windup
  if(busbahuthogaya(end->bro)>=0)               
             end=b(end);
                        else                
                               end=c(end);           
                                       }
                  else                
                     return(end->bro);     
                       }
    end->dude=tomtom(end);
    return(end);
    }
int tomtom(sr *end)
{
    int lh,rh;
    if(end==NULL)     
       return(0);
    if(end->bro==NULL)    
        lh=0;
    else
        lh=1+end->bro->dude;  
          if(end->tumtum==NULL)
        rh=0;   
         else
        rh=1+end->tumtum->dude;  
          if(lh>rh)
        return(lh);  
          return(rh);}
sr * dimagghumrahahai(sr *x){ 
       sr *y;
    y=x->bro;  
      x->bro=y->tumtum;  
        y->tumtum=x;
    x->dude=tomtom(x);   
     y->dude=tomtom(y);  
       return(y);
       }
sr * ghumrahahaidimag(sr *x)
{
    sr *y;  
      y=x->tumtum;
    x->tumtum=y->bro;
 y->bro=x;
x->dude=tomtom(x);
    y->dude=tomtom(y);
return(y);		
	}
		sr * a(sr *end)
{ 
    sia=sia+1;
end=ghumrahahaidimag(end);
    return(end);
    }
sr * b(sr *end){
end=dimagghumrahahai(end);  
  return(end);
}
sr * c(sr *end){  
      end->bro=ghumrahahaidimag(end->bro);
end=dimagghumrahahai(end);
    return(end);
    } 
    sr * d(sr *end)    {
    end->tumtum=dimagghumrahahai(end->tumtum);
    end=ghumrahahaidimag(end);
    return(end);
    }
int busbahuthogaya(sr *end){  
      int lh,rh;   
       if(end==NULL)
    return(0); 
       if(end->bro==NULL)    
           lh=0;   
            else   
                 lh=1+end->bro->dude;  
                   if(end->tumtum==NULL)  
                         rh=0;
else      
  rh=1+end->tumtum->dude;
return(lh-rh);
}
void gayekamsay(sr *end){
if(end!=NULL)
{       
     gayekamsay(end->bro);
    gayekamsay(end->tumtum);       
     printf(" %d(busbahuthogaya=%d)",end->modi,busbahuthogaya(end));  
       }
       }
void tutu(sr *end){  
      if(end!=NULL)   
       {        printf(" %d(busbahuthogaya=%d)",end->modi,busbahuthogaya(end));
tutu(end->bro);   
     tutu(end->tumtum);    
     }}
void Amit(sr *end){ 
       if(end!=NULL){
    Amit(end->bro);
        {
            printf(" %d(busbahuthogaya=%d)",end->modi,busbahuthogaya(end));
            if ((end->bro==NULL )&(end->tumtum == NULL)) ia=ia+end->modi;
}
        Amit(end->tumtum);
        }}
        void koitopasskarde(sr *t, int depth)    {
     if (t != NULL){
         printf(" %d(busbahuthogaya=%d)",t->modi,busbahuthogaya(t));
}      if (t != NULL)  
     {
             koitopasskarde(t->bro, depth+1);
             if (depth % 2 == 0) koitopasskarde(t->tumtum, depth+1);
}
}
