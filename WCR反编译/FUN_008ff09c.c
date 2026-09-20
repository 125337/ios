// FUN_008ff09c @ 008ff09c

void FUN_008ff09c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        FUN_008ff15c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x28));
        return;
      }
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_leN1Y_);
  return;
}

