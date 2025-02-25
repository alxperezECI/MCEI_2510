function [xr , err] = secante(x0, x1)
  disp("iteracion \t xr \t err(%)\n");
  xi = x0;
  err = 100;
  i=1;
  while(abs(err) > 0.00001)
    x2 = xi - fun(xi)*(x1 -xi)/(fun(x1)-fun(xi));
    err = (x2 - xi)/x2;
    printf("%d \t %f \t %f\n",i, x2, err * 100);
    x1 = x0;
    xi = x2;
    i=i+1;
  end
end