// isFoldedUserName: @ 00ede494

/* Function Stack Size: 0x18 bytes */

bool WCRefineChatRoomMuteHelper::isFoldedUserName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  char *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID local_70 [4];
  cfstringStruct *local_50;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  IVar3 = local_20;
  if (IVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_00ede78c;
  }
  pcVar2 = "ChatBoxMgr";
  _objc_getClass("ChatBoxMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_service__026ab620,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_isContactInChatBox_;
  local_48 = IVar3;
  _NSSelectorFromString();
  local_50 = pcVar4;
  if (((local_48 == 0) ||
      (IVar3 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4),
      (IVar3 & 1) == 0)) ||
     (IVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_38),
     (IVar3 & 1) == 0)) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = IVar3;
    if (IVar3 == 0) {
LAB_00ede750:
      local_11 = 0;
    }
    else {
      pcVar4 = &cf_isChatBoxContact;
      _NSSelectorFromString(&cf_isChatBoxContact);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
      IVar1 = local_70[0];
      if ((IVar3 & 1) == 0) goto LAB_00ede750;
      pcVar4 = &cf_isChatBoxContact;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,pcVar4);
      local_11 = (byte)IVar1 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(local_70,0);
  }
  else {
    local_11 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_00ede78c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

