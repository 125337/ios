// FUN_01572724 @ 01572724

void FUN_01572724(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_01572790(uVar1,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSWb_u1Y_);
  }
  return;
}

