#include<stdio.h>
#include<string.h>
void main()
{
        FILE *f1,*f2,*f3,*f4;
        int lc,f;
        char m1[20],la[20],op[20],otp[20],opc[20];
        f1=fopen("input.txt","r");
        f2=fopen("optab.txt","r");
        f3=fopen("symtab.txt","w");
        f4=fopen("out.txt","w");
        while(fscanf(f1,"%s%s%s",la,m1,op)!=EOF){
        if(strcmp(la,"**")==0)
        {
        if(strcmp(m1,"START")==0)
        {
                
                fprintf(f4,"\t%s\t%s\t%s\n",la,m1,op);
                lc=(atoi(op));
        }
        else
        {
                rewind(f2);
                f=0;
        
        while(fscanf(f2,"%s\t%s",otp,opc)!=EOF){
       
                        if(strcmp(m1,otp)==0)
                        {
                                f=1;
                                
                               
                        }}
                        if(f==1){
                        fprintf(f4,"\n%d\t%s\t%s\t%s",lc,la,m1,op);
                        lc+=3;
                        }
                        }}
                        else
                        {
                      
                        if(strcmp(m1,"WORD")==0)
                        {
                         fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
                         fprintf(f3,"\n%d%s",lc,la);
                                lc=lc+3;
                        }
                        else if(strcmp(m1,"RESW")==0)
                        {
                          fprintf(f3,"\n%d\t%s\n",lc,la);
                          fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op); 
                                lc=lc+(3*(atoi(op)));
                        }
                        else if(strcmp(m1,"BYTE")==0)
                        {
                                fprintf(f3,"\n%d\t%s\n",lc,la);
                                fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
                                        lc=lc+1;
                                
                        }
                        else if(strcmp(m1,"RESB")==0)
                       {
                        
                                fprintf(f3,"\n%d\t%s\n",lc,la);
                                fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
                                        lc=lc+1;
                                
                        }
                        else{
                          
                                fprintf(f3,"\n%d\t%s\n",lc,la);
                                fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
                                lc=lc+(atoi(op));
                        }
                        }
}}


