// FUN_016011dc @ 016011dc

byte FUN_016011dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01601090(local_20,local_28);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_isEqualToString__0269ccc8,&cf_brandservicesessionholder);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_gh_);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
          if (((uVar1 & 1) == 0) &&
             (uVar2 = local_38,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_38,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), uVar1 = local_28,
             (uVar2 & 1) == 0)) {
            if (local_28 == 0) {
              uVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_gh_);
              local_11 = (byte)uVar1 & 1;
            }
            else {
              pcVar3 = &cf_isBrandServiceBoxSession;
              _NSSelectorFromString(&cf_isBrandServiceBoxSession);
              FUN_016054b4(uVar1,pcVar3);
              uVar2 = local_28;
              if ((uVar1 & 1) == 0) {
                pcVar3 = &cf_isServiceBrand;
                _NSSelectorFromString(&cf_isServiceBrand);
                FUN_016054b4(uVar2,pcVar3);
                if ((uVar2 & 1) == 0) {
                  uVar1 = local_28;
                  FUN_016054b4(local_28,PTR_s_isBrandContact_0269d9c8);
                  if ((uVar1 & 1) == 0) {
                    uVar2 = local_28;
                    FUN_016054b4(local_28,PTR_s_isOfficialContact_0269d9d0);
                    uVar1 = local_28;
                    if ((uVar2 & 1) == 0) {
                      pcVar3 = &cf_isSubscriptionBrand;
                      _NSSelectorFromString(&cf_isSubscriptionBrand);
                      FUN_016054b4(uVar1,pcVar3);
                      uVar2 = local_28;
                      if ((uVar1 & 1) == 0) {
                        pcVar3 = &cf_isNormalBrand;
                        _NSSelectorFromString(&cf_isNormalBrand);
                        FUN_016054b4(uVar2,pcVar3);
                        uVar1 = local_28;
                        if ((uVar2 & 1) == 0) {
                          pcVar3 = &cf_isWeAppContact;
                          _NSSelectorFromString(&cf_isWeAppContact);
                          FUN_016054b4(uVar1,pcVar3);
                          uVar2 = local_28;
                          if ((uVar1 & 1) == 0) {
                            pcVar3 = &cf_isTemplateMsgHolder;
                            _NSSelectorFromString(&cf_isTemplateMsgHolder);
                            FUN_016054b4(uVar2,pcVar3);
                            uVar1 = local_28;
                            if ((uVar2 & 1) == 0) {
                              pcVar3 = &cf_isWWKFSessionHolder;
                              _NSSelectorFromString(&cf_isWWKFSessionHolder);
                              FUN_016054b4(uVar1,pcVar3);
                              uVar2 = local_28;
                              if ((uVar1 & 1) == 0) {
                                pcVar3 = &cf_isOpenImKefuContact;
                                _NSSelectorFromString(&cf_isOpenImKefuContact);
                                FUN_016054b4(uVar2,pcVar3);
                                if ((uVar2 & 1) == 0) {
                                  pcVar4 = "CContact";
                                  _objc_getClass();
                                  pcVar3 = &cf_isWeAppUserName_;
                                  _NSSelectorFromString();
                                  if (((pcVar4 == (char *)0x0) ||
                                      (pcVar5 = pcVar4,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (pcVar4,PTR_s_respondsToSelector__026ca818,pcVar3),
                                      ((ulong)pcVar5 & 1) == 0)) ||
                                     ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar3,local_20),
                                     ((ulong)pcVar4 & 1) == 0)) {
                                    local_11 = 0;
                                  }
                                  else {
                                    local_11 = 1;
                                  }
                                }
                                else {
                                  local_11 = 1;
                                }
                              }
                              else {
                                local_11 = 1;
                              }
                            }
                            else {
                              local_11 = 1;
                            }
                          }
                          else {
                            local_11 = 1;
                          }
                        }
                        else {
                          local_11 = 1;
                        }
                      }
                      else {
                        local_11 = 1;
                      }
                    }
                    else {
                      local_11 = 1;
                    }
                  }
                  else {
                    local_11 = 1;
                  }
                }
                else {
                  local_11 = 1;
                }
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
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

