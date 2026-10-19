// _wcm_yy_swap_endian_uint16 @0x9b760

uint _wcm_yy_swap_endian_uint16(ushort param_1)

{
  undefined1 local_2;
  
  local_2 = (byte)param_1;
  return (int)(param_1 & 0xff00) >> 8 | (uint)local_2 << 8;
}

