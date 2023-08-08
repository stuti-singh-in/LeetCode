SELECT
    customer_number
FROM (
    SELECT
        customer_number,
        RANK() OVER (ORDER BY COUNT(order_number) DESC) AS rnk
    FROM
        Orders
    GROUP BY
        customer_number
) ranked_customers
WHERE
    rnk = 1;
