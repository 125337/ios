// FUN_002ee920 @ 002ee920

void FUN_002ee920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028c99d0;
  DAT_028c99d0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

