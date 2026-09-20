// isProtectedMember:inRoom: @ 00ed5804

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatRoomKickHelper::isProtectedMember_inRoom_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  uint local_84;
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
    local_11 = 1;
    local_44 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if ((IVar1 == 0) ||
       (IVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_50),
       (IVar1 & 1) == 0)) {
      IVar1 = local_20;
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_normalizedUserIDsFromText__026ab680);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_40);
      if ((IVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_84 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcr_user_isAdminOrOwnerInRoom__026ab690,local_40,local_38);
          local_84 = (uint)IVar1;
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_84 & 1) == 0) {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcr_contactForName__026ab630,local_38);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_20;
          local_60 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_wcr_stringValue_key__026ab628,IVar1,&cf_m_nsOwner);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar4);
          local_11 = (IVar1 & 1) != 0;
          local_44 = 1;
          _objc_storeStrong(&local_60,0);
        }
        else {
          local_11 = 1;
          local_44 = 1;
        }
      }
      else {
        local_11 = 1;
        local_44 = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_11 = 1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

