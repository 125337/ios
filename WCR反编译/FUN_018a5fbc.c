// FUN_018a5fbc @ 018a5fbc

void FUN_018a5fbc(long param_1,undefined8 param_2,long param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  pcVar1 = &cf__;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    pcVar1 = &cf__;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithFormat__0269cca8,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_newline_s_);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_presentNativePageSheetDoneWithTi_026b76a8,&cf__,
             local_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_38,0);
  return;
}

