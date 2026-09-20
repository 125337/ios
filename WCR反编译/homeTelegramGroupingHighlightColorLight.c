// homeTelegramGroupingHighlightColorLight @ 01ffbac4

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::homeTelegramGroupingHighlightColorLight(ID param_1,SEL param_2)

{
  SEL SVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_50;
}

