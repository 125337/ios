// _wcm_yy_swap_endian_uint32 @0x998a0

uint _wcm_yy_swap_endian_uint32(uint param_1)

{
  return (param_1 & 0xff00) << 8 | param_1 << 0x18 | (param_1 & 0xff0000) >> 8 | param_1 >> 0x18;
}

