# Write your MySQL query statement below
# Write your MySQL query statement below
Select
    e.name as Employee
From 
    Employee e
join 
    Employee f
on 
    e.managerId = f.id
where
    e.salary > f.salary;