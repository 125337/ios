// FUN_0040ca18 @ 0040ca18

void FUN_0040ca18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_028ca698;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca698,PTR_s_copy_0269d150);
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

