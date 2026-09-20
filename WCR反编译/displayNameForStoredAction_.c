// displayNameForStoredAction: @ 0186f55c

/* Function Stack Size: 0x18 bytes */

ID WCRefineBottomBarLongPressActionSelector::displayNameForStoredAction_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  uint local_17c;
  cfstringStruct *local_178;
  SEL local_170;
  ID local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = (cfstringStruct *)0x0;
  local_170 = param_2;
  local_168 = param_1;
  _objc_storeStrong(&local_178,param_3);
  if ((local_178 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = &cf_eR_O;
    local_17c = 1;
  }
  else {
    pcVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_containsString__0269d0b0,&::cf__);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_188 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
      puVar5 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6);
      bVar1 = puVar5 == (undefined1 *)0x0;
      if (bVar1) {
        pcVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        local_160 = pcVar2;
      }
      local_17c = (uint)bVar1;
      _objc_storeStrong(puVar5,&local_188,0);
      if (local_17c != 0) goto LAB_0186fad0;
    }
    pcVar2 = local_178;
    FUN_0186efec();
    _objc_retainAutoreleasedReturnValue();
    local_190 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePrivateFriend);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePluginHub);
      if (((ulong)pcVar2 & 1) == 0) {
        local_158 = &cf_WCRefineClearUnread;
        local_c0 = &::cf___;
        local_150 = &cf_WCPayMainViewControllerV2;
        local_b8 = &cf__eN;
        local_148 = &cf_WCFinderLiveHomePageViewController;
        local_b0 = &cf_vd;
        local_140 = &cf_WCTimeLineViewController;
        local_a8 = &cf_gSW;
        local_138 = &cf_WCFinderTimelineTabViewController;
        local_a0 = &::cf_S;
        local_130 = &cf_KindaViewController;
        local_98 = &cf_6eN>k;
        local_128 = &cf_CameraScanViewController;
        local_90 = &cf_kb;
        local_120 = &cf_WeNoteFlutterViewController;
        local_88 = &cf___;
        local_118 = &cf_WCAccountLoginUsersViewController;
        local_80 = &cf_Rbc_S;
        local_110 = &cf_WCPluginsViewController;
        local_78 = &cf_cN6e_;
        local_108 = &cf_WCRefinePluginAggregateSearch;
        local_70 = &cf_d__cN;
        local_100 = &cf_WCRefineWeChatOfficialSearch;
        local_68 = &cf__ed__;
        local_f8 = &cf_WCRefineRootViewController;
        local_60 = &cf_WCRefine;
        local_f0 = &cf_WCRefineFloatingTabBarSettingsViewController;
        local_58 = &cf__nm_h;
        local_e8 = &cf_ThemeBoxViewController;
        local_50 = &cf__NvP_;
        local_e0 = &cf_NewHBALLSettingController;
        local_48 = &cf__vRKb;
        local_d8 = &cf_NewPersonalQRCodeViewController;
        local_40 = &cf_bvN_x;
        local_d0 = &cf_ActionMenu;
        local_38 = &cf_R_OUS;
        local_c8 = &cf_ActionList;
        local_30 = &cf_R_OUS;
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_158,0x13);
        _objc_retainAutoreleasedReturnValue();
        local_198 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,local_178);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_1d8 = local_178;
        }
        local_1a0 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = local_1d8;
        local_17c = 1;
        _objc_storeStrong(&local_1a0);
        _objc_storeStrong(&local_198,0);
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar2 = &cf_>f_y6e_;
        if (((ulong)puVar4 & 1) == 0) {
          pcVar2 = &cf_6e_;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_17c = 1;
      }
    }
    else {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar2 = &cf_>f_y_S;
      if (((ulong)puVar4 & 1) == 0) {
        pcVar2 = &cf__S;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_17c = 1;
    }
    _objc_storeStrong(&local_190,0);
  }
LAB_0186fad0:
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_160;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

