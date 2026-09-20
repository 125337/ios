// wcr_appendAtMember:parts:seen:me: @ 009db3b0

/* Function Stack Size: 0x30 bytes */

void WCRefineAnonymousAtHelper::wcr_appendAtMember_parts_seen_me_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *local_90;
  cfstringStruct *local_60;
  undefined *local_50;
  cfstringStruct *local_48;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_90 = local_28;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_90 = &::cf___;
  }
  else {
    local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((((pcVar3 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__chatroom),
       ((ulong)pcVar3 & 1) == 0)) &&
      (IVar4 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_isAtAllSentinel__026ab090,local_48),
      (IVar4 & 1) == 0)) &&
     (((lVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       lVar5 == 0 ||
       (pcVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40),
       ((ulong)pcVar3 & 1) == 0)) &&
      (uVar6 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_48),
      (uVar6 & 1) == 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

