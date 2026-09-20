// FUN_00708d90 @ 00708d90

void FUN_00708d90(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_isApplicationActive_026a6ed8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

