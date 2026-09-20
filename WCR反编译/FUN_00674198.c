// FUN_00674198 @ 00674198

void FUN_00674198(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_00673698();
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    FUN_0066d09c(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    FUN_0066d740(&cf__Ygf,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  return;
}

