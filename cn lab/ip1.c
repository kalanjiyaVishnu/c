#include <stdio.h>
#include <string.h>
void extractIpAddress(unsigned char *sourceString,short *ipAddress)
{
    unsigned short len=0;
    unsigned char  oct[4]={0},cnt=0,cnt1=0,i,buf[5];
    len=strlen(sourceString);
    for(i=0;i<len;i++)
    {
        if(sourceString[i]!='.'){
            buf[cnt++] =sourceString[i];
        }
        if(sourceString[i]=='.' || i==len-1){
            buf[cnt]='\0';
            cnt=0;
            oct[cnt1++]=atoi(buf);
        }
    }
    ipAddress[0]=oct[0];
    ipAddress[1]=oct[1];
    ipAddress[2]=oct[2];
    ipAddress[3]=oct[3];
}
int main()
{
    unsigned char ip[20]={0};
    short ipAddress[4];
    printf("Enter IP Address: ");
    scanf("%s",ip);
    extractIpAddress(ip,&ipAddress[0]);
    if((ipAddress[0]>=0) && (ipAddress[0]<=255))
    {
     if((ipAddress[1]>=0) && (ipAddress[1]<=255))
     {
      if((ipAddress[2]>=0) && (ipAddress[2]<=255))
      {
        if((ipAddress[3]>=0) && (ipAddress[3]<=255))
        {
         printf("\nIp Address: %03d. %03d. %03d. %03d\n",ipAddress[0],ipAddress[1],ipAddress[2],ipAddress[3]);
         if(ipAddress[0]>=0 && ipAddress[0]<=127)
           printf("Class A\n");
         if(ipAddress[0]>127 && ipAddress[0]<191)
           printf("Class B\n");
         if(ipAddress[0]>191 && ipAddress[0]<224)
           printf("Class C\n");
         if(ipAddress[0]>224 && ipAddress[0]<=239)
           printf("Class D\nMulticast IP Address\n");
         if(ipAddress[0]>239)
           printf("Class E\n");
         if(ipAddress[0]==127)
           printf("Loopback IP Address");
        }
      }
     }
    }
    return 0;
}
