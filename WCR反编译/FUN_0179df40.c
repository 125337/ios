// FUN_0179df40 @ 0179df40

void FUN_0179df40(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar1 = &cf_ThemeBoxTabBar;
  local_30 = param_1;
  local_28 = param_1;
  _NSClassFromString();
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     (local_38 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_addAction_name_icon__026ab910),
       pcVar4 = local_50[0], ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = &cf_float_search;
      _WCRPluginIconResolvedTitle(&cf_float_search,&cf_d__cN);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_float_search;
      _WCRPluginIconResolvedSVGName(&cf_float_search,&cf_icons_outlined_search);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSearchPlugin,pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
      pcVar1 = local_50[0];
      if (((ulong)puVar3 & 1) == 0) {
        pcVar4 = &cf_float_setting;
        _WCRPluginIconResolvedTitle(&cf_float_setting,&cf_WCRefine);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_float_setting;
        _WCRPluginIconResolvedSVGName(&cf_float_setting,&cf_favorites_filled);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineSettingVC,pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar2 = local_50[0];
        pcVar1 = &cf_float_file_manager;
        _WCRPluginIconResolvedTitle(&cf_float_file_manager,&cf_eN_t);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_float_file_manager;
        _WCRPluginIconResolvedSVGName(&cf_float_file_manager,&cf_icons_filled_folder);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineFileManager,pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar2 = local_50[0];
      pcVar1 = &cf_float_live;
      _WCRPluginIconResolvedTitle(&cf_float_live,&cf_vd);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_float_live;
      _WCRPluginIconResolvedSVGName(&cf_float_live,&cf_icons_outlined_live);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCFinderLive,pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_50[0];
      pcVar1 = &cf_float_finder;
      _WCRPluginIconResolvedTitle(&cf_float_finder,&cf_S);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_float_finder;
      _WCRPluginIconResolvedSVGName(&cf_float_finder,&cf_icons_outlined_finder);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCFinderTimeline,pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_50[0];
      pcVar1 = &cf_float_banner;
      _WCRPluginIconResolvedTitle(&cf_float_banner,&cf_OS_jE_);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_float_banner;
      _WCRPluginIconResolvedSVGName(&cf_float_banner,&cf_icons_filled_chats);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addAction_name_icon__026ab910,&cf_onOpenWCRefineMessageBannerBeautify,
                 pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(local_50,0);
  }
  return;
}

