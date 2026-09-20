// addYuanbaoContactIfNeeded @ 0111e754

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::addYuanbaoContactIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  ID local_40;
  ID local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isYuanbaoFriend_026af098);
  if (((ulong)puVar2 & 1) == 0) {
    pcVar3 = &cf_ChatBotMgr;
    _NSClassFromString();
    FUN_0111a880();
    _objc_retainAutoreleasedReturnValue();
    local_30 = PTR_s_tryGetChatBotContact__026af0a0;
    local_28 = pcVar3;
    if ((pcVar3 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_tryGetChatBotContact__026af0a0),
       ((ulong)pcVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30,&cf_wxid_wi_1d142z0zdj03);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_yuanbaoContact_026af0a8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_38 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contactManager_026ab1d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_addContact_listType_opLog_callEx_0269efc8;
    local_40 = IVar5;
    if ((local_38 != 0) && (IVar5 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addContact_listType_opLog_callEx_0269efc8);
      puVar1 = PTR_s_addLocalContact_listType__026af0b0;
      if ((IVar5 & 1) == 0) {
        IVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addLocalContact_listType__026af0b0);
        if ((IVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_38,1);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar2,local_38,1,1,1);
      }
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

