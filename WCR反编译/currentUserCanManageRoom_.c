// currentUserCanManageRoom: @ 00ed2634

/* Function Stack Size: 0x18 bytes */

bool WCRefineChatRoomKickHelper::currentUserCanManageRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isAdmin_0269f778);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentUserWxid_0269ec70);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
      if (IVar1 == 0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        IVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_wcr_stringValue_key__026ab628,local_38,&cf_m_nsOwner);
        _objc_retainAutoreleasedReturnValue();
        local_50 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8,local_48);
        if ((IVar1 & 1) == 0) {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcr_stringValue_key__026ab628,local_38,&cf_m_nsChatRoomAdminList
                    );
          _objc_retainAutoreleasedReturnValue();
          IVar2 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_58 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar1);
          IVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_48);
          local_11 = (byte)IVar1 & 1;
          local_3c = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_11 = 1;
          local_3c = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isAdmin_0269f778);
      local_11 = (byte)IVar1 & 1;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

