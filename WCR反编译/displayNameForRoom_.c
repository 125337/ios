// displayNameForRoom: @ 00ed7154

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::displayNameForRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_stringValue_key__026ab628,IVar1,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  IVar1 = local_40;
  if (IVar2 == 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_stringValue_key__026ab628,local_38,&cf_m_nsNickName);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    IVar1 = local_50;
    if (IVar2 == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

