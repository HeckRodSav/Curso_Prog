//...
int A = 25 * 40;
int B = 1 << 4;
A /= B + 4;

A = A + B;
B = A - B;
A = A - B;

float C = A > 200 ? A * (50.0f - 0.003f) : B % 5;
//...