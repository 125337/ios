// FUN_006f13a4 @ 006f13a4

void FUN_006f13a4(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcr_cleanupTempURLs__026a7098,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcr_finishProcessingWithToast_fo_026a7040,local_20,
               *(byte *)(param_1 + 0x30) & 1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

