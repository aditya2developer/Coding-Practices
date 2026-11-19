# Write your MySQL query statement below
delete p from Person p
join Person p2
on p.Email=p2.Email and p.id > p2.id