int s,z,k,c=(n-1)/2,m=(n+5)*n/2+(c+3)*c+(n%2?0:c+2),l=m;for(s=1;s<=n;l-=++s/2)for(z=s+3;--l,--z;){for(k=m;k>l-m;--k)ft_putchar(k>m-l?32:k==m-l?47:s<n||z>=n+n%2||k>c||-k>c?42:n<5||z-c-1||k+c-1?124:36);ft_putchar(92);ft_putchar(10);}
