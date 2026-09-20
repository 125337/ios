// getPluginKey: @ 014be8b4

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::getPluginKey_(ID param_1,SEL param_2,ID param_3)

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
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MiYouSettingViewController);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPLSettingViewController);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceSettingViewController);
      if (((((uVar1 & 1) == 0) &&
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEhanceViewController),
           (uVar1 & 1) == 0)) &&
          (uVar1 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCUIBeautifyController),
          (uVar1 & 1) == 0)) &&
         (((uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCCustomNameController),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCHideToolController),
           (uVar1 & 1) == 0)) &&
          ((uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCVersionFakeController),
           (uVar1 & 1) == 0 &&
           ((uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCEnhanceToolController),
            (uVar1 & 1) == 0 &&
            (uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCAboutController),
            (uVar1 & 1) == 0)))))))) {
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
                        (local_30,PTR_s_isEqualToString__0269ccc8,
                         &cf_WCPureExtensionDisableSettingsController);
              if ((((uVar1 & 1) == 0) &&
                  (((uVar1 = local_30,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCPureExtensionEnableSettingsController), (uVar1 & 1) == 0 &&
                    (uVar1 = local_30,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCPureExtensionCssSettingsController), (uVar1 & 1) == 0)) &&
                   (uVar1 = local_30,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_30,PTR_s_isEqualToString__0269ccc8,
                              &cf_WCPureExtensionVoiceSettingsController), (uVar1 & 1) == 0)))) &&
                 ((uVar1 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,
                             &cf_WCPureExtensionReveiverSettingsController), (uVar1 & 1) == 0 &&
                  (uVar1 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,
                             &cf_WCPureExtensionEmojiSettingsController), (uVar1 & 1) == 0)))) {
                uVar1 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,
                           &cf_WeChatTweakEnableSettingsController);
                if (((uVar1 & 1) == 0) &&
                   (((uVar1 = local_30,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                &cf_WeChatTweakVoiceSettingsController), (uVar1 & 1) == 0 &&
                     (uVar1 = local_30,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                &cf_WeChatTweakRedEnvelopesSettingsController), (uVar1 & 1) == 0))
                    && ((uVar1 = local_30,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                   &cf_WeChatTweakCssSettingsController), (uVar1 & 1) == 0 &&
                        (((uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_WeChatTweakDisableSettingsController), (uVar1 & 1) == 0 &&
                          (uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_WeChatTweakReMsgSettingsController), (uVar1 & 1) == 0)) &&
                         (uVar1 = local_30,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_30,PTR_s_isEqualToString__0269ccc8,
                                    &cf_WeChatTweakAutoDownloadSettingsController), (uVar1 & 1) == 0
                         )))))))) {
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
                  local_50 = puVar3;
                  if ((((local_48 == (undefined *)0x0) ||
                       (uVar1 = local_30,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_30,PTR_s_isEqualToString__0269ccc8,local_48),
                       (uVar1 & 1) == 0)) &&
                      ((local_50 == (undefined *)0x0 ||
                       (uVar1 = local_30,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_30,PTR_s_isEqualToString__0269ccc8,local_50),
                       (uVar1 & 1) == 0)))) &&
                     ((uVar1 = local_30,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_QBXwzqnbgtkquptgugw),
                      (uVar1 & 1) == 0 &&
                      (uVar1 = local_30,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_CUEizyi),
                      (uVar1 & 1) == 0)))) {
                    uVar1 = local_30;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,
                               &cf_ThemeBoxSettingViewController);
                    if ((((uVar1 & 1) == 0) &&
                        ((((((uVar1 = local_30,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_30,PTR_s_isEqualToString__0269ccc8,
                                        &cf_ThemeBoxLayoutViewController), (uVar1 & 1) == 0 &&
                             (uVar1 = local_30,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_30,PTR_s_isEqualToString__0269ccc8,
                                        &cf_ThemeBoxTitleViewController), (uVar1 & 1) == 0)) &&
                            (uVar1 = local_30,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_ThemeBoxProfileViewController), (uVar1 & 1) == 0)) &&
                           ((uVar1 = local_30,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_ThemeBoxSessionViewController), (uVar1 & 1) == 0 &&
                            (uVar1 = local_30,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_ThemeBoxTabBarViewController), (uVar1 & 1) == 0)))) &&
                          (uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_ThemeBoxColorViewController), (uVar1 & 1) == 0)) &&
                         ((uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_ThemeBoxAnimatedViewController), (uVar1 & 1) == 0 &&
                          (uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_ThemeBoxHeadViewController), (uVar1 & 1) == 0)))))) &&
                       (uVar1 = local_30,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_30,PTR_s_isEqualToString__0269ccc8,
                                  &cf_ThemeBoxHeadCardViewController), (uVar1 & 1) == 0)) {
                      uVar1 = local_30;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                 &cf_BubbleBoxViewController);
                      if (((((uVar1 & 1) == 0) &&
                           (uVar1 = local_30,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_30,PTR_s_isEqualToString__0269ccc8,
                                      &cf_BubbleSettingViewController), (uVar1 & 1) == 0)) &&
                          (uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_BubbleBoxColorViewController), (uVar1 & 1) == 0)) &&
                         ((uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_BubbleBoxHeadViewController), (uVar1 & 1) == 0 &&
                          (uVar1 = local_30,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_BubbleBoxHeadCardViewController), (uVar1 & 1) == 0)))) {
                        uVar1 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_TheMessageController
                                  );
                        if ((((uVar1 & 1) == 0) &&
                            (uVar1 = local_30,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_TheVoiceController), (uVar1 & 1) == 0)) &&
                           ((uVar1 = local_30,
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_TheTimeLineController), (uVar1 & 1) == 0 &&
                            (((uVar1 = local_30,
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                         &cf_TheGroupController), (uVar1 & 1) == 0 &&
                              (uVar1 = local_30,
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                         &cf_TheSpecialController), (uVar1 & 1) == 0)) &&
                             (uVar1 = local_30,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_30,PTR_s_isEqualToString__0269ccc8,
                                        &cf_DisableWeChatController), (uVar1 & 1) == 0)))))) {
                          uVar1 = local_30;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,PTR_s_isEqualToString__0269ccc8,
                                     &cf_AccountDetailViewController);
                          if ((((((uVar1 & 1) == 0) &&
                                (uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineGeneralFunctionViewController),
                                (uVar1 & 1) == 0)) &&
                               ((uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineKeywordAlertViewController), (uVar1 & 1) == 0
                                && ((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineAutoFunctionViewController),
                                    (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineFriendRelationCheckViewController),
                                    (uVar1 & 1) == 0)))))) &&
                              ((((uVar1 = local_30,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_30,PTR_s_isEqualToString__0269ccc8,
                                            &cf_WCRefineDoNotDisturbSettingsViewController),
                                 (uVar1 & 1) == 0 &&
                                 (((((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineChatRoomFunctionViewController),
                                     (uVar1 & 1) == 0 &&
                                     (uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineMessageSyncRuleViewController),
                                     (uVar1 & 1) == 0)) &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineScheduledTaskViewController),
                                    (uVar1 & 1) == 0)) &&
                                   ((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineEmoticonFunctionViewController),
                                    (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineEmoticonGroupManageViewController),
                                    (uVar1 & 1) == 0)))) &&
                                  ((uVar1 = local_30,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_30,PTR_s_isEqualToString__0269ccc8,
                                              &cf_WCRefineVoiceFunctionViewController),
                                   (uVar1 & 1) == 0 &&
                                   ((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineVoicePackSettingsViewController),
                                    (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineVoicePackManagerViewController),
                                    (uVar1 & 1) == 0)))))))) &&
                                (uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineChatAvatarProfileCardViewController),
                                (uVar1 & 1) == 0)) &&
                               ((((uVar1 = local_30,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_30,PTR_s_isEqualToString__0269ccc8,
                                             &cf_WCRefineProfileCardActionConfigViewController),
                                  (uVar1 & 1) == 0 &&
                                  (uVar1 = local_30,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_30,PTR_s_isEqualToString__0269ccc8,
                                             &cf_ThemeExchangeViewController), (uVar1 & 1) == 0)) &&
                                 (uVar1 = local_30,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_30,PTR_s_isEqualToString__0269ccc8,
                                            &cf_WCRefineLayoutFunctionViewController),
                                 (uVar1 & 1) == 0)) &&
                                ((((((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineGroupManagementViewController),
                                     (uVar1 & 1) == 0 &&
                                     (uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineTelegramGroupingViewController),
                                     (uVar1 & 1) == 0)) &&
                                    ((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineTelegramGroupingTabsViewController),
                                     (uVar1 & 1) == 0 &&
                                     ((uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineChatAttachmentViewController),
                                      (uVar1 & 1) == 0 &&
                                      (uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineLongPressMenuViewController),
                                      (uVar1 & 1) == 0)))))) &&
                                   (uVar1 = local_30,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_30,PTR_s_isEqualToString__0269ccc8,
                                              &cf_WCRefineUICleanViewController), (uVar1 & 1) == 0))
                                  && ((((uVar1 = local_30,
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_WCRefineNavigationAvatarViewController),
                                        (uVar1 & 1) == 0 &&
                                        (uVar1 = local_30,
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_WCRefineChatTimeViewController),
                                        (uVar1 & 1) == 0)) &&
                                       (uVar1 = local_30,
                                       (*(code *)PTR__objc_msgSend_02578628)
                                                 (local_30,PTR_s_isEqualToString__0269ccc8,
                                                  &cf_RepeatEnhanceViewController), (uVar1 & 1) == 0
                                       )) && ((uVar1 = local_30,
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                                         &
                                                  cf_WCRefineFloatingTabBarSettingsViewController),
                                              (uVar1 & 1) == 0 &&
                                              (uVar1 = local_30,
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_30,PTR_s_isEqualToString__0269ccc8,
                                                         &
                                                  cf_WCRefineFloatingTabBarButtonActionViewController
                                                  ), (uVar1 & 1) == 0)))))) &&
                                 (((((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineUIBeautifyViewController),
                                     (uVar1 & 1) == 0 &&
                                     ((uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineFontBeautifyViewController),
                                      (uVar1 & 1) == 0 &&
                                      (uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineFontConvertViewController),
                                      (uVar1 & 1) == 0)))) &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineChatAttachmentBeautifyViewController),
                                    (uVar1 & 1) == 0)) &&
                                   ((((uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineMessageBannerBeautifyViewController),
                                      (uVar1 & 1) == 0 &&
                                      (uVar1 = local_30,
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_WCRefineProfileCardBeautifyViewController),
                                      (uVar1 & 1) == 0)) &&
                                     (uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineAvatarCornerBeautifyViewController),
                                     (uVar1 & 1) == 0)) &&
                                    ((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineNameplateBeautifyViewController),
                                     (uVar1 & 1) == 0 &&
                                     (uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineHomeAvatarStripSettingsViewController),
                                     (uVar1 & 1) == 0)))))) &&
                                  ((uVar1 = local_30,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_30,PTR_s_isEqualToString__0269ccc8,
                                              &cf_WCRefineCornerViewController), (uVar1 & 1) == 0 &&
                                   ((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineTouchTrailViewController),
                                    (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineAssistFunctionViewController),
                                    (uVar1 & 1) == 0)))))))))))))) &&
                             ((((uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineMomentsViewController), (uVar1 & 1) == 0 &&
                                (((((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineTextReplaceViewController),
                                    (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineTextPlaceholderViewController),
                                    (uVar1 & 1) == 0)) &&
                                   (uVar1 = local_30,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_30,PTR_s_isEqualToString__0269ccc8,
                                              &cf_WCRefineWeChatHomeTextViewController),
                                   (uVar1 & 1) == 0)) &&
                                  (((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineVersionController), (uVar1 & 1) == 0 &&
                                    (uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefinePluginManagementViewController),
                                    (uVar1 & 1) == 0)) &&
                                   ((uVar1 = local_30,
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,PTR_s_isEqualToString__0269ccc8,
                                               &cf_WCRefineRedEnvelopViewController),
                                    (uVar1 & 1) == 0 &&
                                    ((uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineMusicCoverViewController),
                                     (uVar1 & 1) == 0 &&
                                     (uVar1 = local_30,
                                     (*(code *)PTR__objc_msgSend_02578628)
                                               (local_30,PTR_s_isEqualToString__0269ccc8,
                                                &cf_WCRefineCustomAmountViewController),
                                     (uVar1 & 1) == 0)))))))) &&
                                 (uVar1 = local_30,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_30,PTR_s_isEqualToString__0269ccc8,
                                            &cf_WCRefineGlobalCornerSettingsViewController),
                                 (uVar1 & 1) == 0)))) &&
                               (((uVar1 = local_30,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_30,PTR_s_isEqualToString__0269ccc8,
                                            &cf_WCRefineSmallSignalSettingsViewController),
                                 (uVar1 & 1) == 0 &&
                                 (uVar1 = local_30,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_30,PTR_s_isEqualToString__0269ccc8,
                                            &cf_WCRefineForwardToGroupSettingsViewController),
                                 (uVar1 & 1) == 0)) &&
                                (uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WCRefineEnhancedAdBlockViewController),
                                (uVar1 & 1) == 0)))) &&
                              ((uVar1 = local_30,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_30,PTR_s_isEqualToString__0269ccc8,
                                          &cf_WCRefineToDoListSettingsViewController),
                               (uVar1 & 1) == 0 &&
                               (uVar1 = local_30,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_30,PTR_s_isEqualToString__0269ccc8,
                                          &cf_WCRefinePluginTopViewController), (uVar1 & 1) == 0))))
                             )) {
                            uVar1 = local_30;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,PTR_s_isEqualToString__0269ccc8,
                                       &cf_SettingMyProfileViewController);
                            if ((((uVar1 & 1) == 0) &&
                                (uVar1 = local_30,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,PTR_s_isEqualToString__0269ccc8,
                                           &cf_SettingMyAccountInfoViewController), (uVar1 & 1) == 0
                                )) && ((uVar1 = local_30,
                                       (*(code *)PTR__objc_msgSend_02578628)
                                                 (local_30,PTR_s_isEqualToString__0269ccc8,
                                                  &cf_SettingNotificationViewController),
                                       (uVar1 & 1) == 0 &&
                                       (((uVar1 = local_30,
                                         (*(code *)PTR__objc_msgSend_02578628)
                                                   (local_30,PTR_s_isEqualToString__0269ccc8,
                                                    &cf_SettingGeneralViewController),
                                         (uVar1 & 1) == 0 &&
                                         (uVar1 = local_30,
                                         (*(code *)PTR__objc_msgSend_02578628)
                                                   (local_30,PTR_s_isEqualToString__0269ccc8,
                                                    &cf_SettingPrivateConfigViewController),
                                         (uVar1 & 1) == 0)) &&
                                        (uVar1 = local_30,
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_30,PTR_s_isEqualToString__0269ccc8,
                                                   &cf_MMShowHelpViewController), (uVar1 & 1) == 0))
                                       )))) {
                              local_18 = (cfstringStruct *)0x0;
                            }
                            else {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_18 = &cf_searchWeChatSettings;
                            }
                          }
                          else {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_18 = &cf_searchPluginWCRefine;
                          }
                        }
                        else {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_18 = &cf_searchPluginHuangBai;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_18 = &cf_searchPluginBubbleBox;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_18 = &cf_searchPluginThemeBox;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf_searchPluginPKC;
                  }
                  local_34 = 1;
                  _objc_storeStrong(&local_50);
                  _objc_storeStrong(&local_48,0);
                  _objc_storeStrong(&local_40,0);
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_searchPluginWeChatTweak;
                  local_34 = 1;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_searchPluginWCPure;
                local_34 = 1;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_searchPluginWCPulse;
              local_34 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_searchPluginDouTu;
            local_34 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_searchPluginBNHelper;
          local_34 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_searchPluginWCEnhance;
        local_34 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_searchPluginWCPL;
      local_34 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_searchPluginMiYou;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

