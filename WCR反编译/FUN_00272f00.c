// FUN_00272f00 @ 00272f00

void FUN_00272f00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_storeStrong(&DAT_028c9590,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = 0xfffffffffffffffd;
    FUN_00272848(0xfffffffffffffffd,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

