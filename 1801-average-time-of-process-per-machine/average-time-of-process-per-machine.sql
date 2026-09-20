# Write your MySQL query statement below
SELECT m.machine_id, 
round(avg(g.timestamp - m.timestamp) , 3)
AS processing_time
FROM Activity as m
JOIN Activity as g
ON m.machine_id = g.machine_id
AND m.process_id = g.process_id
AND m.activity_type = 'start'
AND g.activity_type = 'end'
GROUP BY  machine_id;
