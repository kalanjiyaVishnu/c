#include <stdio.h>
#include <conio.h>
int main()
{
    float routers, speed, dis, bw, data_size, prd = 0.0, qd = 0.0;
    printf("******************************************************\n");
    printf("distance between Source and destination in (Km) :");
    scanf("%f", &dis);
    printf("\nMessage_size (in mb) :");
    scanf("%f", &data_size);
    printf("\nBandwidth (in Gbps) : ");
    scanf("%f", &bw);
    printf("\nSpeed :(in mbps) : ");
    scanf("%f", &speed);
    printf("\nno of router : ");
    scanf("%f", &routers);
    printf("\nQueuing Delay (in sec): ");
    scanf("%f", &qd);
    printf("\nProcessing Delay (in sec): ");
    scanf("%f", &prd);
    printf("*****************************************************\n");
    float pd, td, delay, e2e, link;
    pd = (dis * 1000) / (speed * 1024 * 1024);
    td = (data_size * 1024 * 1024 * 8) / (bw * 1024 * 1024 * 1024);
    delay = (pd + td + qd + prd);
    link = routers - 1;
    e2e = link * (delay);
    printf("Propagation Delay - %f sec\n", pd);
    printf("Transmission Delay - %f sec\n", td);
    printf("Delay or Latency - %f sec\n", delay);
    printf("End-to-End - %f sec\n", e2e);
    getch();
}
