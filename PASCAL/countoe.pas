var a:array[1..20]of integer;
i,c1,c2:integer;
begin
    c1:=0;
    c2:=0;
    writeln('Enter 10 numbers:');
    for i:=1 to 10 do 
    begin
    readln(a[i]);
    end;
    for i:=1 to 10 do 
    begin
        if(a[i] mod 2=0)then
        c1:=c1+1
        else
        c2:=c2+1;
    end;
    writeln('total even numbers:',c1);
    writeln('total odd numbers:',c2);
end.