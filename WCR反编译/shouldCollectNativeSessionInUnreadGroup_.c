// shouldCollectNativeSessionInUnreadGroup: @ 01a94608

/* Function Stack Size: 0x18 bytes */

bool WCRefineGroupDataProvider::shouldCollectNativeSessionInUnreadGroup_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *local_b0;
  char *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nativeSessionFromObject__026a2c00,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (FUN_01a94384(pcVar1,&cf_m_uUnReadCount), (long)pcVar1 < 1)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_48 = puVar2;
    FUN_01a93084(local_38,PTR_s_m_isFolding_026bd9f8);
    local_49 = (byte)pcVar1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar3 = local_38;
      FUN_01a91e98(local_38,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_isChatBoxContact;
      local_58 = pcVar3;
      _NSSelectorFromString(&cf_isChatBoxContact);
      FUN_01a93084(pcVar3,pcVar1);
      local_49 = (byte)pcVar3;
      _objc_storeStrong(&local_58,0);
    }
    if ((local_49 & 1) == 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_usernameForNativeObject__026a2c08,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_b0;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      if ((((ulong)pcVar1 & 1) != 0) ||
         (pcVar1 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasSuffix__0269d018,&cf__im_chatroom),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar4 = "ChatBoxMgr";
        _objc_getClass();
        FUN_01a91a80();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = &cf_isContactInChatBox_;
        local_70 = pcVar4;
        _NSSelectorFromString();
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar1);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar1,local_60);
          local_49 = (byte)pcVar4;
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    if ((local_49 & 1) == 0) {
      pcVar1 = local_38;
      FUN_01a93084(local_38,PTR_s_m_bShowUnReadAsRedDot_026bd9f0);
      if (((ulong)pcVar1 & 1) == 0) {
        local_11 = 1;
      }
      else {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_homeGroupingUnreadGroupIncludeMu_026bda08);
        local_11 = (byte)puVar2 & 1;
      }
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_homeGroupingUnreadGroupIncludeFo_026bda00);
      local_11 = (byte)puVar2 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

