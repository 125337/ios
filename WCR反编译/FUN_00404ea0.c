// FUN_00404ea0 @ 00404ea0

void FUN_00404ea0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar1 = DAT_028ca698;
  DAT_028ca698 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

