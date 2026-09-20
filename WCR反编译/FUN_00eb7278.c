// FUN_00eb7278 @ 00eb7278

void FUN_00eb7278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e29c0;
  DAT_028e29c0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

