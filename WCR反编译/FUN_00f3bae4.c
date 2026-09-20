// FUN_00f3bae4 @ 00f3bae4

void FUN_00f3bae4(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Yt1Y_);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,&cf_S);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    if (*(double *)(param_1 + 0x30) <= 0.0) {
      if (0.0 < *(double *)(param_1 + 0x40)) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf___1fx);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf___0fx__0f);
    }
    if (0.0 < *(double *)(param_1 + 0x48)) {
      if (*(double *)(param_1 + 0x48) < 1.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendFormat__0269d148,&cf_space_s_);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendFormat__0269d148,&cf_space_s_);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendString__0269ccb0,&cf_space_s_);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_sendEmoticonData_title_chatVC__026ac138,
               *(undefined8 *)(param_1 + 0x20),local_28,*(undefined8 *)(param_1 + 0x28));
    _objc_storeStrong(&local_28,0);
  }
  return;
}

