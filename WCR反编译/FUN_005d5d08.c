// FUN_005d5d08 @ 005d5d08

void FUN_005d5d08(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  return;
}

