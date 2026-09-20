// wcr_addMemberUserName:into: @ 00ed2dd4

/* Function Stack Size: 0x20 bytes */

void WCRefineChatRoomKickHelper::wcr_addMemberUserName_into_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimmedString__0269ec98,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if ((IVar1 == 0) ||
       (IVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isChatRoomID__0269ec68,local_40),
       (IVar1 & 1) != 0)) {
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_40);
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

