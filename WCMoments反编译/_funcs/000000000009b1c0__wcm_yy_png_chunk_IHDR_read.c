// _wcm_yy_png_chunk_IHDR_read @0x9b1c0

void _wcm_yy_png_chunk_IHDR_read(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = _wcm_yy_swap_endian_uint32(*param_2);
  *param_1 = uVar1;
  uVar1 = _wcm_yy_swap_endian_uint32(param_2[1]);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}

