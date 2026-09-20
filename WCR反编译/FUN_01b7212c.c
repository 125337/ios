// FUN_01b7212c @ 01b7212c

void FUN_01b7212c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endImportBatchAndReload_026bfaa8);
  puVar1 = PTR_WCRefineHelper_026ce000;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_01b717c8(uVar2,*(undefined8 *)(param_1 + 0x38),
               *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

