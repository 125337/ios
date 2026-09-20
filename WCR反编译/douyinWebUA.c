// douyinWebUA @ 01017fa4

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkParser::douyinWebUA(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = &cf_CUtility;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _NSClassFromString();
  pcVar3 = &cf_GetMMUserAgent;
  local_30 = pcVar2;
  _NSSelectorFromString();
  local_38 = pcVar3;
  if ((local_30 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       pcVar2 = local_40, pcVar3 == (cfstringStruct *)0x0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      bVar1 = true;
    }
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_0101810c;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mobileUA_026adc18);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
LAB_0101810c:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

