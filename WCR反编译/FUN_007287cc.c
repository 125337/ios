// FUN_007287cc @ 007287cc

void FUN_007287cc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_storeStrong(param_1 + 0x28,uVar1);
  _objc_storeStrong(param_2 + 0x28,0);
  return;
}

