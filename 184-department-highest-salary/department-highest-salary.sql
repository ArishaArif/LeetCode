# Write your MySQL query statement below
select d.name as department,e.name as employee ,e.salary from employee e join department d on d.id=e.departmentid WHERE (e.departmentId, e.salary) IN (
    SELECT departmentId, MAX(salary)
    FROM Employee
    GROUP BY departmentId
);