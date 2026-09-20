// FUN_002ebae4 @ 002ebae4

void FUN_002ebae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_028c9858;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9858,PTR_s_copy_0269d150);
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = DAT_028c9850;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9850,PTR_s_copy_0269d150);
  uVar2 = **(undefined8 **)(param_1 + 0x28);
  **(undefined8 **)(param_1 + 0x28) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  **(undefined8 **)(param_1 + 0x30) = DAT_026dfd70;
  **(undefined8 **)(param_1 + 0x38) = DAT_028c9958;
  **(undefined8 **)(param_1 + 0x40) = DAT_028c9960;
  **(undefined8 **)(param_1 + 0x48) = DAT_028c9968;
  **(byte **)(param_1 + 0x50) = DAT_028c9951 & 1;
  **(byte **)(param_1 + 0x58) = DAT_028c9952 & 1;
  **(byte **)(param_1 + 0x60) = DAT_028c9953 & 1;
  return;
}

