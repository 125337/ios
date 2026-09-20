// voiceCloneReferenceId @ 02035c78

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::voiceCloneReferenceId(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = (cfstringStruct *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  pcVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    if (local_38 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    else {
      local_78 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

