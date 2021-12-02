
clear;
clc;
a = arduino('COM10','Uno');             % define the Arduino Communication port
plotTitle = 'Arduino Data Log';  % plot title
xLabel = 'Elapsed Time (s)';     % x-axis label
yLabel = 'Output of sensor';      % y-axis label
legend1 = 'Temperature Sensor 1';

% b=1.617856412;
% m=-0.44340257;
mq2value=0;
for i=0:100
    mq2value=mq2value+readVoltage(a,'A0');
end
mq2value=mq2value/100;
% mq2value=(mq2value*5/1023)/1000;
% R0=((5-mq2value)/mq2value)/9.8;
% ppm=[];
data=[];
threshold=mq2value*1.005;
time=[];
title(plotTitle,'FontSize',15);
xlabel(xLabel,'FontSize',15);
ylabel(yLabel,'FontSize',15);
tic;
% for i=1:300
%    rawdatavalue=readVoltage(a, 'A0');
%    datavalueV=rawdatavalue*5/1023;
%    RS=(5-datavalueV)/datavalueV;
%    ratio=RS/R0;
%    logppm=(log(ratio)-b)/m;
%    ppm(i)=10^logppm;
%    time(i)=toc;
%    plot(time(1:i),ppm(1:i),'-r');
%    drawnow;
% end
data(1)=readVoltage(a, 'A0');
   time(1)=toc;
   plot(time(1:1),data(1:1),'-r');
   title(plotTitle,'FontSize',15);
xlabel(xLabel,'FontSize',15);
ylabel(yLabel,'FontSize',15);
for i=2:100000
   data(i)=readVoltage(a, 'A0');
   time(i)=toc;
   plot(time(1:i),data(1:i),'-r');
   drawnow;
   if(data(i)>=threshold)
       writeDigitalPin(a,'D13',1);
   else
       writeDigitalPin(a,'D13',0);
   end
end