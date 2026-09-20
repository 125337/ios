// setMessageBlockTipText: @ 021998bc

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMessageBlockTipText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = local_50;
  if (local_50 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  _objc_storeStrong(&local_38,local_78);
  (*(code *)PTR__objc_release_02578630)(local_50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_38,&cf__O__);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKey__026ca9e8,local_38,&cf_messageBlockTipText);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

