// ___copy_helper_block_e8_32s40s48s56s64s72w @0x384a8

void ___copy_helper_block_e8_32s40s48s56s64s72w(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_storeStrong(param_1 + 0x28,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_storeStrong(param_1 + 0x30,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_storeStrong(param_1 + 0x38,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_storeStrong(param_1 + 0x40,uVar1);
  _objc_copyWeak(param_1 + 0x48,param_2 + 0x48);
  return;
}

