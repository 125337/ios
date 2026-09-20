// applyAction:toUserName:sync: @ 00ee14d8

/* Function Stack Size: 0x24 bytes */

bool WCRefineChatRoomMuteHelper::applyAction_toUserName_sync_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,bool param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ID local_88 [4];
  undefined1 local_61;
  ID local_60;
  ID local_58;
  byte local_4d;
  undefined4 local_4c;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  local_39 = (byte)param_5;
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomUserName__0269eff8,IVar2);
  IVar2 = local_20;
  if ((IVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_4d = 0;
    if (local_30 < 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactMgr_026ab088);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_20;
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar3;
      if (((local_58 != 0) && (IVar3 != 0)) &&
         (IVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_respondsToSelector__026ca818,
                    PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0), (IVar2 & 1) != 0)) {
        local_61 = local_30 == 1;
        IVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0,local_60,local_61,
                   local_39 & 1);
        local_4d = (byte)IVar2;
      }
      local_4c = 2;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    else if (local_30 - 2 < 2) {
      pcVar4 = "CGroupMgr";
      _objc_getClass("CGroupMgr");
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_service__026ab620,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_changeChatRoomChatBoxType_inChat_026ab7c8;
      local_88[0] = IVar2;
      if ((IVar2 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_changeChatRoomChatBoxType_inChat_026ab7c8), (IVar2 & 1) != 0)) {
        IVar2 = local_88[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88[0],puVar1,local_48,local_30 == 2,local_39 & 1);
        local_4d = (byte)IVar2;
      }
      local_4c = 2;
      _objc_storeStrong(local_88,0);
    }
    local_11 = local_4d & 1;
  }
  local_4c = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

