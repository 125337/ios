// keywordAlertFriendlyRegexError: @ 00f9c778

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::keywordAlertFriendlyRegexError_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &cf_ckRh_eHe;
  }
  else {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

