#define _(x) {printf("%d\n",x);return 0;}
main(){int m,n,b,v=0;scanf("%d %d %d",&m,&n,&b);for(;n!=b;v++,n=(n%2)?3*n+1:n/2)if(n<2|n>m)_(-1)_(v)}
