// autoUploadIntervalSummary @ 00f01db8

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::autoUploadIntervalSummary(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_autoUploadIntervalHours_026aba80);
  if (param_1 == 6) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_k;
  }
  else if (param_1 == 0xc) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_k;
  }
  else if (param_1 == 0x48) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_k;
  }
  else if (param_1 == 0xa8) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_khT;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_k_Y;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

