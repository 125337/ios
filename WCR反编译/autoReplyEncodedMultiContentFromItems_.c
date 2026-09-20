// autoReplyEncodedMultiContentFromItems: @ 00fa6664

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::autoReplyEncodedMultiContentFromItems_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_autoReplySanitizedMultiItems__026a3620,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_componentsJoinedByString__0269d140);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_rangeOfString__0269d838,&::cf__);
    local_18 = local_48;
    if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingString__0269d398,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

