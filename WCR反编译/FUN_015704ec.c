// FUN_015704ec @ 015704ec

void FUN_015704ec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_01570550();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__e_S_u1Y_);
  }
  return;
}

