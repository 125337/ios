// quitChatRoomUserName:deleteAllMsg: @ 00ee08ac

/* Function Stack Size: 0x1c bytes */

bool WCRefineChatRoomMuteHelper::quitChatRoomUserName_deleteAllMsg_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_selfUserName_026ab7a8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomUserName__0269eff8,local_40);
  if ((((IVar2 & 1) == 0) ||
      (IVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      IVar2 == 0)) ||
     (IVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOwnerUserName__026ab7b0,local_40),
     IVar2 = local_20, (IVar3 & 1) != 0)) {
    local_11 = 0;
    local_4c = 1;
  }
  else {
    pcVar4 = "CGroupMgr";
    _objc_getClass("CGroupMgr");
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_service__026ab620,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_QuitGroup_withUsrName_deleteAllM_026ab7b8;
    local_58 = IVar2;
    if ((IVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_QuitGroup_withUsrName_deleteAllM_026ab7b8), (IVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar1,local_40,local_48,local_31 & 1);
      local_11 = (byte)IVar2 & 1;
    }
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

