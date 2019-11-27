var 
n,f,i:integer;
begin
writeln('Enter a number');
readln(n);
f:=1;
for i:=1 to n do 
begin
    f:=f*i;
end;

writeln('factorial ',f);
end.