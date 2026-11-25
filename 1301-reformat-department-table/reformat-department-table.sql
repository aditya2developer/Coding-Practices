# Write your MySQL query statement below
select id,
sum(if(month="jan",revenue,null)) as Jan_Revenue,
sum(if(month="feb",revenue,null)) as Feb_Revenue,
sum(if(month="mar",revenue,null)) as Mar_Revenue,
sum(if(month="apr",revenue,null)) as Apr_Revenue,
sum(if(month="May",revenue,null)) as May_Revenue,
sum(if(month="Jun",revenue,null)) as Jun_Revenue,
sum(if(month="Jul",revenue,null)) as Jul_Revenue,
sum(if(month="Aug",revenue,null)) as Aug_Revenue,
sum(if(month="Sep",revenue,null)) as Sep_Revenue,
sum(if(month="Oct",revenue,null)) as Oct_Revenue,
sum(if(month="Nov",revenue,null)) as Nov_Revenue,
sum(if(month="dec",revenue,null)) as Dec_Revenue
from department
group by id
order by id
