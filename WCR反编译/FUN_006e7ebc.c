// FUN_006e7ebc @ 006e7ebc

void FUN_006e7ebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028cc318;
  DAT_028cc318 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

