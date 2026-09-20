// getPluginDisplayName: @ 014cef24

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::getPluginDisplayName_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_SettingMyProfileViewController);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isEqualToString__0269ccc8,&cf_SettingMyAccountInfoViewController),
       (uVar1 & 1) == 0)) &&
      (uVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_SettingNotificationViewController),
      (uVar1 & 1) == 0)) &&
     (((uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isEqualToString__0269ccc8,&cf_SettingGeneralViewController),
       (uVar1 & 1) == 0 &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isEqualToString__0269ccc8,&cf_SettingPrivateConfigViewController),
       (uVar1 & 1) == 0)) &&
      (uVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MMShowHelpViewController),
      (uVar1 & 1) == 0)))) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MiYouSettingViewController);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPLSettingViewController);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceSettingViewController);
        if ((((uVar1 & 1) == 0) &&
            (uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEhanceViewController),
            (uVar1 & 1) == 0)) &&
           (((uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCUIBeautifyController),
             (uVar1 & 1) == 0 &&
             (((uVar1 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCCustomNameController),
               (uVar1 & 1) == 0 &&
               (uVar1 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCHideToolController),
               (uVar1 & 1) == 0)) &&
              (uVar1 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCVersionFakeController),
              (uVar1 & 1) == 0)))) &&
            ((uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceToolController),
             (uVar1 & 1) == 0 &&
             (uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCAboutController),
             (uVar1 & 1) == 0)))))) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_BNHelperSettingController);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_DouTuSettingViewController);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPulseSettingViewController);
              if (((uVar1 & 1) == 0) &&
                 (uVar1 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_isEqualToString__0269ccc8,
                            &cf_WCPulseSpecialFeaturesViewController), (uVar1 & 1) == 0)) {
                uVar1 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_hasPrefix__0269d320,&cf_WCPureExtension);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_hasPrefix__0269d320,&cf_WeChatTweak);
                  if ((uVar1 & 1) == 0) {
                    puVar2 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    local_40 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pkcOldSettingsVC_026af560);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = local_40;
                    local_48 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pkcLetsGoVC_026af568);
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = local_30;
                    local_50 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_QBXwzqnbgtkquptgugw);
                    if (((((uVar1 & 1) == 0) &&
                         (uVar1 = local_30,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_30,PTR_s_isEqualToString__0269ccc8,&cf_CUEizyi),
                         (uVar1 & 1) == 0)) &&
                        ((local_48 == (undefined *)0x0 ||
                         (uVar1 = local_30,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_30,PTR_s_isEqualToString__0269ccc8,local_48),
                         (uVar1 & 1) == 0)))) &&
                       ((local_50 == (undefined *)0x0 ||
                        (uVar1 = local_30,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_isEqualToString__0269ccc8,local_50),
                        (uVar1 & 1) == 0)))) {
                      uVar1 = local_30;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_hasPrefix__0269d320,&cf_ThemeBox);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_hasPrefix__0269d320,&cf_BubbleBox);
                        if (((uVar1 & 1) == 0) &&
                           (uVar1 = local_30,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_30,PTR_s_isEqualToString__0269ccc8,
                                      &cf_BubbleSettingViewController), (uVar1 & 1) == 0)) {
                          uVar1 = local_30;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_hasPrefix__0269d320,&cf_The);
                          if (((uVar1 & 1) == 0) &&
                             (uVar1 = local_30,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_30,PTR_s_isEqualToString__0269ccc8,
                                        &cf_DisableWeChatController), (uVar1 & 1) == 0)) {
                            uVar1 = local_30;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_AccountDetailViewController);
                            if ((((uVar1 & 1) == 0) &&
                                (uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_ThemeExchangeViewController), (uVar1 & 1) == 0)) &&
                               (uVar1 = local_30,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_30,PTR_s_hasPrefix__0269d320,&cf_WCRefine),
                               (uVar1 & 1) == 0)) {
                              local_18 = (cfstringStruct *)0x0;
                            }
                            else {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_18 = &cf_WCRefine;
                            }
                          }
                          else {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_18 = &cf__vRKb;
                          }
                        }
                        else {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_18 = &cf_llvP_;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_18 = &cf__NvP_;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_18 = &cf_PKC;
                    }
                    local_34 = 1;
                    _objc_storeStrong(&local_50);
                    _objc_storeStrong(&local_48,0);
                    _objc_storeStrong(&local_40,0);
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf__P_RKb;
                    local_34 = 1;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf__OQS;
                  local_34 = 1;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_WCPulse;
                local_34 = 1;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_eVRKb;
              local_34 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_Zb;
            local_34 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__OX__;
          local_34 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_i_yRKb;
        local_34 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__ORKb;
      local_34 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__On_;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

