
void NumberLiterals() {
    int binary_integers[] = {
        0b01,
        0b0'0,
        0b01'01'1,
        0b01ul,
        0b01LLU,
        0b01z,
    };

    int octal_integers[] = {
        0,
        01,
        0123'45,
        07U,
        07ULL,
    };

    int decimal_integers[] = {
        1234567,
        1'2'3'4'5,
    };

    int hexadecimal_integers[] = {
        0x1234567,
        0x123'45'67,
        0xabcdef,
        0x123u,
        0x123l,
    };

    int invalid_integers[] = {
        0b,
        0b2,
        0b02,
        0b01ulu,
        08,
        08325,
        123zz,
        0x,
        0xggg,
    };

    float decimal_floats[] = {
        1.,
        .1,
        0.1,
        123.,
        123.456,
        .456,
        0e+1,
        0e-1,
        0e123,
        0E123,
        0.f,
        0.l,
        0e1f,
    };

    float hexadecimal_floats[] = {
        0x1.2p1,
        0x1.2p+123,
        0x1.2p-456,
        0x1.2p1f,
    };

    float invalid_floats[] = {
        .f,
        0e,
        0e1e1,
        0.fl,
        0e1ff,
        0fe1,
        0x1.2,
    };

    int test0b000;
    int test123;
    int text0x123;
    int text0123;
    int text_1234;
}

void StringLiterals() {
    auto simple = "hello world!";
    auto multi_line = "hello world!\
                       and the next line";
    auto escape = 
        "\0 \00 \000"
        "\x01 \x0123456789abcdef \x123"
        "\u0000"
        "\U00000000"
        "\'\"\r\n\t";

    auto withEncoding1 = u8"test";
    auto withEncoding2 = L"test";

    auto rawString1 = R"(
        test line 1
        test line 2
    )";
    auto rawString2 = R"test(
        test line 1
        test line 2
    )test";
    auto rawString3 = R"test(
        \r\n\0\x1234
    )test";
}