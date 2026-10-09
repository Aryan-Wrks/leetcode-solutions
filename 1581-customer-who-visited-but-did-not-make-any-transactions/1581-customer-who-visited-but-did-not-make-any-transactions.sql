# Write your MySQL query statement below
-- SELECT 
--     customer_id.Visits, visit_id.Visits, transactions_id.Transactions
--     FROM Visits
--     INNER JOIN Transactions
--     ON Visits.visit_id = Transactions.visit_id;

SELECT
    v.customer_id,
    COUNT(*) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
    ON v.visit_id = t.visit_id
WHERE t.visit_id IS NULL
GROUP BY v.customer_id;