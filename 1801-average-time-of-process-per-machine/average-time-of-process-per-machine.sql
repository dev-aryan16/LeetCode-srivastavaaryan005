# Write your MySQL query statement below

 

 SELECT 
    a1.machine_id,
    round(AVG(a2.timestamp - a1.timestamp),3) AS processing_time
FROM Activity AS a1
JOIN Activity AS a2
    on a1.machine_id=a2.machine_id
    and a1.process_id = a2.process_id
    AND a1.activity_type = 'start'
    AND a2.activity_type = 'end'
GROUP BY a1.machine_id;

-- -- We use the Activity table twice.
-- -- a1 = START activity
-- -- a2 = END activity
-- SELECT
--     a1.machine_id,

--     -- For every process:
--     -- processing time = END timestamp - START timestamp
--     --
--     -- AVG() then calculates the average processing time
--     -- of all processes belonging to the same machine.
--     --
--     -- ROUND(..., 3) keeps the answer to 3 decimal places.
--     ROUND(
--         AVG(a2.timestamp - a1.timestamp),
--         3
--     ) AS processing_time

-- FROM Activity AS a1

-- -- Self JOIN:
-- -- We join Activity with itself because the START and END
-- -- of the same process are stored as TWO separate rows.
-- JOIN Activity AS a2

--     ON
--         -- Both rows must belong to the SAME machine.
--         a1.machine_id = a2.machine_id

--         -- Both rows must belong to the SAME process.
--         AND a1.process_id = a2.process_id

--         -- a1 must be the START row.
--         AND a1.activity_type = 'start'

--         -- a2 must be the END row.
--         AND a2.activity_type = 'end'

-- -- We want ONE result for each machine.
-- GROUP BY a1.machine_id;