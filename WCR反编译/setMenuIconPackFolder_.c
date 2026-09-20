// setMenuIconPackFolder: @ 0160e4f4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setMenuIconPackFolder_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_60 = local_28;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_60 = &::cf___;
  }
  else {
    local_38 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  if ((((ulong)pcVar3 & 1) != 0) ||
     (pcVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_30 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((((pcVar3 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&::cf__),
       ((ulong)pcVar3 & 1) != 0)) ||
      (pcVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___),
      ((ulong)pcVar3 & 1) != 0)) ||
     (pcVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__),
     ((ulong)pcVar3 & 1) != 0)) {
    _objc_storeStrong(&local_30,&::cf__);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setCurrentValue_forKey__026b18a8,local_30,&cf_menuIconPackFolder);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

