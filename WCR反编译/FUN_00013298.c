// FUN_00013298 @ 00013298

void FUN_00013298(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}

