unsigned char   swap_bits(unsigned char octet)
{
    unsigned char   result;
    result = (((c >> 0) & 1) << 7) | \
    (((c >> 1) & 1) << 6) | \
    (((c >> 2) & 1) << 5) | \
    (((c >> 3) & 1) << 4) | \
    (((c >> 4) & 1) << 3) | \
    (((c >> 5) & 1) << 2) | \
    (((c >> 6) & 1) << 1) | \
    (((c >> 7) & 1) << 0))

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }