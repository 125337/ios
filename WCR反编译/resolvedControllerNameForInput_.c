// resolvedControllerNameForInput: @ 01ccd5cc

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionConfigViewController::resolvedControllerNameForInput_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar3 = local_38;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_rangeOfString_options__0269d118,&cf_ViewController,1);
    puVar1 = (undefined1 *)((long)&pcVar3[-0x400000000000000].field0_0x0 + 1);
    local_50 = pcVar3;
    local_48 = puVar2;
    if ((puVar1 != (undefined1 *)0x0) &&
       (pcVar3 = local_38, _NSClassFromString(puVar1), local_58 = pcVar3,
       pcVar3 != (cfstringStruct *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isSubclassOfClass__0269e590,puVar2);
      local_18 = local_38;
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_3c = 1;
        goto LAB_01ccd82c;
      }
    }
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_controllerSuggestionsForPageName_026c3640,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
    local_18 = local_38;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_3c = 1;
    _objc_storeStrong(&local_60,0);
  }
LAB_01ccd82c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

