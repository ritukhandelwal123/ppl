var a:array[1..20]of integer;
i,sum,avg:integer;
begin
    sum:=0;
    avg:=0;
    writeln('Enter marks of 5 subjects:');
    for i:=1 to 5 do 
    begin
        readln(a[i]);
    end;
    for i:=1 to 5 do 
    begin
            sum:=sum+a[i];
    end;
    avg:=sum div 5;
    writeln('Sum of five subjects=',sum);
    writeln('average =',avg);
end.  