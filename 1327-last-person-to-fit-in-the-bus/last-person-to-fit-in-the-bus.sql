# Write your MySQL query statement below
select person_name
from(
    select *, sum(weight) over(order by turn) as t
    from queue
) x
where t <=1000
order by t desc
limit 1