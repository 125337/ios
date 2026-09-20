// FUN_010b217c @ 010b217c

void FUN_010b217c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e3338;
  DAT_028e3338 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

