// FUN_0050c4e8 @ 0050c4e8

void FUN_0050c4e8(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028cb018)(param_1,param_2,param_3);
  FUN_0050ebd4();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getFailedLike_026a4690);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}

