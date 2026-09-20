// WCRefine_animateShowInView: @ 004c34e4

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameMenuSearchItem::WCRefine_animateShowInView_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ID IVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  undefined *local_380;
  undefined *local_378;
  uint local_300;
  uint local_2c4;
  undefined *local_298;
  undefined1 local_289;
  undefined *local_288;
  ID local_280;
  undefined *local_278;
  undefined *local_270;
  undefined1 local_261;
  undefined *local_260;
  ID local_258;
  char *local_250;
  char *local_248;
  undefined *local_240;
  undefined1 local_231;
  undefined *local_230;
  ID local_228;
  undefined *local_220;
  undefined *local_218;
  undefined1 local_209;
  undefined *local_208;
  ID local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined1 local_1e1;
  undefined *local_1e0;
  ID local_1d8;
  char *local_1d0 [2];
  char *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  undefined *local_170;
  char *local_168;
  char *local_160;
  cfstringStruct *local_158;
  char *local_150;
  undefined *local_148;
  undefined1 local_139;
  undefined *local_138;
  ID local_130;
  ID local_128;
  byte local_119;
  ID local_118;
  undefined *local_110;
  ulong local_108;
  long local_100;
  ulong local_f8;
  byte local_ea;
  byte local_e9;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  byte local_e5;
  undefined *local_d8;
  byte local_cd;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_WCRefine_animateShowInView__026a3f70,local_c8);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((ulong)puVar3 & 1) == 0) {
    local_cd = 0;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_WCRefineSearchEntryMainFrameMenu_026a3fb0);
    local_e5 = (byte)puVar3;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_WCRefineMiniProgramEntryMainFram_026a3f98);
    local_e6 = (byte)puVar3;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_WCRefineClearUnreadEntryMainFram_0269f8a0);
    local_e7 = (byte)puVar3;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_WCRefineClearSessionEntryMainFra_0269f7d0);
    local_e8 = (byte)puVar3;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_keywordAlertMainFrameHistoryEntr_026a3fb8);
    local_e9 = (byte)puVar3;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_doNotDisturbFeatureEnabled_026a3fc0);
    local_2c4 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_doNotDisturbMainFrameMenuEnabled_026a3fc8);
      local_2c4 = (uint)puVar3;
    }
    uVar4 = local_c8;
    local_ea = (byte)local_2c4 & 1;
    if ((((((local_e5 & 1) == 0) && ((local_e6 & 1) == 0)) && ((local_e7 & 1) == 0)) &&
        (((local_e8 & 1) == 0 && ((local_e9 & 1) == 0)))) && ((local_2c4 & 1) == 0)) {
      local_cc = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = uVar4;
      local_100 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = uVar4;
      while (uVar4 = local_108, local_108 != 0) {
        puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar4 & 1) != 0) {
          _objc_storeStrong(&local_100,local_108);
          break;
        }
        uVar5 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_108;
        local_108 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if (local_100 == 0) {
        local_cc = 1;
      }
      else {
        local_110 = PTR_s_addItemWithBtnData_showNew_sel_t_026a3f58;
        IVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addItemWithBtnData_showNew_sel_t_026a3f58);
        if ((IVar6 & 1) == 0) {
          local_cc = 1;
        }
        else {
          local_119 = 0;
          local_300 = 0;
          if ((local_e6 & 1) != 0) {
            IVar6 = local_b8;
            _objc_getAssociatedObject(local_b8,&DAT_028cac28);
            _objc_retainAutoreleasedReturnValue();
            local_119 = 1;
            local_118 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_300 = (uint)IVar6 ^ 1;
          }
          if ((local_119 & 1) != 0) {
            IVar6 = local_118;
            (*(code *)PTR__objc_release_02578630)();
          }
          if ((local_300 & 1) != 0) {
            FUN_004c3480();
            _objc_retainAutoreleasedReturnValue();
            local_128 = IVar6;
            if (IVar6 != 0) {
              IVar6 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_130 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
              _objc_retainAutoreleasedReturnValue();
              local_138 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSelector__0269e1b0,local_110)
              ;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setArgument_atIndex__0269eae8,&local_128,2);
              local_139 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setArgument_atIndex__0269eae8,&local_139,3);
              local_148 = PTR_s_WCRefine_onMiniProgramEntryTappe_026a3f88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setArgument_atIndex__0269eae8,&local_148,4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_invoke_0269e1b8);
              _objc_storeStrong(&local_138);
              _objc_storeStrong(&local_130,0);
            }
            _objc_storeStrong(&local_128,0);
          }
          if ((local_e5 & 1) != 0) {
            pcVar7 = "RightTopMenuItemBtnData";
            _objc_getClass();
            local_150 = pcVar7;
            if (pcVar7 != (char *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_158 = &cf_icons_outlined_search;
              pcVar7 = "MMThemeManager";
              _objc_getClass();
              local_160 = pcVar7;
              if (pcVar7 != (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar7,PTR_s_performSelector__026ca7b8,PTR_s_sharedInstance_0269cd30);
                _objc_retainAutoreleasedReturnValue();
                local_168 = pcVar7;
                if (pcVar7 != (char *)0x0) {
                  local_30 = &cf_icons_outlined_search;
                  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_170 = puVar3;
                  _memset(auStack_1b8,0,0x40);
                  puVar3 = local_170;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_378 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,
                             auStack_b0,0x10);
                  if (local_378 != (undefined *)0x0) {
                    lVar9 = *local_1a8;
                    local_380 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_1a8 - lVar9 != 0) {
                          _objc_enumerationMutation(*local_1a8 - lVar9,puVar3);
                        }
                        local_178 = *(undefined8 *)(local_1b0 + (long)local_380 * 8);
                        pcVar7 = local_168;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_168,PTR_s_performSelector_withObject__026ca7c0,
                                   PTR_s_imageForKey__026a3fd0,local_178);
                        _objc_retainAutoreleasedReturnValue();
                        local_1c0 = pcVar7;
                        if (pcVar7 == (char *)0x0) {
                          local_cc = 0;
                        }
                        else {
                          _objc_storeStrong(&local_158,local_178);
                          local_cc = 7;
                        }
                        _objc_storeStrong(&local_1c0,0);
                        if (local_cc != 0) goto LAB_004c3e38;
                        local_380 = local_380 + 1;
                      } while (local_380 < local_378);
                      local_378 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,
                                 auStack_b0,0x10);
                      local_380 = (undefined *)0x0;
                    } while (local_378 != (undefined *)0x0);
                  }
                  local_cc = 0;
