# Write your MySQL query statement below
SELECT *
FROM Cinema
WHERE id % 2 = 1
  AND description != 'boring'
ORDER BY rating DESC;


# WE HAVE TO RETURN ALL THE VALUE FROM THE CINEMA TABLE
# ORDER BY rating DESC; [ MY FAULT ] REMEMBER.