// FUN_009cd1c8 @ 009cd1c8

void FUN_009cd1c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_009c701c(uVar1,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

