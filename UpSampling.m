clc;
close all;
x=input('enter input sequence');
l=input('enter sampling factor');
y=upsample(x,l);
subplot(2,1,1);
stem(x);
subplot(2,1,2);
stem(y);
disp(y);