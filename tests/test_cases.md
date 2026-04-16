# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [* ] Input: `aaaa` -> entropy thấp, redundancy cao
  → Entropy = 0, Redundancy = 8  
  Nhận xét: chuỗi lặp toàn bộ, không có thông tin mới.
- [ *] Input: `abcd` -> entropy cao hơn `aaaa`
  → Entropy ≈ 2.0, Redundancy ≈ 6.0  
  Nhận xét: chuỗi đa dạng, entropy cao hơn `aaaa`.
- [* ] Input: `hello world` -> entropy và redundancy được tính hợp lệ
→ Entropy ≈ 2.845, Redundancy ≈ 5.155  
  Nhận xét: có ký tự lặp và không lặp, entropy và redundancy hợp lệ.
## 2. Modulo inverse
- [* ] `a=3, m=7` -> nghịch đảo modulo là 5
  → Nghịch đảo modulo = 5  
  Kiểm tra: 3 × 5 mod 7 = 1.
- [ *] `a=10, m=17` -> nghịch đảo modulo là 12
  → inverse = 12 (10 × 12 mod 17 = 1).  
- Input: `abcabc` → entropy trung bình, redundancy vừa phải.
- [ ]* `a=6, m=9` -> không tồn tại nghịch đảo modulo
 → Không tồn tại nghịch đảo modulo  
  Kiểm tra: gcd(6,9) = 3 ≠ 1.
## 3. Ghi chú
Thêm test riêng của nhóm nếu cần.
