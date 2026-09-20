// FUN_0208c26c @ 0208c26c

void FUN_0208c26c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar3 = local_30;
  if (((ulong)pcVar1 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    else {
      local_68 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

