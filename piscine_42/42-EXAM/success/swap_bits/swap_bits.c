unsigned char   swap_bits(unsigned char octet)
{
    unsigned char   result;
    result = (octet >> 4 | octet << 4);
    return (result);
}