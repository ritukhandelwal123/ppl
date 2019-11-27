var n,r,sum:integer;
begin
sum:=0;
r:=0;
writeln('Enter number to be reverse:');
readln(n);
while n>0 do 
begin
r:=n mod 10;
sum:=sum*10+r;
n:=n div 10;
end;
writeln('reverse of a number ',sum);
end.
