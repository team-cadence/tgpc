f=1,i,w,h;p(n){for(i=2;i<n;)if(n%++i==0&&i!=n)f=0;return f;}main(){scanf("%d %d",&w,&h);printf("%s\n",p(w)&p(h)?"Nei":"Ja");exit(0);}
