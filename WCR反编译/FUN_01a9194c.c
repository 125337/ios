// FUN_01a9194c @ 01a9194c

void FUN_01a9194c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e44e8;
  DAT_028e44e8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

