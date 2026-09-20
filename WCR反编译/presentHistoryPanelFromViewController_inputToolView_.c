// presentHistoryPanelFromViewController:inputToolView: @ 00960540

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRClipboardHistoryStore::presentHistoryPanelFromViewController_inputToolView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  cfstringStruct *pcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double local_2e8;
  double local_2e0;
  undefined *local_240;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [8];
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double dStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double dStack_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  undefined *local_b0;
  char *local_a8;
  char *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  ulong local_50;
  ID local_48;
  ulong local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_009613d4;
    local_60 = &DAT_0257a740;
    local_48 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    uVar7 = local_40;
    local_58 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar7;
    _dispatch_async(puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_7c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
  }
  else {
    FUN_00956fd0();
    if (((ulong)puVar2 & 1) == 0) {
      local_7c = 1;
    }
    else {
      _WCRefineCrashReporterBreadcrumb(&cf_clip_panelpresent);
      puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_240 = local_38;
      local_91 = 0;
      bVar1 = local_38 == (undefined *)0x0;
      if (bVar1) {
        local_240 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_240;
      }
      local_91 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_240;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (local_88 == (undefined *)0x0) {
        local_7c = 1;
      }
      else {
        while( true ) {
          puVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar3 == (undefined *)0x0) break;
          puVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_88;
          local_88 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar4 = "MMPageSheetConfig";
        _objc_getClass();
        pcVar5 = "MMPageSheetAdapter";
        local_a0 = pcVar4;
        _objc_getClass();
        local_a8 = pcVar5;
        if ((local_a0 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXelSb);
          local_7c = 1;
        }
        else {
          puVar3 = PTR_WCRClipboardHistoryPanelController_026cead0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardHistoryPanelController_026cead0,PTR_s_new_0269d288);
          local_b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setInputToolView__0269f1b0,local_40);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOriginalHost__026aabd0,local_88);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_b1 = bVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUseCardStyle__026aabe0,bVar1);
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = &::cf___;
          uVar7 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
          if ((uVar7 & 1) != 0) {
            uVar7 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getChatUsername_0269d2b8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_c8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar7 & 1) != 0) {
              _objc_storeStrong(&local_c0,local_c8);
            }
            _objc_storeStrong(&local_c8,0);
          }
          pcVar8 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
          if (pcVar8 == (cfstringStruct *)0x0) {
            puVar3 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
            if (((ulong)puVar3 & 1) != 0) {
              puVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_m_nsUsrName_0269d638);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_d8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)puVar3 & 1) != 0) {
                _objc_storeStrong(&local_c0,local_d8);
              }
              _objc_storeStrong(&local_d8,0);
            }
            _objc_storeStrong(&local_d0,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setChatName__026aa878,local_c0);
          pcVar4 = local_a0;
          _objc_alloc_init();
          local_e0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTitle__0269cef0,&cf__4_g);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setNavLeftStyle__026aa730,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setEnableDragToClose__026aa740,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
          puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle_forState__026caab8,&cf__t);
          puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_titleLabel_026caba0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fe3333333333333,DAT_02323d00,0x3fe3333333333333,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_e8;
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar11 = 0x4018000000000000;
          dVar13 = 12.0;
          uVar10 = 0x4028000000000000;
          uVar12 = uVar11;
          FUN_0094bd50();
          local_130 = uVar11;
          uStack_128 = uVar10;
          local_120 = uVar12;
          dStack_118 = dVar13;
          local_108 = uVar11;
          uStack_100 = uVar10;
          local_f8 = uVar12;
          dStack_f0 = dVar13;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setContentEdgeInsets__0269ebd0);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_sizeToFit_0269ec08);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_b0,
                     PTR_s_openManage__026aabe8,0x40);
          pcVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_setNavRightButton__026aabf0);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setNavRightButton__026aabf0,local_e8);
          }
          pcVar4 = local_a8;
          _objc_alloc_init();
          local_138 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setPageSheetConfig__026aa758,local_e0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_setHostViewController__026a58c8,local_b0);
          puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_160 = uVar11;
          local_158 = uVar10;
          local_150 = uVar12;
          local_148 = dVar13;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if ((local_b1 & 1) == 0) {
            local_2e8 = dVar13 * 0.6;
          }
          else {
            local_168 = 0x4078c00000000000;
            local_170 = dVar13 * DAT_02324050;
            local_2e0 = local_170;
            if (396.0 < local_170) {
              local_2e0 = 396.0;
            }
            local_178 = local_2e0;
            local_2e8 = local_2e0;
          }
          local_140 = dVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2e8,local_138,PTR_s_setContentHeight__026aa760);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSheet__026aa770,local_138);
          _objc_initWeak(auStack_180,local_b0);
          pcVar5 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
          pcVar4 = local_138;
          puVar3 = PTR_s_setDidCloseBlock__026aabf8;
          if (((ulong)pcVar5 & 1) != 0) {
            ppuVar9 = &local_1b8;
            local_1b8 = PTR___NSConcreteStackBlock_02578660;
            local_1b0 = 0xc2000000;
            local_1ac = 0;
            local_1a8 = FUN_00961420;
            local_1a0 = &DAT_0257be28;
            _objc_copyWeak(auStack_198,auStack_180);
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3);
            (*(code *)PTR__objc_release_02578630)(ppuVar9);
            _objc_destroyWeak(auStack_198);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_showWithAnimated__0269e5a8,1);
          _objc_destroyWeak(auStack_180);
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_e8,0);
          _objc_storeStrong(&local_e0,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b0,0);
          local_7c = 0;
        }
      }
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

