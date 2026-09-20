// FUN_005cd7ec @ 005cd7ec

void FUN_005cd7ec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_005bb92c();
  if ((uVar1 & 1) == 0) {
    _objc_storeStrong(&DAT_028cb648,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__lW1Y_elSb);
  }
  return;
}

