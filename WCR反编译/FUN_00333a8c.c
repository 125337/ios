// FUN_00333a8c @ 00333a8c

void FUN_00333a8c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028c9ea0)(param_1,param_2);
  uVar1 = param_1;
  FUN_0033441c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    FUN_00334898();
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefineApplyTransparentTips_026a2130);
    }
  }
  else {
    FUN_00334504(param_1);
  }
  return;
}

