// wcr_appendInviteesFromHistoryValue:me:currentMembers:result: @ 00ed44a0

/* Function Stack Size: 0x30 bytes */

void WCRefineChatRoomKickHelper::wcr_appendInviteesFromHistoryValue_me_currentMembers_result_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimmedString__0269ec98,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_stringValue_key__026ab628,local_28,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_48;
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_stringValue_key__026ab628,local_28,&cf_m_nsUserName);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_48;
      local_48 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (((IVar1 != 0) &&
      (IVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_30),
      (IVar1 & 1) == 0)) &&
     ((uVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      uVar3 == 0 ||
      (uVar3 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_48),
      (uVar3 & 1) != 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

