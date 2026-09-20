// FUN_0156cb80 @ 0156cb80

void FUN_0156cb80(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_015321f0(uVar1,0);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_g_b_u1Y_);
  }
  return;
}

