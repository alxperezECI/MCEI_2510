function [xr , err] = new_rap(x0)
  disp("xr \t err(%)");
  xi = x0;
  err = 100;
  while(abs(err) > 0.00001)
    x2 = xi - fun(xi)/func_der(xi);
    err = (x2 - xi)/x2;
    printf("%f \t %f\n", x2, err * 100);
    xi = x2;
  end
end