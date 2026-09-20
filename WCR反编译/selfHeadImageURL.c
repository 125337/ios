// selfHeadImageURL @ 01005004

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkMediaSender::selfHeadImageURL(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_80 = &cf_MMServiceCenter;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  local_41 = false;
  bVar1 = local_80 == (cfstringStruct *)0x0;
  local_30 = local_80;
  if (bVar1) {
    local_80 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_80;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_50 = (cfstringStruct *)0x0;
  if ((local_38 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     pcVar3 = local_38, puVar4 = PTR_s_getService__0269d170, ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = &cf_CContactMgr;
    _NSClassFromString(&cf_CContactMgr);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar4,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_58 = (cfstringStruct *)0x0;
  if ((local_50 != (cfstringStruct *)0x0) &&
     (pcVar3 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    local_d0 = (cfstringStruct *)0x0;
  }
  else {
    local_d0 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_d0;
}

