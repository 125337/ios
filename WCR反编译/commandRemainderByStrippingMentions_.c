// commandRemainderByStrippingMentions: @ 00ed0334

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::commandRemainderByStrippingMentions_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  undefined8 local_60;
  SEL local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_60 = 0;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_trimmedString__0269ec98,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf___;
  }
  else {
    local_38 = &DAT_028e2a38;
    local_40 = 0;
    _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_02581dc0);
    if (*local_38 + 1 != 0) {
      _dispatch_once(*local_38 + 1,local_38,local_40);
    }
    _objc_storeStrong(&local_40,0);
    pcVar1 = local_68;
    pcVar2 = DAT_028e2a30;
    if (DAT_028e2a30 != (cfstringStruct *)0x0) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = pcVar3;
      local_18 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar3,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_68;
      local_68 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_trimmedString__0269ec98,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

