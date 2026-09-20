// FUN_00f728d4 @ 00f728d4

void FUN_00f728d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e2e38;
  DAT_028e2e38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

