var i,n,s:integer;
begin
writeln('Enter terms:');
readln(n);
s:=0;
for i:=1 to n do 
begin
s:=s+i;
end;
writeln('sum=',s);
end.