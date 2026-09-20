// scopeForContact:username: @ 01a9285c

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineGroupDataProvider::scopeForContact_username_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  cfstringStruct *local_98;
  ID local_68;
  char *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  unsigned_long_long local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_98 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_98;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__im_chatroom),
     ((ulong)pcVar1 & 1) == 0)) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isPassthroughSystemContact_usern_026bd9c0,local_40,local_48);
    if ((IVar2 & 1) == 0) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_isEqualToString__0269ccc8,&cf_brandservicesessionholder);
      uVar3 = local_40;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = &cf_isBrandServiceBoxSession;
        _NSSelectorFromString(&cf_isBrandServiceBoxSession);
        FUN_01a93084(uVar3,pcVar1);
        if ((uVar3 & 1) == 0) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_isEqualToString__0269ccc8,&cf_brandsessionholder);
          uVar3 = local_40;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = &cf_isBrandSessionHolder;
            _NSSelectorFromString(&cf_isBrandSessionHolder);
            FUN_01a93084(uVar3,pcVar1);
            if ((uVar3 & 1) == 0) {
              pcVar1 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_containsString__0269d0b0,&cf__openim);
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar4 = "CContact";
                _objc_getClass();
                uVar3 = local_40;
                pcVar1 = &cf_isServiceBrand;
                local_60 = pcVar4;
                _NSSelectorFromString(&cf_isServiceBrand);
                FUN_01a93084(uVar3,pcVar1);
                pcVar4 = local_60;
                if ((uVar3 & 1) == 0) {
                  pcVar1 = &cf_isWeAppUserName_;
                  _NSSelectorFromString(&cf_isWeAppUserName_);
                  FUN_01a931d4(pcVar4,pcVar1,local_48);
                  pcVar5 = local_60;
                  if (((ulong)pcVar4 & 1) == 0) {
                    pcVar1 = &cf_isWeWorkKFUserName_;
                    _NSSelectorFromString(&cf_isWeWorkKFUserName_);
                    FUN_01a931d4(pcVar5,pcVar1,local_48);
                    uVar3 = local_40;
                    if (((ulong)pcVar5 & 1) == 0) {
                      pcVar1 = &cf_isOpenImKefuContact;
                      _NSSelectorFromString(&cf_isOpenImKefuContact);
                      FUN_01a93084(uVar3,pcVar1);
                      uVar6 = local_40;
                      if ((uVar3 & 1) == 0) {
                        pcVar1 = &cf_isOpenImExpressKefuContact;
                        _NSSelectorFromString(&cf_isOpenImExpressKefuContact);
                        FUN_01a93084(uVar6,pcVar1);
                        uVar3 = local_40;
                        if ((uVar6 & 1) == 0) {
                          pcVar1 = &cf_isOpenImFinderShopTalentKefuContact;
                          _NSSelectorFromString(&cf_isOpenImFinderShopTalentKefuContact);
                          FUN_01a93084(uVar3,pcVar1);
                          uVar6 = local_40;
                          if ((uVar3 & 1) == 0) {
                            pcVar1 = &cf_isOpenImFinderShopKefuContact;
                            _NSSelectorFromString(&cf_isOpenImFinderShopKefuContact);
                            FUN_01a93084(uVar6,pcVar1);
                            uVar3 = local_40;
                            if ((uVar6 & 1) == 0) {
                              pcVar1 = &cf_isWWKFSessionHolder;
                              _NSSelectorFromString(&cf_isWWKFSessionHolder);
                              FUN_01a93084(uVar3,pcVar1);
                              uVar6 = local_40;
                              if ((uVar3 & 1) == 0) {
                                pcVar1 = &cf_isFavWeAppMsgHolder;
                                _NSSelectorFromString(&cf_isFavWeAppMsgHolder);
                                FUN_01a93084(uVar6,pcVar1);
                                uVar3 = local_40;
                                if ((uVar6 & 1) == 0) {
                                  pcVar1 = &cf_isTemplateMsgHolder;
                                  _NSSelectorFromString(&cf_isTemplateMsgHolder);
                                  FUN_01a93084(uVar3,pcVar1);
                                  uVar6 = local_40;
                                  if ((uVar3 & 1) == 0) {
                                    pcVar1 = &cf_isWeAppContact;
                                    _NSSelectorFromString(&cf_isWeAppContact);
                                    FUN_01a93084(uVar6,pcVar1);
                                    uVar3 = local_40;
                                    if ((uVar6 & 1) == 0) {
                                      pcVar1 = &cf_isWeSportContact;
                                      _NSSelectorFromString(&cf_isWeSportContact);
                                      FUN_01a93084(uVar3,pcVar1);
                                      uVar6 = local_40;
                                      if ((uVar3 & 1) == 0) {
                                        pcVar1 = &cf_isOpenImContact;
                                        _NSSelectorFromString(&cf_isOpenImContact);
                                        FUN_01a93084(uVar6,pcVar1);
                                        uVar3 = local_40;
                                        if ((uVar6 & 1) == 0) {
                                          pcVar1 = &cf_isEnterpriseContact;
                                          _NSSelectorFromString(&cf_isEnterpriseContact);
                                          FUN_01a93084(uVar3,pcVar1);
                                          uVar6 = local_40;
                                          if ((uVar3 & 1) == 0) {
                                            pcVar1 = &cf_isEnterpriseBrand;
                                            _NSSelectorFromString(&cf_isEnterpriseBrand);
                                            FUN_01a93084(uVar6,pcVar1);
                                            uVar3 = local_40;
                                            if ((uVar6 & 1) == 0) {
                                              pcVar1 = &cf_isEnterpriseMainBrand;
                                              _NSSelectorFromString(&cf_isEnterpriseMainBrand);
                                              FUN_01a93084(uVar3,pcVar1);
                                              uVar6 = local_40;
                                              if ((uVar3 & 1) == 0) {
                                                pcVar1 = &cf_isEnterpriseSubBrand;
                                                _NSSelectorFromString(&cf_isEnterpriseSubBrand);
                                                FUN_01a93084(uVar6,pcVar1);
                                                if ((uVar6 & 1) == 0) {
                                                  uVar3 = local_40;
                                                  FUN_01a93084(local_40,
                                                  PTR_s_isBrandContact_0269d9c8);
                                                  if (((uVar3 & 1) == 0) &&
                                                     (uVar6 = local_40,
                                                     FUN_01a93084(local_40,
                                                  PTR_s_isOfficialContact_0269d9d0),
                                                  uVar3 = local_40, (uVar6 & 1) == 0)) {
                                                    pcVar1 = &cf_isSubscriptionBrand;
                                                    _NSSelectorFromString(&cf_isSubscriptionBrand);
                                                    FUN_01a93084(uVar3,pcVar1);
                                                    uVar6 = local_40;
                                                    if ((uVar3 & 1) == 0) {
                                                      pcVar1 = &cf_isNormalBrand;
                                                      _NSSelectorFromString(&cf_isNormalBrand);
                                                      FUN_01a93084(uVar6,pcVar1);
                                                      if (((uVar6 & 1) == 0) &&
                                                         (pcVar1 = local_50,
                                                         (*(code *)PTR__objc_msgSend_02578628)
                                                                   (local_50,
                                                  PTR_s_hasPrefix__0269d320,&cf_gh_),
                                                  ((ulong)pcVar1 & 1) == 0)) {
                                                    uVar3 = local_40;
                                                    FUN_01a93084(local_40,
                                                  PTR_s_isNormalContact_026bd9c8);
                                                  if (((uVar3 & 1) == 0) &&
                                                     (uVar6 = local_40,
                                                     FUN_01a93084(local_40,
                                                  PTR_s_isMyContact_0269ef80), uVar3 = local_40,
                                                  (uVar6 & 1) == 0)) {
                                                    pcVar1 = &cf_isWeixinSingleConatct;
                                                    _NSSelectorFromString(&cf_isWeixinSingleConatct)
                                                    ;
                                                    FUN_01a93084(uVar3,pcVar1);
                                                    uVar6 = local_40;
                                                    if ((uVar3 & 1) == 0) {
                                                      pcVar1 = &cf_isWeixinSingleContact;
                                                      _NSSelectorFromString
                                                                (&cf_isWeixinSingleContact);
                                                      FUN_01a93084(uVar6,pcVar1);
                                                      uVar3 = local_40;
                                                      if ((uVar6 & 1) == 0) {
                                                        pcVar1 = &cf_isSingleContactNotNecessarilyMM
                                                        ;
                                                        _NSSelectorFromString
                                                                  (&
                                                  cf_isSingleContactNotNecessarilyMM);
                                                  FUN_01a93084(uVar3,pcVar1);
                                                  if ((uVar3 & 1) == 0) {
                                                    IVar2 = local_30;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (local_30,
                                                  PTR_s_contactManager_026ab1d8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  pcVar1 = local_48;
                                                  local_68 = IVar2;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_48,PTR_s_length_0269cca0);
                                                  if (((pcVar1 == (cfstringStruct *)0x0) ||
                                                      (IVar2 = local_68,
                                                      (*(code *)PTR__objc_msgSend_02578628)
                                                                (local_68,
                                                  PTR_s_respondsToSelector__026ca818,
                                                  PTR_s_isInContactList__0269efe0), (IVar2 & 1) == 0
                                                  )) || (IVar2 = local_68,
                                                        (*(code *)PTR__objc_msgSend_02578628)
                                                                  (local_68,
                                                  PTR_s_isInContactList__0269efe0,local_48),
                                                  (IVar2 & 1) == 0)) {
                                                    local_28 = 0;
                                                  }
                                                  else {
                                                    local_28 = 1;
                                                  }
                                                  local_54 = 1;
                                                  _objc_storeStrong(&local_68,0);
                                                  goto LAB_01a93040;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  local_28 = 1;
                                                  local_54 = 1;
                                                  goto LAB_01a93040;
                                                  }
                                                  }
                                                  }
                                                  local_28 = 8;
                                                  local_54 = 1;
                                                  goto LAB_01a93040;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        local_28 = 4;
                                        local_54 = 1;
                                        goto LAB_01a93040;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_28 = 8;
                local_54 = 1;
              }
              else {
                local_28 = 4;
                local_54 = 1;
              }
              goto LAB_01a93040;
            }
          }
          local_28 = 0x10;
          local_54 = 1;
          goto LAB_01a93040;
        }
      }
      local_28 = 8;
      local_54 = 1;
    }
    else {
      local_28 = 0;
      local_54 = 1;
    }
  }
  else {
    local_28 = 2;
    local_54 = 1;
  }
LAB_01a93040:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

