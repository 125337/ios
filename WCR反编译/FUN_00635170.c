// FUN_00635170 @ 00635170

void FUN_00635170(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028cba20)(param_1,param_2);
  FUN_0063a16c();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_iconView_026a61b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_iconView_026a61b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  return;
}

