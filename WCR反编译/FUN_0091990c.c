// FUN_0091990c @ 0091990c

void FUN_0091990c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028ce358;
  DAT_028ce358 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

