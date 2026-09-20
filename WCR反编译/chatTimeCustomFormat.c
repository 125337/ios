// chatTimeCustomFormat @ 0207a6f0

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatTimeCustomFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID local_40;
  cfstringStruct *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimePlacement_0269f080);
  pcVar2 = &cf_chatTimeCustomFormat;
  local_30 = IVar1;
  FUN_0207a12c(&cf_chatTimeCustomFormat,IVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if (IVar1 == 0) {
    if (local_30 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKey__0269e048,&cf_chatTimeCustomFormat);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      local_40 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    if (local_40 == 0) {
      _objc_storeStrong(&local_40,&cf__O_);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_40,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

