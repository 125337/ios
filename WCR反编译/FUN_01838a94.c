// FUN_01838a94 @ 01838a94

void FUN_01838a94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_cancelExportSelectMode_026b6588);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_presentFileShareOptionsAtPat_026b65a8,
                 *(undefined8 *)(param_1 + 0x20),&cf_W,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_showToast__026b3a18,&cf__Q1Y_);
  lVar1 = *(long *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

