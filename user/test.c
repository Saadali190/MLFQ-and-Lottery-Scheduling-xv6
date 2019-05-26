#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "pstat.h"

int
main(int argc, char **argv)
{ 
  int rc,rc1,rc2;
  int n=setticket(atoi(argv[1]));
  rc=fork();
  if(rc==0){
    setticket(n*5);
    while(1);
    }
 if(rc>0){
  rc1=fork();
  if(rc1==0){
    setticket(n*10);
    while(1);
   }
  rc2=fork();
  if(rc2==0){
    setticket(n*30);
    while(1);
   }
   while(1);   
 }
  
}
