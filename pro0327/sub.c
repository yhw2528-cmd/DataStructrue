#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex minus_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex mul_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex divide_complex(Complex a, Complex b) {
    Complex result;
    double denom = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denom;
    result.imag = (a.imag * b.real - a.real * b.imag) / denom;
    return result;
}

Complex conjugate_complex(Complex a) {
    Complex result;
    result.real = a.real;
    result.imag = -a.imag;
    return result;
}

void print_complex(Complex a, Complex b, Complex result, const char *op) {
    printf("(%.1f + %.1fi) %s (%.1f + %.1fi) = %.1f + %.1fi\n",
           a.real, a.imag, op, b.real, b.imag, result.real, result.imag);
}

int main() {
    Complex a = {1.0, 2.0};
    Complex b = {3.0, 4.0};
    Complex result;

    result = add_complex(a, b);
    print_complex(a, b, result, "+");

    result = minus_complex(a, b);
    print_complex(a, b, result, "-");

    result = mul_complex(a, b);
    print_complex(a, b, result, "*");

    result = divide_complex(a, b);
    print_complex(a, b, result, "/");

    result = conjugate_complex(a);
    printf("conj(%.1f + %.1fi) = %.1f + %.1fi\n",
           a.real, a.imag, result.real, result.imag);

    return 0;
}
