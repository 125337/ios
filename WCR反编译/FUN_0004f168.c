// FUN_0004f168 @ 0004f168

void FUN_0004f168(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_0004ec20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

