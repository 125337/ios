// fontBeautifyFontPath @ 020a73fc

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::fontBeautifyFontPath(ID param_1,SEL param_2)

{
  SEL SVar1;
  cfstringStruct *pcVar2;
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
  pcVar2 = local_30;
  if (local_38 == (cfstringStruct *)0x0) {
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setObject_forKey__026ca9e8);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_retain_02578638)(&::cf___);
    local_18 = &::cf___;
  }
  else {
    pcVar2 = local_38;
    FUN_020a75f0();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

