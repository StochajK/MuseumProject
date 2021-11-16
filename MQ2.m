
clear;
clc;
tic;
a = arduino('COM5','Uno');             % define the Arduino Communication port
plotTitle = 'Arduino Data Log';  % plot title
xLabel = 'Elapsed Time (s)';     % x-axis label
yLabel = 'Output of sensor';      % y-axis label
legend1 = 'Temperature Sensor 1';

data=[];
time=[];
%plotGraph = plot(0,0,'-r' );  % every AnalogRead needs to be on its own Plotgraph
title(plotTitle,'FontSize',15);
xlabel(xLabel,'FontSize',15);
ylabel(yLabel,'FontSize',15);
for i=1:10000000
    data(i)=readVoltage(a, 'A0');
    time(i)=toc;
    datachange=readVoltage(a,'A0');
    plot(time(1:i),data(1:i),'-r');
    drawnow;
end
