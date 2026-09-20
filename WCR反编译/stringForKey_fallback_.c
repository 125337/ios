// stringForKey:fallback: @ 009b69f8

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIStore::stringForKey_fallback_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    else {
      local_68 = local_30;
    }
    local_58 = local_68;
  }
  else {
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

