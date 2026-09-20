// groupScopeForNativeSession: @ 01a93d74

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineGroupDataProvider::groupScopeForNativeSession_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_c0;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nativeSessionFromObject__026a2c00,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_usernameForNativeObject__026a2c08,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__im_chatroom),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_brandservicesessionholder);
    pcVar1 = local_38;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = &cf_isBrandServiceBoxSession;
      _NSSelectorFromString(&cf_isBrandServiceBoxSession);
      FUN_01a93084(pcVar1,pcVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_isEqualToString__0269ccc8,&cf_brandsessionholder);
        pcVar1 = local_38;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = &cf_isBrandSessionHolder;
          _NSSelectorFromString(&cf_isBrandSessionHolder);
          FUN_01a93084(pcVar1,pcVar2);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_38;
            FUN_01a91e98(local_38,PTR_s_m_contact_026a0b68);
            _objc_retainAutoreleasedReturnValue();
            local_58 = pcVar1;
            if ((pcVar1 == (cfstringStruct *)0x0) &&
               (pcVar3 = local_40,
               (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
               pcVar2 = local_20, pcVar1 = local_40, pcVar3 != (cfstringStruct *)0x0)) {
              pcVar3 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contactManager_026ab1d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_contactForUserName_manager__026bd9d0,pcVar1);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_58;
              local_58 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            if (local_40 == (cfstringStruct *)0x0) {
              local_c0 = &::cf___;
            }
            else {
              local_c0 = local_40;
            }
            local_e8 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_scopeForContact_username__026bd9d8,local_58,local_c0);
            local_18 = local_e8;
            if (((local_e8 != (cfstringStruct *)0x4) && (local_e8 != (cfstringStruct *)0x8)) &&
               (local_e8 != (cfstringStruct *)0x10)) {
              if (local_40 == (cfstringStruct *)0x0) {
                local_e0 = &::cf___;
              }
              else {
                local_e0 = local_40;
              }
              pcVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isPassthroughSystemContact_usern_026bd9c0,local_58,local_e0)
              ;
              if (((ulong)pcVar1 & 1) == 0) {
                if (local_e8 == (cfstringStruct *)0x1) {
                  local_18 = (cfstringStruct *)0x1;
                }
                else {
                  pcVar1 = local_38;
                  FUN_01a93084(local_38,PTR_s_isChatSession_026bd9e0);
                  if ((((ulong)pcVar1 & 1) == 0) &&
                     (pcVar1 = local_38, FUN_01a93084(local_38,PTR_s_isSingleChatSession_026bd9e8),
                     ((ulong)pcVar1 & 1) == 0)) {
                    local_18 = (cfstringStruct *)0x8;
                  }
                  else {
                    local_18 = (cfstringStruct *)0x1;
                  }
                }
              }
              else {
                if (local_e8 == (cfstringStruct *)0x0) {
                  local_e8 = (cfstringStruct *)0x8;
                }
                local_18 = local_e8;
              }
            }
            local_4c = 1;
            _objc_storeStrong(&local_58,0);
            goto LAB_01a9422c;
          }
        }
        local_18 = (cfstringStruct *)0x10;
        local_4c = 1;
        goto LAB_01a9422c;
      }
    }
    local_18 = (cfstringStruct *)0x8;
    local_4c = 1;
  }
  else {
    local_18 = (cfstringStruct *)0x2;
    local_4c = 1;
  }
LAB_01a9422c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return (unsigned_long_long)local_18;
}

