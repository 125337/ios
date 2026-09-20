// effectiveHideMyPagePluginPassword @ 02094e04

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::effectiveHideMyPagePluginPassword(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideMyPagePluginPassword_026ca320);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf_123;
  }
  else {
    local_38 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

