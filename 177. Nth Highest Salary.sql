CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    if(@N>=2)
    begin
    RETURN (
        select(select distinct salary from employee 
        order by salary desc
        offset @N-1 rows
        fetch next 1 rows only) as sth

    );
    end
    else if(@N<1)
    return null
    else if(@N=1)
    begin
        return (select(select distinct top 1 salary from employee 
        order by salary desc) as sth)
    end

    return null
END