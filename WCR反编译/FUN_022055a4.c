// FUN_022055a4 @ 022055a4

void FUN_022055a4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*(code *)PTR__objc_retain_02578638)(param_2);
  (*pcVar1)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_2);
  _swift_release(uVar2);
  return;
}

