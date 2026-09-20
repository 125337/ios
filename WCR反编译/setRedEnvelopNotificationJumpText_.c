// setRedEnvelopNotificationJumpText: @ 020571e8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setRedEnvelopNotificationJumpText_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  SEL SVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_70 = local_28;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_70 = &::cf___;
  }
  else {
    local_40 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_38,&cf_pQlSa__g);
  }
  IVar2 = local_30;
  pcVar4 = local_38;
  SVar5 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,pcVar4);
  (*(code *)PTR__objc_release_02578630)(SVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

