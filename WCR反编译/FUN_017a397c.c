// FUN_017a397c @ 017a397c

void FUN_017a397c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  uint local_284;
  
  (*DAT_028e4110)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = &cf_tb_search;
    _WCRPluginIconResolvedTitle(&cf_tb_search,&cf_d__cN);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_tb_search;
    _WCRPluginIconResolvedSVGName(&cf_tb_search,&cf_icons_outlined_search);
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
    pcVar3 = &cf_tb_setting;
    _WCRPluginIconResolvedTitle(&cf_tb_setting,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_tb_setting;
    _WCRPluginIconResolvedSVGName(&cf_tb_setting,&cf_favorites_filled);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSettingVC,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = &cf_tb_file_manager;
    _WCRPluginIconResolvedTitle(&cf_tb_file_manager,&cf_eN_t);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_tb_file_manager;
    _WCRPluginIconResolvedSVGName(&cf_tb_file_manager,&cf_icons_filled_folder);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineFileManager,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = &cf_tb_theme_exchange;
  _WCRPluginIconResolvedTitle(&cf_tb_theme_exchange,&cf__NQQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_theme_exchange;
  _WCRPluginIconResolvedSVGName(&cf_tb_theme_exchange,&cf_smile_regular);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenThemeExchange,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_themebox_redeem;
  _WCRPluginIconResolvedTitle(&cf_tb_themebox_redeem,&cf_vP_QQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_themebox_redeem;
  _WCRPluginIconResolvedSVGName(&cf_tb_themebox_redeem,&cf_gift_filled_icon);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineThemeBoxRedeem,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_suanguo;
  _WCRPluginIconResolvedTitle(&cf_tb_suanguo,&cf_xgQQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_suanguo;
  _WCRPluginIconResolvedSVGName(&cf_tb_suanguo,&cf_icons_filled_heart);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSuanGuoRedeem,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_boluo;
  _WCRPluginIconResolvedTitle(&cf_tb_boluo,&cf_QQbc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_boluo;
  _WCRPluginIconResolvedSVGName(&cf_tb_boluo,&cf_icons_filled_fire);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineBoLuoRedeem,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_timeline;
  _WCRPluginIconResolvedTitle(&cf_tb_timeline,&cf_OwcgSW);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_timeline;
  _WCRPluginIconResolvedSVGName(&cf_tb_timeline,&cf_icons_outlined_colorful_moment);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCTimeline,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_finder;
  _WCRPluginIconResolvedTitle(&cf_tb_finder,&cf_S);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_finder;
  _WCRPluginIconResolvedSVGName(&cf_tb_finder,&cf_icons_outlined_finder);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCFinderTimeline,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_plugins;
  _WCRPluginIconResolvedTitle(&cf_tb_plugins,&cf_cN6e_);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_plugins;
  _WCRPluginIconResolvedSVGName(&cf_tb_plugins,&cf_icons_outlined_setting);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCPlugins,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_banner;
  _WCRPluginIconResolvedTitle(&cf_tb_banner,&cf_OS_jE_);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_banner;
  _WCRPluginIconResolvedSVGName(&cf_tb_banner,&cf_icons_filled_chats);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineMessageBannerBeautify,
             pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = &cf_tb_frame;
  _WCRPluginIconResolvedTitle(&cf_tb_frame,&cf_VGrWYX);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_tb_frame;
  _WCRPluginIconResolvedSVGName(&cf_tb_frame,&cf_picture_filled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenLocalFrameSelector,pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = &cf_tb_voice_pack;
    _WCRPluginIconResolvedTitle(&cf_tb_voice_pack,&cf_S);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_tb_voice_pack;
    _WCRPluginIconResolvedSVGName(&cf_tb_voice_pack,&cf_icons_filled_song);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineVoicePack,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_284 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_284 = (uint)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_284 & 1) != 0) {
    pcVar3 = &cf_tb_small_signal;
    _WCRPluginIconResolvedTitle(&cf_tb_small_signal,&cf__OS);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_tb_small_signal;
    _WCRPluginIconResolvedSVGName(&cf_tb_small_signal,&cf_bell_on_filled);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_addAction_name_icon__026ab910,&cf_onWCRefineSendSmallSignal,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  return;
}

