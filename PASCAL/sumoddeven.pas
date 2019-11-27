var 
i,s,p:integer;
begin
    s:=0;
    p:=0;
    for i:=1 to 50 do 
    begin
        if(i mod 2 = 0)then
        s:=s+i
        else;
        begin
            p:=p+i;
        end;
    end;
    writeln('sum of even numbers:',s);
    writeln('sum of odd numbers:',p);
end.
