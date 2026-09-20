// FUN_0110ce4c @ 0110ce4c

void FUN_0110ce4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = DAT_028e3530;
  DAT_028e3530 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

