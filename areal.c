i,w,h;p(n){i=1;while(n%++i);return n-i;}main(){scanf("%d%d",&w,&h);printf("%s\n",p(w)|p(h)?"Ja":"Nei");exit(0);}