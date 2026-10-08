# Write your MySQL query statement below
-- SELECT
--     product_name.Product, 
--     year.Sales, 
--     price.Sales
--     WHERE sale_id is in Sales,
--     FROM Sales
--     LEFT JOIN Product
--     ON Sales.id = Product.id;

SELECT 
    Product.product_name,
    Sales.year,
    Sales.price
FROM Sales
JOIN Product
    ON Sales.product_id = Product.product_id;