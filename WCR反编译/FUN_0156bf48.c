// FUN_0156bf48 @ 0156bf48

void FUN_0156bf48(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_0156bfac();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Lrn_Sb);
  }
  return;
}

