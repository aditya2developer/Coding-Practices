# Write your MySQL query statement below
select *,
    (case when dna_sequence like "ATG%" then 1 else 0 end) as has_start,
    (case when regexp_like(dna_sequence, "TAA$|TAG$|TGA$")then 1 else 0 end) as has_stop,
    (case when dna_sequence like "%ATAT%" then 1 else 0 end) as has_atat,
    (case when dna_sequence like "%GGG%" then 1 else 0 end) as has_ggg
from samples
group by sample_id
