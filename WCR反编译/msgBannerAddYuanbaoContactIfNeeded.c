// msgBannerAddYuanbaoContactIfNeeded @ 01b913f0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::msgBannerAddYuanbaoContactIfNeeded
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  char *local_40;
  ID local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerYuanbaoIsFriend_026bffa0);
  if ((param_1 & 1) == 0) {
    pcVar3 = "ChatBotMgr";
    _objc_getClass();
    FUN_01b91608();
    _objc_retainAutoreleasedReturnValue();
    local_30 = PTR_s_tryGetChatBotContact__026af0a0;
    local_28 = pcVar3;
    if ((pcVar3 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_tryGetChatBotContact__026af0a0),
       ((ulong)pcVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30,&cf_wxid_wi_1d142z0zdj03);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_msgBannerPreviewContactForUserNa_026bffa8,&cf_wxid_wi_1d142z0zdj03);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CContactMgr";
    local_38 = IVar4;
    _objc_getClass();
    FUN_01b91608();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_addContact_listType_opLog_callEx_0269efc8;
    local_40 = pcVar3;
    if ((local_38 != 0) && (pcVar3 != (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addContact_listType_opLog_callEx_0269efc8);
      puVar2 = PTR_s_addLocalContact_listType__026af0b0;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addLocalContact_listType__026af0b0);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar2,local_38,1);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_38,1,1,1);
      }
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

