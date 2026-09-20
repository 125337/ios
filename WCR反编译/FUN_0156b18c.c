// FUN_0156b18c @ 0156b18c

void FUN_0156b18c(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  FUN_0156b21c();
  puVar2 = PTR_WCRefineHelper_026ce000;
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    FUN_01564574();
    pcVar1 = &cf__Yl_u1Y_;
    if ((uVar3 & 1) == 0) {
      pcVar1 = &cf__YSYl_u1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  return;
}

