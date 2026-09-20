// FUN_017a1de0 @ 017a1de0

void FUN_017a1de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  
  (*DAT_028e4108)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = &cf_drawer_search;
    _WCRPluginIconResolvedTitle(&cf_drawer_search,&cf_d__cN);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_drawer_search;
    _WCRPluginIconResolvedSVGName(&cf_drawer_search,&cf_icons_outlined_search);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSearchPlugin,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((ulong)puVar1 & 1) == 0) {
    pcVar3 = &cf_drawer_setting;
    _WCRPluginIconResolvedTitle(&cf_drawer_setting,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_drawer_setting;
    _WCRPluginIconResolvedSVGName(&cf_drawer_setting,&cf_favorites_filled);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSettingVC,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = &cf_drawer_file_manager;
    _WCRPluginIconResolvedTitle(&cf_drawer_file_manager,&cf_eN_t);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_drawer_file_manager;
    _WCRPluginIconResolvedSVGName(&cf_drawer_file_manager,&cf_icons_filled_folder);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineFileManager,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = &cf_drawer_theme_exchange;
  _WCRPluginIconResolvedTitle(&cf_drawer_theme_exchange,&cf__NQQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_theme_exchange;
  _WCRPluginIconResolvedSVGName(&cf_drawer_theme_exchange,&cf_smile_regular);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenThemeExchange,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_drawer_themebox_redeem;
  _WCRPluginIconResolvedTitle(&cf_drawer_themebox_redeem,&cf_vP_QQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_themebox_redeem;
  _WCRPluginIconResolvedSVGName(&cf_drawer_themebox_redeem,&cf_gift_filled_icon);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineThemeBoxRedeem,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_drawer_avatar_frame;
  _WCRPluginIconResolvedTitle(&cf_drawer_avatar_frame,&cf_OS4YPFh);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_avatar_frame;
  _WCRPluginIconResolvedSVGName(&cf_drawer_avatar_frame,&cf_icons_filled_album);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCAvatarCornerBeautify,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_drawer_banner;
  _WCRPluginIconResolvedTitle(&cf_drawer_banner,&cf_OS_jE_);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_banner;
  _WCRPluginIconResolvedSVGName(&cf_drawer_banner,&cf_icons_filled_chats);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineMessageBannerBeautify,
             pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_drawer_frame;
  _WCRPluginIconResolvedTitle(&cf_drawer_frame,&cf_VGrWYX);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_frame;
  _WCRPluginIconResolvedSVGName(&cf_drawer_frame,&cf_picture_filled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenLocalFrameSelector,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isCloudAllowed_026ad3a0);
  if (((ulong)puVar1 & 1) != 0) {
    pcVar3 = &cf_drawer_icon_capture;
    _WCRPluginIconResolvedTitle(&cf_drawer_icon_capture,&cf_OSVhbS);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_drawer_icon_capture;
    _WCRPluginIconResolvedSVGName(&cf_drawer_icon_capture,&cf_icons_filled_gesture);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineIconNameCapture,pcVar3)
    ;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  return;
}

