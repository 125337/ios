// FUN_0082d53c @ 0082d53c

void FUN_0082d53c(long param_1,long param_2)

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
  _objc_copyWeak(param_1 + 0x50,param_2 + 0x50);
  return;
}

