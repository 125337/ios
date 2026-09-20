// FUN_01ac77d4 @ 01ac77d4

void FUN_01ac77d4(double param_1,long param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  double local_70;
  cfstringStruct *local_60;
  double local_38;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = 14.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    local_70 = param_1;
  }
  local_38 = local_70;
  if ((local_70 < 10.0) || (22.0 < local_70)) {
    local_38 = 14.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__V_);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_setupDataAndNotifyHomeGroups_026be0a0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