LAB_004c3e38:
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  _objc_storeStrong(&local_170,0);
                }
                _objc_storeStrong(&local_168,0);
              }
              pcVar7 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_genItemWithID_title_imageName_ac_0269f7d8,
                         &cf_WCRefine_search_plugin,&cf_d__cN,local_158,0,0);
              _objc_retainAutoreleasedReturnValue();
              local_1d0[0] = pcVar7;
              if (pcVar7 != (char *)0x0) {
                IVar6 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                local_1d8 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSInvocation_026ce208,
                           PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_setSelector__0269e1b0,local_110);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_setArgument_atIndex__0269eae8,local_1d0,2);
                local_1e1 = 0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_setArgument_atIndex__0269eae8,&local_1e1,3);
                local_1f0 = PTR_s_WCRefine_onSearchPluginTapped_026a3f78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_setArgument_atIndex__0269eae8,&local_1f0,4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
                (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_invoke_0269e1b8);
                _objc_storeStrong(&local_1e0);
                _objc_storeStrong(&local_1d8,0);
              }
              _objc_storeStrong(local_1d0);
              _objc_storeStrong(&local_158,0);
            }
          }
          if ((local_e7 & 1) != 0) {
            puVar3 = PTR_WCRefineClearUnreadMsgHook_026ce358;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineClearUnreadMsgHook_026ce358,
                       PTR_s_clearUnreadMenuItemData_026a3fd8);
            _objc_retainAutoreleasedReturnValue();
            local_1f8 = puVar3;
            if (puVar3 != (undefined *)0x0) {
              IVar6 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_200 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
              _objc_retainAutoreleasedReturnValue();
              local_208 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
              (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setSelector__0269e1b0,local_110)
              ;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208,PTR_s_setArgument_atIndex__0269eae8,&local_1f8,2);
              local_209 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208,PTR_s_setArgument_atIndex__0269eae8,&local_209,3);
              local_218 = PTR_s_WCRefine_onClearUnreadMsg_0269f898;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208,PTR_s_setArgument_atIndex__0269eae8,&local_218,4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
              (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_invoke_0269e1b8);
              _objc_storeStrong(&local_208);
              _objc_storeStrong(&local_200,0);
            }
            _objc_storeStrong(&local_1f8,0);
          }
          if ((local_e8 & 1) != 0) {
            puVar3 = PTR_WCRefineClearSessionHook_026ce348;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineClearSessionHook_026ce348,PTR_s_clearSessionMenuItemData_026a3fe0
                      );
            _objc_retainAutoreleasedReturnValue();
            local_220 = puVar3;
            if (puVar3 != (undefined *)0x0) {
              IVar6 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_228 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
              _objc_retainAutoreleasedReturnValue();
              local_230 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
              (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setSelector__0269e1b0,local_110)
              ;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_setArgument_atIndex__0269eae8,&local_220,2);
              local_231 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_setArgument_atIndex__0269eae8,&local_231,3);
              local_240 = PTR_s_WCRefine_onClearSession_026a3fe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_setArgument_atIndex__0269eae8,&local_240,4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
              (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_invoke_0269e1b8);
              _objc_storeStrong(&local_230);
              _objc_storeStrong(&local_228,0);
            }
            _objc_storeStrong(&local_220,0);
          }
          if ((local_e9 & 1) != 0) {
            pcVar7 = "RightTopMenuItemBtnData";
            _objc_getClass();
            local_248 = pcVar7;
            if (pcVar7 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_genItemWithID_title_imageName_ac_0269f7d8,
                         &cf_WCRefine_keywordAlert_history,&cf_U_SS,&cf_icons_outlined_ChangeNote,0,
                         0);
              _objc_retainAutoreleasedReturnValue();
              local_250 = pcVar7;
              if (pcVar7 != (char *)0x0) {
                IVar6 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                local_258 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSInvocation_026ce208,
                           PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
                _objc_retainAutoreleasedReturnValue();
                local_260 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setSelector__0269e1b0,local_110);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setArgument_atIndex__0269eae8,&local_250,2);
                local_261 = 0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setArgument_atIndex__0269eae8,&local_261,3);
                local_270 = PTR_s_WCRefine_onKeywordAlertHistoryTa_026a3f90;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setArgument_atIndex__0269eae8,&local_270,4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
                (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_invoke_0269e1b8);
                _objc_storeStrong(&local_260);
                _objc_storeStrong(&local_258,0);
              }
              _objc_storeStrong(&local_250,0);
            }
          }
          if ((local_ea & 1) != 0) {
            puVar3 = PTR_WCRefineDoNotDisturbHook_026ce6e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineDoNotDisturbHook_026ce6e8,PTR_s_menuItemData_026a3ff0);
            _objc_retainAutoreleasedReturnValue();
            local_278 = puVar3;
            if (puVar3 != (undefined *)0x0) {
              IVar6 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_methodSignatureForSelector__0269e190,local_110);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_280 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,IVar6);
              _objc_retainAutoreleasedReturnValue();
              local_288 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_b8);
              (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setSelector__0269e1b0,local_110)
              ;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_288,PTR_s_setArgument_atIndex__0269eae8,&local_278,2);
              local_289 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_288,PTR_s_setArgument_atIndex__0269eae8,&local_289,3);
              local_298 = PTR_s_WCRefine_onDoNotDisturbTapped_026a0c38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_288,PTR_s_setArgument_atIndex__0269eae8,&local_298,4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_288,PTR_s_setArgument_atIndex__0269eae8,&local_100,5);
              (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_invoke_0269e1b8);
              _objc_storeStrong(&local_288);
              _objc_storeStrong(&local_280,0);
            }
            _objc_storeStrong(&local_278,0);
          }
          local_cc = 0;
        }
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_d8,0);
    if (local_cc == 0) {
      local_cc = 0;
    }
    iVar1 = local_cc;
    _objc_setAssociatedObject(local_b8,&DAT_028cac28,0,1);
    if ((local_cd & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x4c4928);
      (*pcVar2)();
    }
    if ((iVar1 == 0) || (iVar1 == 2)) {
      iVar8 = 0;
      local_cc = 0;
    }
    else {
      iVar8 = iVar1 + -3;
      local_cc = iVar1;
      if (iVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x4c4a40);
        (*pcVar2)();
      }
    }
  }
  else {
    _objc_setAssociatedObject(local_b8,&DAT_028cac28,0,1);
    iVar8 = 1;
    local_cc = 1;
  }
  _objc_storeStrong(iVar8,&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

