// ___copy_helper_block_e8_32s40r @0x50a00

void ___copy_helper_block_e8_32s40r(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}

