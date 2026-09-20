// FUN_01b7503c @ 01b7503c

void FUN_01b7503c(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_fileExistsAtPath__026ca630,*(undefined8 *)(param_1 + 0x28));
    if ((uVar1 & 1) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0x38) +
                    (long)WCRefineLocalEmoticonLibraryViewController::_exportSelectMode) & 1) != 0)
      {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x38),PTR_s_cancelSelectMode_026bf888);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_presentFileShareOptionsAtPat_026b65a8,
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Q1Y_);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeItemAtPath_error__0269f910,
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}

