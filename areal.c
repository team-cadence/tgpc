i,w,h;p(n){for(i=2;i<n;)if(n%++i==0&&i!=n)return 0;return 1;}main(){scanf("%d %d",&w,&h);printf("%s\n",p(w)&p(h)?"Nei":"Ja");exit(0);}
