// wcr_user:isAdminOrOwnerInRoom: @ 00ed28d0

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatRoomKickHelper::wcr_user_isAdminOrOwnerInRoom_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_stringValue_key__026ab628,IVar1,&cf_m_nsOwner);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8,local_40);
    if ((IVar2 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcr_stringValue_key__026ab628,local_50,&cf_m_nsChatRoomAdminList);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_40);
      local_11 = (byte)IVar1 & 1;
      local_44 = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_11 = 1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

