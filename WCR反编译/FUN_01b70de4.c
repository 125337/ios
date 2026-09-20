// FUN_01b70de4 @ 01b70de4

void FUN_01b70de4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
                 *(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_endImportBatchAndReload_026bfaa8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf__4_gN_feVYNY6R0eVh__);
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_finishDouTuImportCount_unresolve_026bfab8,
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  return;
}

