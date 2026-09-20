// saveChatRoomToAddressBook: @ 00ee2270

/* Function Stack Size: 0x18 bytes */

bool WCRefineChatRoomMuteHelper::saveChatRoomToAddressBook_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ID local_78 [4];
  undefined *local_58;
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
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomUserName__0269eff8,IVar2);
  if ((IVar3 & 1) == 0) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_00ee2618;
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_chatRoomAlreadyInAddressBook_026ab7e0,IVar2);
  IVar2 = local_20;
  if ((IVar3 & 1) == 0) {
    pcVar4 = "CGroupMgr";
    _objc_getClass("CGroupMgr");
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_service__026ab620,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR_s_ShowInContactBook_sync__026ab7e8;
    local_50 = IVar2;
    if (IVar2 == 0) {
LAB_00ee2474:
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactMgr_026ab088);
      _objc_retainAutoreleasedReturnValue();
      local_78[0] = IVar2;
      if (local_48 == 0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_38);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_48;
        local_48 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      puVar1 = PTR_s_addContact_listType_opLog_callEx_0269efc8;
      if ((local_78[0] == 0) || (local_48 == 0)) {
LAB_00ee25cc:
        local_11 = 0;
      }
      else {
        IVar2 = local_78[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_addContact_listType_opLog_callEx_0269efc8);
        if ((IVar2 & 1) == 0) goto LAB_00ee25cc;
        IVar2 = local_78[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_78[0],puVar1,local_48,1,1,1);
        local_11 = (byte)IVar2 & 1;
      }
      local_3c = 1;
      _objc_storeStrong(local_78,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_ShowInContactBook_sync__026ab7e8);
      if ((IVar2 & 1) == 0) goto LAB_00ee2474;
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_38,1);
      local_11 = (byte)IVar2 & 1;
      local_3c = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_11 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_00ee2618:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

