clc;
close all;
rp = input('enter the passband ripple:');
rs = input('enter the stopband');
fp = input('enter the passband edgefreq');
fs = input('enter the stopband edgefreq');
f = input('enter the sampling frequency');
wp = 2*fp/f;
ws = 2*fs/f;
[n, wn] = buttord(wp,ws,rp,rs');
[b,a] = butter(n, wn);
freqz(b,a);
