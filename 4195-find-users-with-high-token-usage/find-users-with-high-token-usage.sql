# Write your MySQL query statement below
select user_id, count(*) as prompt_count, round(avg(tokens),2) as avg_tokens
from prompts
group by user_id
having count(*)>=3 
and max(
    case
        when tokens>(
            select avg(p2.tokens)
            from prompts p2
            where p2.user_id=prompts.user_id
        )
        then 1
        else 0
    end
)=1
order by avg_tokens desc, user_id asc