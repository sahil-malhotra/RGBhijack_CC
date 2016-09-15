//
//  main.c
//  RGBhijack_CC
//
//  Created by Sahil Malhotra on 16/04/16.
//  Copyright © 2016 Sahil Malhotra. All rights reserved.
//

#include <stdio.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    while(t--)
    {
        long long r,g,b;
        long long k;
        long long i;
        long long R=0,G=0,B=0;
        long long ans=0;
        scanf("%lld %lld %lld", &r, &g, &b);
        scanf("%lld", &k);
        for(i = 0; i < k; i++)
        {
            while(r!=0)
            {
                r--;
                R++;
                ans=ans+1;
                break;
            }
            if(R==k)
                break;
            
            while(g!=0)
            {
                g--;
                G++;
                ans=ans+1;
                break;
            }
            if(G==k)
                break;
            
            while(b!=0)
            {
                b--;
                B++;
                ans=ans+1;
                break;
            }
            if(B==k)
                break;
        }
        printf("%lld\n", ans);
  
    }
    return 0;
}
