// themeBoxSkipSenderWxids @ 02115310

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::themeBoxSkipSenderWxids(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_themeBoxSkipSenderWxids);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKey__0269e048,&cf_themeBoxSkipSenderUdids);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_40 = &::cf___;
    }
    _objc_storeStrong(&local_30,local_40);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_themeBoxSkipSenderWxids);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_themeBoxSkipSenderUdids);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

