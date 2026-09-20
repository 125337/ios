// autoAcceptTransferNotificationJumpDarkColor @ 01fd5b1c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::autoAcceptTransferNotificationJumpDarkColor(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_a8;
  cfstringStruct *local_88;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar3 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar5 = local_28;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_88 = &::cf___;
  }
  else {
    local_38 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_88;
    local_48 = pcVar5;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_88;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a8 = &cf_800080;
  }
  else {
    local_a8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_a8;
}

