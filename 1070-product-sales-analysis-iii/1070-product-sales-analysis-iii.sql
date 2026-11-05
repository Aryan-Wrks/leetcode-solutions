# Write your MySQL query statement below
SELECT 
    product_id,
    year AS first_year,
    quantity,
    price
FROM Sales
WHERE (product_id, year) IN (   # we use the instruction of questions that is why we use double select to choose the product_id and year. that is appear in Sales table.
    SELECT 
        product_id,
        MIN(year)
    FROM Sales
    GROUP BY product_id
);