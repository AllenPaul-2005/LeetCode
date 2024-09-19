class Solution:
    def rotatedDigits(self, n: int) -> int:
        valid_rotatable = {0, 1, 8, 2, 5, 6, 9}  # Valid digits after rotation
        must_change = {2, 5, 6, 9}  # Digits that change after rotation
        
        cnt = 0
        
        for i in range(1, n + 1):
            digits = set(map(int, str(i)))
            
            # If all digits are in the valid_rotatable set
            if digits.issubset(valid_rotatable):
                # Check if the number has at least one must_change digit
                if not digits.isdisjoint(must_change):
                    cnt += 1
        
        return cnt
