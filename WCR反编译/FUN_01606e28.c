// FUN_01606e28 @ 01606e28

void FUN_01606e28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e3c20;
  DAT_028e3c20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

