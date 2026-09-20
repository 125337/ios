// FUN_00297754 @ 00297754

void FUN_00297754(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = 0xfffffffffffffffc;
  FUN_00272848(0xfffffffffffffffc,&cf__O_bR_e);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

