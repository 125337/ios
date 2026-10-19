// _wcm_yy_png_chunk_fcTL_write @0x99c38

void _wcm_yy_png_chunk_fcTL_write(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = _wcm_yy_swap_endian_uint32(*param_1);
  *param_2 = uVar2;
  uVar2 = _wcm_yy_swap_endian_uint32(param_1[1]);
  param_2[1] = uVar2;
  uVar2 = _wcm_yy_swap_endian_uint32(param_1[2]);
  param_2[2] = uVar2;
  uVar2 = _wcm_yy_swap_endian_uint32(param_1[3]);
  param_2[3] = uVar2;
  uVar2 = _wcm_yy_swap_endian_uint32(param_1[4]);
  param_2[4] = uVar2;
  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)(param_1 + 5));
  *(undefined2 *)(param_2 + 5) = uVar1;
  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)((long)param_1 + 0x16));
  *(undefined2 *)((long)param_2 + 0x16) = uVar1;
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((long)param_2 + 0x19) = *(undefined1 *)((long)param_1 + 0x19);
  return;
}

