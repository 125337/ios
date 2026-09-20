// FUN_0221945c @ 0221945c

void FUN_0221945c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar3);
  (*(code *)PTR__objc_retain_02578638)(param_2);
  uVar1 = param_2;
  (*pcVar2)();
  (*(code *)PTR__objc_release_02578630)(param_2);
  _swift_release(uVar3);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

