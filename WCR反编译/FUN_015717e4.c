// FUN_015717e4 @ 015717e4

void FUN_015717e4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_01571850(uVar1,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSW_u1Y_);
  }
  return;
}

