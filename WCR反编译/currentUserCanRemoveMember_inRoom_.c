// currentUserCanRemoveMember:inRoom: @ 00ed5520

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatRoomKickHelper::currentUserCanRemoveMember_inRoom_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
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
  IVar2 = local_20;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (IVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_48),
     (IVar1 & 1) == 0)) {
    local_11 = 0;
    local_4c = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if ((IVar1 == 0) ||
       (IVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_58),
       (IVar1 & 1) != 0)) {
      local_11 = 0;
    }
    else {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isProtectedMember_inRoom__0269ed48,local_40,local_48);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_membersInRoom__0269ed78,local_48);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        if ((IVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_currentUserCanManageRoom__0269ecc0,local_48);
          if ((IVar1 & 1) == 0) {
            local_11 = 1;
          }
          else {
            local_11 = 1;
          }
        }
      }
      else {
        local_11 = 0;
      }
    }
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

