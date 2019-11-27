var 
a,b,ret:integer;
function max(n1,n2:integer):integer;
var 
result:integer;
begin
    if(n1>n2)then
    result:=n1
    else
    result:=n2;
    max:=result;
    end;
    begin
        writeln('enter a no:');
        readln(a);
        writeln('enter another no:');
        readln(b);
        ret:=max(a,b);
        writeln(ret,' is the greater no.');
end.