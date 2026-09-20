// FUN_002e5154 @ 002e5154

void FUN_002e5154(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_028c9858;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9858,PTR_s_copy_0269d150);
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(*(undefined8 *)(param_1 + 0x28),DAT_028c9868);
  return;
}

