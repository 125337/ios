// FUN_01b6e38c @ 01b6e38c

void FUN_01b6e38c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endImportBatchAndReload_026bfaa8);
  puVar2 = PTR_WCRefineHelper_026ce000;
  bVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) < 1;
  if (bVar1) {
    local_50 = &cf_lgS_eQvh_;
  }
  else {
    local_50 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_50);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

