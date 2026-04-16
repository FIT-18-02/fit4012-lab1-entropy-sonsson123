# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
Bài lab giúp sinh viên hiểu rõ khái niệm entropy và độ dư thừa thông tin trong chuỗi ký tự, đồng thời nắm được cách tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng. Qua đó rèn luyện kỹ năng lập trình C++ và kết nối lý thuyết với ứng dụng trong bảo mật thông tin.
## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 8 | Chuỗi lặp hoàn toàn, không có thông tin mới |
| abcd | 2 | 6 | Các ký tự đều nhau, entropy trung bình |
| hello world | 2.845 | 5.155 | Có sự đa dạng ký tự, entropy cao hơn |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Qua bài lab, em đã hiểu rõ hơn về entropy: dữ liệu càng ngẫu nhiên thì entropy càng cao, còn redundancy càng lớn khi dữ liệu lặp lại nhiều. Em cũng đã cài đặt thành công hàm tìm nghịch đảo modulo bằng Euclid mở rộng, thấy được vai trò quan trọng của số học modulo trong mật mã học. Khó khăn lớn nhất là việc truy ngược trong Euclid mở rộng, nhưng nhờ chạy nhiều test case em đã hiểu rõ hơn cách hoạt động của thuật toán.
