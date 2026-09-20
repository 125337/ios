// floatingTabBarBackgroundMediaFolder @ 0213ac00

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::floatingTabBarBackgroundMediaFolder(ID param_1,SEL param_2)

{
  SEL SVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = (cfstringStruct *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_48 = &::cf__;
  }
  else {
    local_48 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

