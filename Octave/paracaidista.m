m=68.1;
g=9.81;
v=40;
t=10;
c=[14.8:0.0001:14.802];
fc1=g*m./c;
fc2=1-exp(-c./m*t);
fc=fc1.*fc2-v;
plot(c,fc)
[c', fc']
