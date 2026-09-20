// shortStatusForScheme: @ 01e2e4b4

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatURLSchemeViewController::shortStatusForScheme_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  int local_6c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_6c = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (int)pcVar3;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  local_31 = local_6c != 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_50;
  _WCRSFURLSchemePlaceholders();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if ((local_31 & 1) == 0) {
    pcVar2 = &cf_y_u;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = &cf_y_u;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  else {
    pcVar2 = &cf__T_u;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = &cf__T_u;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

