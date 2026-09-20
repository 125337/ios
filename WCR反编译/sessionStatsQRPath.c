// sessionStatsQRPath @ 021350f0

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::sessionStatsQRPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
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
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048,&cf_sessionStatsQRPath)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((param_1 & 1) == 0) ||
     (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_18 = local_38;
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

