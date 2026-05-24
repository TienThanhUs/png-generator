# img_generate

Nhẹ, đơn giản — dự án C nhỏ để xuất PNG bằng helper `TinyPngOut`.

Mục tiêu: ví dụ minh hoạ cách tạo/ghi ảnh PNG từ dữ liệu và biên dịch thành công chương trình dòng lệnh.

Tệp quan trọng hiện có:
- `img-generate.c` — nguồn chính chứa hàm `main()` và logic tạo ảnh.
- `TinyPngOut.c` — helper để xuất ảnh PNG.
- `TinyPngOut.h` — header cho helper.

Yêu cầu
- Trình biên dịch C tương thích (ví dụ `gcc`).
- Hệ điều hành: macOS (hoặc bất kỳ hệ Unix-like có `gcc`).

# img_generate

Overview
- A small C example program that generates a PNG image using the included `TinyPngOut` helper.

What this program does
- The program in [img-generate.c](img-generate.c) generates a 400×400 PNG image and writes it to `out.png` in the current directory. The current example writes alternating colored stripes (red and teal) by repeatedly calling the `TinyPngOut` helper.

Input
- This example program does not require any external input files or command-line arguments. It uses constants defined in the source (width, height, and color arrays).

Output
- The program writes a PNG file named `out.png` to the current working directory when run.

Dependencies / Libraries
- The project uses only standard C headers (`stdio.h`, `stdbool.h`, and `stdint.h`) and the included helper implementation:
	- [TinyPngOut.c](TinyPngOut.c)
	- [TinyPngOut.h](TinyPngOut.h)

Build
Open a terminal in the project folder and run:

```bash
gcc -O2 -Wall -o img-generate img-generate.c TinyPngOut.c
```

Run
After building, run the generated binary:

```bash
./img-generate
```

The program prints simple status messages and creates `out.png` in the current directory.

Files
- [img-generate.c](img-generate.c) — main example program
- [TinyPngOut.c](TinyPngOut.c) — PNG writing helper implementation
- [TinyPngOut.h](TinyPngOut.h) — helper header

License
- This repository is licensed under the MIT License. See [LICENSE](LICENSE) for details.

Next steps
- If you want a Makefile, example outputs, command-line options (width/height/output name), or to replace the placeholder author in the license, tell me which and I will add them.
