// wcRefineSearchBreadcrumbHeaderForPluginClass:sectionPart: @ 014cea5c

/* Function Stack Size: 0x20 bytes */

ID WCRefineSearchManager::wcRefineSearchBreadcrumbHeaderForPluginClass_sectionPart_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  cfstringStruct *local_78;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    local_3c = 1;
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getPluginDisplayName__026af6b8,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_20;
    local_48 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_getViewControllerFriendlyName__026aa500,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_48;
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_48);
    }
    IVar4 = local_50;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((IVar4 & 1) != 0) &&
       (IVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       IVar4 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_50);
    }
    pcVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_c0 = local_38;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_c0 = &::cf___;
    }
    else {
      local_68 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_c0;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_60);
    }
    pcVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    pcVar3 = local_30;
    if (pcVar6 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_3c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

