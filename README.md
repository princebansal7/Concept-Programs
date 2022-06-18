# DSA-OOP, TCS-NQT, Basic Conceptual programms

### ABOUT XOR (^) Operator:

    ```
    1. XOR of 2 Same = 0
    2. XOR of 2 Differents = 1
        eg: 1^0 = 1
            0^1 = 1
            1^1 = 0
            0^0 = 0
    3. If there are mulitple values getting XORed:
          - if number of 1 is odd => 1 (ans)
          - if number of 1 is even => 0 (ans)
        eg: 1^1^0 = 0
            1^1^1^0 = 1
            1^1^1 = 1
            1^1^1^1 = 0
            0^0^0^0 = 0

        Similarly:
            - XOR of same number even number of times => 0 (ans)
            - XOR of same number Odd number of times => same number (ans)
        eg: 4^4^0 = 0
            4^4^4 = 4
            4^4^4^0 = 4
            4^4^4^4 = 0
    ```