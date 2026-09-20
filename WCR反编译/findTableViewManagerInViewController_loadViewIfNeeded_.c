// findTableViewManagerInViewController:loadViewIfNeeded: @ 014d1fcc

/* Function Stack Size: 0x1c bytes */

ID WCRefineSearchManager::findTableViewManagerInViewController_loadViewIfNeeded_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_1398;
  undefined *local_12d8;
  undefined *local_12d0;
  undefined *local_11b8;
  undefined *local_11b0;
  undefined *local_1010;
  undefined *local_1008;
  undefined *local_f28;
  undefined *local_f20;
  undefined *local_dd8;
  undefined *local_dd0;
  undefined *local_d20;
  undefined *local_d18;
  bool local_a41;
  cfstringStruct *local_a40;
  cfstringStruct *local_a38;
  long local_a30;
  ulong local_a28;
  long local_a20;
  uint local_a14;
  ulong local_a10;
  uint local_a04 [3];
  ulong local_9f8;
  undefined1 auStack_9f0 [8];
  long local_9e8;
  long *local_9e0;
  undefined8 local_9b0;
  undefined *local_9a8 [3];
  ulong local_990 [2];
  undefined1 local_979;
  ulong local_978;
  ulong local_960;
  ulong local_958;
  ulong local_950;
  undefined1 auStack_948 [8];
  long local_940;
  long *local_938;
  undefined8 local_908;
  undefined *local_900 [2];
  ulong local_8f0;
  ulong local_8e8;
  ulong local_8e0;
  ulong local_8d8;
  undefined1 local_8c1;
  ulong local_8c0;
  undefined *local_8b8 [3];
  ulong local_8a0 [2];
  undefined1 local_889;
  ulong local_888;
  ulong local_870;
  ulong local_868;
  undefined1 auStack_860 [8];
  long local_858;
  long *local_850;
  undefined8 local_820;
  undefined *local_818 [2];
  undefined1 local_801;
  ulong local_800;
  ulong local_7e8;
  ulong local_7e0;
  undefined1 auStack_7d8 [8];
  long local_7d0;
  long *local_7c8;
  undefined8 local_798;
  undefined *local_790 [2];
  undefined1 local_779;
  ulong local_778;
  ulong local_760 [2];
  ulong local_750;
  ulong local_748;
  ulong local_740;
  undefined1 auStack_738 [8];
  long local_730;
  long *local_728;
  undefined8 local_6f8;
  ulong local_6f0;
  undefined *local_6e8;
  ulong local_6e0;
  undefined1 local_6c9;
  ulong local_6c8;
  ulong local_6b0;
  undefined1 auStack_6a8 [8];
  long local_6a0;
  long *local_698;
  undefined8 local_668;
  undefined *local_660 [2];
  undefined1 local_649;
  ulong local_648;
  undefined *local_640 [2];
  ulong local_630;
  ulong local_628;
  ulong local_620;
  undefined1 local_609;
  ulong local_608;
  undefined *local_600;
  undefined *local_5f8;
  undefined *local_5f0;
  undefined *local_5e8 [2];
  ulong local_5d8;
  ulong local_5d0;
  ulong local_5c8;
  undefined1 local_5b1;
  ulong local_5b0;
  ulong local_5a0;
  ulong local_598;
  ulong local_590;
  undefined1 local_579;
  ulong local_578;
  ulong local_568;
  ulong local_560;
  ulong local_558;
  undefined1 local_541;
  ulong local_540;
  undefined *local_538 [2];
  ulong local_528;
  ulong local_520;
  ulong local_518;
  undefined1 local_501;
  ulong local_500;
  ulong local_4e8;
  int local_4e0;
  byte local_4d9;
  ulong local_4d8;
  SEL local_4d0;
  ID local_4c8;
  ulong local_4c0;
  undefined1 auStack_4b8 [128];
  cfstringStruct *local_438;
  cfstringStruct *local_430;
  cfstringStruct *local_428;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  cfstringStruct *local_408;
  cfstringStruct *local_400;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3e0;
  undefined1 auStack_3d8 [128];
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  undefined1 auStack_2f8 [128];
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  undefined1 auStack_260 [128];
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined1 auStack_1c8 [128];
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined1 auStack_130 [128];
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
  local_4d8 = 0;
  local_4d0 = param_2;
  local_4c8 = param_1;
  _objc_storeStrong(&local_4d8,param_3);
  local_4d9 = (byte)param_4;
  if (local_4d8 == 0) {
    local_4c0 = 0;
    local_4e0 = 1;
    goto LAB_014d6374;
  }
  uVar2 = local_4d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_4e8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_WCPulseSettingViewController);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = local_4e8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_WCPulseSpecialFeaturesViewController),
     (uVar2 & 1) == 0)) {
LAB_014d236c:
    local_58 = &cf_TheMessageController;
    local_50 = &cf_TheVoiceController;
    local_48 = &cf_TheTimeLineController;
    local_40 = &cf_TheGroupController;
    local_38 = &cf_TheSpecialController;
    local_30 = &cf_DisableWeChatController;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_538[0] = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8,local_4e8);
    if (((ulong)puVar5 & 1) == 0) {
LAB_014d26ec:
      uVar2 = local_4e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_hasPrefix__0269d320,&cf_WCPureExtension)
      ;
      if ((uVar2 & 1) != 0) {
        local_579 = 0;
        uVar1 = (local_4d9 & 1) != 0;
        if ((bool)uVar1) {
          uVar2 = local_4d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_579 = uVar1;
          local_578 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar1 = local_579;
        }
        local_579 = uVar1;
        uVar2 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
        local_590 = uVar2;
        _class_getInstanceVariable(uVar2,"tableViewMgr");
        local_598 = uVar2;
        if (uVar2 != 0) {
          uVar3 = local_4d8;
          FUN_014d63c8(local_4d8,uVar2);
          _objc_retainAutoreleasedReturnValue();
          local_5a0 = uVar3;
          if (uVar3 == 0) {
LAB_014d2940:
            local_4e0 = 0;
          }
          else {
            pcVar4 = "WCTableViewManager";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
            uVar2 = local_5a0;
            if ((uVar3 & 1) == 0) goto LAB_014d2940;
            (*(code *)PTR__objc_retain_02578638)();
            local_4c0 = uVar2;
            local_4e0 = 1;
          }
          _objc_storeStrong(&local_5a0,0);
          if (local_4e0 != 0) goto LAB_014d6314;
        }
      }
      uVar2 = local_4e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_hasPrefix__0269d320,&cf_WeChatTweak);
      if ((uVar2 & 1) != 0) {
        local_5b1 = 0;
        uVar1 = (local_4d9 & 1) != 0;
        if ((bool)uVar1) {
          uVar2 = local_4d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_5b1 = uVar1;
          local_5b0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar1 = local_5b1;
        }
        local_5b1 = uVar1;
        uVar2 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
        local_5c8 = uVar2;
        _class_getInstanceVariable(uVar2,"tableViewMgr");
        local_5d0 = uVar2;
        if (uVar2 != 0) {
          uVar3 = local_4d8;
          FUN_014d63c8(local_4d8,uVar2);
          _objc_retainAutoreleasedReturnValue();
          local_5d8 = uVar3;
          if (uVar3 == 0) {
LAB_014d2bf4:
            local_4e0 = 0;
          }
          else {
            pcVar4 = "WCTableViewManager";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
            uVar2 = local_5d8;
            if ((uVar3 & 1) == 0) goto LAB_014d2bf4;
            (*(code *)PTR__objc_retain_02578638)();
            local_4c0 = uVar2;
            local_4e0 = 1;
          }
          _objc_storeStrong(&local_5d8,0);
          if (local_4e0 != 0) goto LAB_014d6314;
        }
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_68 = &cf_QBXwzqnbgtkquptgugw;
      local_60 = &cf_CUEizyi;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithArray__0269eab8);
      _objc_retainAutoreleasedReturnValue();
      local_5e8[0] = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_5f0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_pkcOldSettingsVC_026af560);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_5f0;
      local_5f8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_5f0,PTR_s_pkcLetsGoVC_026af568);
      _objc_retainAutoreleasedReturnValue();
      local_600 = puVar6;
      if (((local_5f8 != (undefined *)0x0) &&
          (puVar5 = local_5f8,
          (*(code *)PTR__objc_msgSend_02578628)(local_5f8,PTR_s_length_0269cca0),
          puVar5 != (undefined *)0x0)) &&
         (puVar5 = local_5e8[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_5e8[0],PTR_s_containsObject__0269cbb8,local_5f8), ((ulong)puVar5 & 1) == 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)(local_5e8[0],PTR_s_addObject__0269d180,local_5f8);
      }
      if (((local_600 != (undefined *)0x0) &&
          (puVar5 = local_600,
          (*(code *)PTR__objc_msgSend_02578628)(local_600,PTR_s_length_0269cca0),
          puVar5 != (undefined *)0x0)) &&
         (puVar5 = local_5e8[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_5e8[0],PTR_s_containsObject__0269cbb8,local_600), ((ulong)puVar5 & 1) == 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)(local_5e8[0],PTR_s_addObject__0269d180,local_600);
      }
      puVar5 = local_5e8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_5e8[0],PTR_s_containsObject__0269cbb8,local_4e8);
      if (((ulong)puVar5 & 1) == 0) {
LAB_014d3160:
        local_90 = &cf_SettingMyProfileViewController;
        local_88 = &cf_SettingMyAccountInfoViewController;
        local_80 = &cf_SettingNotificationViewController;
        local_78 = &cf_SettingGeneralViewController;
        local_70 = &cf_SettingPrivateConfigViewController;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_90,5);
        _objc_retainAutoreleasedReturnValue();
        local_640[0] = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8,local_4e8);
        if (((ulong)puVar5 & 1) == 0) {
LAB_014d3688:
          uVar2 = local_4e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_hasPrefix__0269d320,&cf_WCRefine);
          if ((((uVar2 & 1) != 0) ||
              (uVar2 = local_4e8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_AccountDetailViewController),
              (uVar2 & 1) != 0)) ||
             (uVar2 = local_4e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_ThemeExchangeViewController),
             (uVar2 & 1) != 0)) {
            local_6c9 = 0;
            uVar1 = (local_4d9 & 1) != 0;
            if ((bool)uVar1) {
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_6c9 = uVar1;
              local_6c8 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar1 = local_6c9;
            }
            local_6c9 = uVar1;
            uVar2 = local_4d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
            local_148 = &cf_tableViewMgr;
            local_140 = &cf__manager;
            local_138 = &cf_manager;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_6e0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_148,3);
            _objc_retainAutoreleasedReturnValue();
            local_6f0 = 0;
            local_6e8 = puVar5;
            _memset(auStack_738,0,0x40);
            puVar5 = local_6e8;
            (*(code *)PTR__objc_retain_02578638)();
            local_dd0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_738,
                       auStack_1c8,0x10);
            if (local_dd0 != (undefined *)0x0) {
              lVar7 = *local_728;
              local_dd8 = (undefined *)0x0;
              do {
                do {
                  if (*local_728 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_728 - lVar7,puVar5);
                  }
                  local_6f8 = *(undefined8 *)(local_730 + (long)local_dd8 * 8);
                  local_740 = local_6e0;
                  while (uVar8 = local_6f8, uVar2 = local_740, local_740 != 0) {
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_UTF8String_026a2e68);
                    _class_getInstanceVariable(uVar2,uVar8);
                    local_748 = uVar2;
                    if (uVar2 != 0) {
                      uVar3 = local_4d8;
                      FUN_014d63c8(local_4d8,uVar2);
                      _objc_retainAutoreleasedReturnValue();
                      uVar2 = local_6f0;
                      local_6f0 = uVar3;
                      (*(code *)PTR__objc_release_02578630)(uVar2);
                      uVar2 = local_6f0;
                      if (local_6f0 != 0) {
                        pcVar4 = "WCTableViewManager";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                        if ((uVar2 & 1) != 0) break;
                      }
                      _objc_storeStrong(&local_6f0,0);
                    }
                    _class_getSuperclass();
                  }
                  if (local_6f0 != 0) {
                    local_4e0 = 0x14;
                    goto LAB_014d3b60;
                  }
                  local_dd8 = local_dd8 + 1;
                } while (local_dd8 < local_dd0);
                local_dd0 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_738,
                           auStack_1c8,0x10);
                local_dd8 = (undefined *)0x0;
              } while (local_dd0 != (undefined *)0x0);
            }
            local_4e0 = 0;
LAB_014d3b60:
            (*(code *)PTR__objc_release_02578630)(puVar5);
            uVar2 = local_6f0;
            if (local_6f0 == 0) {
LAB_014d3bdc:
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4d8,PTR_s_valueForKey__0269d128,&cf_manager);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = "WCTableViewManager";
              local_750 = uVar2;
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
              if ((uVar2 & 1) != 0) {
                _objc_storeStrong(&local_6f0,local_750);
              }
              _objc_storeStrong(&local_750,0);
            }
            else {
              pcVar4 = "WCTableViewManager";
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
              if ((uVar2 & 1) == 0) goto LAB_014d3bdc;
            }
            uVar2 = local_6f0;
            if (local_6f0 == 0) {
LAB_014d3fac:
              local_4e0 = 0;
            }
            else {
              pcVar4 = "WCTableViewManager";
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
              if ((uVar2 & 1) == 0) goto LAB_014d3fac;
              local_760[0] = 0;
              uVar2 = local_6f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_6f0,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618)
              ;
              if ((uVar2 & 1) != 0) {
                uVar3 = local_6f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_6f0,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_760[0];
                local_760[0] = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              if ((local_760[0] == 0) ||
                 (uVar2 = local_760[0],
                 (*(code *)PTR__objc_msgSend_02578628)(local_760[0],PTR_s_count_0269cfe0),
                 uVar2 == 0)) {
                uVar2 = local_4d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_4d8,PTR_s_respondsToSelector__026ca818,
                           PTR_s_reloadTableData_0269dca8);
                if ((uVar2 & 1) == 0) {
                  uVar2 = local_4d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_respondsToSelector__026ca818,PTR_s_reload_026af6c8);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = local_6f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_6f0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_reloadAllSections_026af6d0);
                    if ((uVar2 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_6f0,PTR_s_performSelector__026ca7b8,
                                 PTR_s_reloadAllSections_026af6d0);
                    }
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4d8,PTR_s_performSelector__026ca7b8,PTR_s_reload_026af6c8);
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_performSelector__026ca7b8,
                             PTR_s_reloadTableData_0269dca8);
                }
              }
              _objc_storeStrong(local_760,0);
              uVar2 = local_6f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_4c0 = uVar2;
              local_4e0 = 1;
            }
            _objc_storeStrong(&local_6f0);
            _objc_storeStrong(&local_6e8,0);
            if (local_4e0 != 0) goto LAB_014d62cc;
          }
          uVar2 = local_4e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_hasPrefix__0269d320,&cf_ThemeBox);
          if ((uVar2 & 1) != 0) {
            local_779 = 0;
            uVar1 = (local_4d9 & 1) != 0;
            if ((bool)uVar1) {
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_779 = uVar1;
              local_778 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar1 = local_779;
            }
            local_779 = uVar1;
            local_1e0 = &cf_tableView;
            local_1d8 = &cf__tableView;
            local_1d0 = &cf_m_tableView;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_1e0,3);
            _objc_retainAutoreleasedReturnValue();
            local_790[0] = puVar5;
            _memset(auStack_7d8,0,0x40);
            puVar5 = local_790[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_f20 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7d8,
                       auStack_260,0x10);
            if (local_f20 != (undefined *)0x0) {
              lVar7 = *local_7c8;
              local_f28 = (undefined *)0x0;
              do {
                do {
                  if (*local_7c8 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_7c8 - lVar7,puVar5);
                  }
                  local_798 = *(undefined8 *)(local_7d0 + (long)local_f28 * 8);
                  uVar2 = local_4d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_valueForKey__0269d128,local_798);
                  _objc_retainAutoreleasedReturnValue();
                  local_7e0 = uVar2;
                  if (uVar2 == 0) {
LAB_014d4480:
                    local_4e0 = 0;
                  }
                  else {
                    puVar6 = PTR__OBJC_CLASS___UITableView_026ce1a8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
                    if ((uVar2 & 1) == 0) goto LAB_014d4480;
                    uVar2 = local_7e0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_7e0,PTR_s_dataSource_0269e800);
                    _objc_retainAutoreleasedReturnValue();
                    local_7e8 = uVar2;
                    if (uVar2 == 0) {
LAB_014d445c:
                      local_4e0 = 0;
                    }
                    else {
                      pcVar4 = "WCTableViewManager";
                      _objc_getClass();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                      uVar3 = local_7e8;
                      if ((uVar2 & 1) == 0) {
                        pcVar4 = "MMTableViewInfo";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                        if ((uVar3 & 1) == 0) goto LAB_014d445c;
                      }
                      uVar2 = local_7e8;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_4c0 = uVar2;
                      local_4e0 = 1;
                    }
                    _objc_storeStrong(&local_7e8,0);
                    if (local_4e0 == 0) goto LAB_014d4480;
                  }
                  _objc_storeStrong(&local_7e0,0);
                  if (local_4e0 != 0) goto LAB_014d451c;
                  local_f28 = local_f28 + 1;
                } while (local_f28 < local_f20);
                local_f20 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7d8,
                           auStack_260,0x10);
                local_f28 = (undefined *)0x0;
              } while (local_f20 != (undefined *)0x0);
            }
            local_4e0 = 0;
LAB_014d451c:
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_4e0 == 0) {
              local_4e0 = 0;
            }
            _objc_storeStrong(local_790,0);
            if (local_4e0 != 0) goto LAB_014d62cc;
          }
          uVar2 = local_4e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_hasPrefix__0269d320,&cf_BubbleBox);
          if (((uVar2 & 1) != 0) ||
             (uVar2 = local_4e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_BubbleSettingViewController),
             (uVar2 & 1) != 0)) {
            local_801 = 0;
            uVar1 = (local_4d9 & 1) != 0;
            if ((bool)uVar1) {
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_801 = uVar1;
              local_800 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar1 = local_801;
            }
            local_801 = uVar1;
            local_278 = &cf_tableView;
            local_270 = &cf__tableView;
            local_268 = &cf_m_tableView;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_278,3);
            _objc_retainAutoreleasedReturnValue();
            local_818[0] = puVar5;
            _memset(auStack_860,0,0x40);
            puVar5 = local_818[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_1008 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_860,
                       auStack_2f8,0x10);
            if (local_1008 != (undefined *)0x0) {
              lVar7 = *local_850;
              local_1010 = (undefined *)0x0;
              do {
                do {
                  if (*local_850 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_850 - lVar7,puVar5);
                  }
                  local_820 = *(undefined8 *)(local_858 + (long)local_1010 * 8);
                  uVar2 = local_4d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_valueForKey__0269d128,local_820);
                  _objc_retainAutoreleasedReturnValue();
                  local_868 = uVar2;
                  if (uVar2 == 0) {
LAB_014d4a68:
                    local_4e0 = 0;
                  }
                  else {
                    puVar6 = PTR__OBJC_CLASS___UITableView_026ce1a8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
                    if ((uVar2 & 1) == 0) goto LAB_014d4a68;
                    uVar2 = local_868;
                    (*(code *)PTR__objc_msgSend_02578628)(local_868,PTR_s_dataSource_0269e800);
                    _objc_retainAutoreleasedReturnValue();
                    local_870 = uVar2;
                    if (uVar2 == 0) {
LAB_014d4a44:
                      local_4e0 = 0;
                    }
                    else {
                      pcVar4 = "WCTableViewManager";
                      _objc_getClass();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                      uVar3 = local_870;
                      if ((uVar2 & 1) == 0) {
                        pcVar4 = "MMTableViewInfo";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                        if ((uVar3 & 1) == 0) goto LAB_014d4a44;
                      }
                      uVar2 = local_870;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_4c0 = uVar2;
                      local_4e0 = 1;
                    }
                    _objc_storeStrong(&local_870,0);
                    if (local_4e0 == 0) goto LAB_014d4a68;
                  }
                  _objc_storeStrong(&local_868,0);
                  if (local_4e0 != 0) goto LAB_014d4b04;
                  local_1010 = local_1010 + 1;
                } while (local_1010 < local_1008);
                local_1008 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_860,
                           auStack_2f8,0x10);
                local_1010 = (undefined *)0x0;
              } while (local_1008 != (undefined *)0x0);
            }
            local_4e0 = 0;
LAB_014d4b04:
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_4e0 == 0) {
              local_4e0 = 0;
            }
            _objc_storeStrong(local_818,0);
            if (local_4e0 != 0) goto LAB_014d62cc;
          }
          uVar2 = local_4e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_BNHelperSettingController);
          if ((uVar2 & 1) != 0) {
            local_889 = 0;
            uVar1 = (local_4d9 & 1) != 0;
            if ((bool)uVar1) {
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_889 = uVar1;
              local_888 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar1 = local_889;
            }
            local_889 = uVar1;
            uVar2 = local_4d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_valueForKey__0269d128,&cf_manager)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_8a0[0] = uVar2;
            if (uVar2 == 0) {
LAB_014d4dd8:
              local_4e0 = 0;
            }
            else {
              pcVar4 = "WCTableViewManager";
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
              uVar3 = local_8a0[0];
              if ((uVar2 & 1) == 0) goto LAB_014d4dd8;
              (*(code *)PTR__objc_retain_02578638)();
              local_4c0 = uVar3;
              local_4e0 = 1;
            }
            _objc_storeStrong(local_8a0,0);
            if (local_4e0 != 0) goto LAB_014d62cc;
          }
          local_338 = &cf_WCEnhanceSettingViewController;
          local_330 = &cf_WCEhanceViewController;
          local_328 = &cf_WCUIBeautifyController;
          local_320 = &cf_WCCustomNameController;
          local_318 = &cf_WCHideToolController;
          local_310 = &cf_WCVersionFakeController;
          local_308 = &cf_WCEnhanceToolController;
          local_300 = &cf_WCAboutController;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_338,8);
          _objc_retainAutoreleasedReturnValue();
          local_8b8[0] = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8,local_4e8);
          if (((ulong)puVar5 & 1) == 0) {
LAB_014d5954:
            uVar2 = local_4e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_4e8,PTR_s_isEqualToString__0269ccc8,&cf_DouTuSettingViewController);
            if ((uVar2 & 1) != 0) {
              local_979 = 0;
              uVar1 = (local_4d9 & 1) != 0;
              if ((bool)uVar1) {
                uVar2 = local_4d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
                _objc_retainAutoreleasedReturnValue();
                local_979 = uVar1;
                local_978 = uVar2;
                (*(code *)PTR__objc_release_02578630)(uVar2);
                uVar1 = local_979;
              }
              local_979 = uVar1;
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4d8,PTR_s_valueForKey__0269d128,&cf_tableViewManager);
              _objc_retainAutoreleasedReturnValue();
              local_990[0] = uVar2;
              if (uVar2 == 0) {
LAB_014d5b78:
                local_4e0 = 0;
              }
              else {
                pcVar4 = "WCTableViewManager";
                _objc_getClass();
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                uVar3 = local_990[0];
                if ((uVar2 & 1) == 0) goto LAB_014d5b78;
                (*(code *)PTR__objc_retain_02578638)();
                local_4c0 = uVar3;
                local_4e0 = 1;
              }
              _objc_storeStrong(local_990,0);
              if (local_4e0 != 0) goto LAB_014d62bc;
            }
            local_438 = &cf_tableViewMgr;
            local_430 = &cf__tableViewMgr;
            local_428 = &cf_m_tableViewMgr;
            local_420 = &cf_tableViewManager;
            local_418 = &cf__tableViewManager;
            local_410 = &cf_m_tableViewManager;
            local_408 = &cf_tableViewInfo;
            local_400 = &cf_m_tableViewInfo;
            local_3f8 = &cf_tableManager;
            local_3f0 = &cf__tableManager;
            local_3e8 = &cf_manager;
            local_3e0 = &cf__manager;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_438,0xc);
            _objc_retainAutoreleasedReturnValue();
            local_9a8[0] = puVar5;
            _memset(auStack_9f0,0,0x40);
            puVar5 = local_9a8[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_12d0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_9f0,
                       auStack_4b8,0x10);
            if (local_12d0 != (undefined *)0x0) {
              lVar7 = *local_9e0;
              local_12d8 = (undefined *)0x0;
              do {
                do {
                  if (*local_9e0 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_9e0 - lVar7,puVar5);
                  }
                  local_9b0 = *(undefined8 *)(local_9e8 + (long)local_12d8 * 8);
                  uVar2 = local_4d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_valueForKey__0269d128,local_9b0);
                  _objc_retainAutoreleasedReturnValue();
                  local_9f8 = uVar2;
                  if (uVar2 == 0) {
LAB_014d5ec0:
                    local_4e0 = 0;
                  }
                  else {
                    pcVar4 = "WCTableViewManager";
                    _objc_getClass();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                    uVar3 = local_9f8;
                    if ((uVar2 & 1) == 0) {
                      pcVar4 = "MMTableViewInfo";
                      _objc_getClass();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                      if ((uVar3 & 1) == 0) goto LAB_014d5ec0;
                    }
                    uVar2 = local_9f8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_4c0 = uVar2;
                    local_4e0 = 1;
                  }
                  _objc_storeStrong(&local_9f8,0);
                  if (local_4e0 != 0) goto LAB_014d5f58;
                  local_12d8 = local_12d8 + 1;
                } while (local_12d8 < local_12d0);
                local_12d0 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_9f0,
                           auStack_4b8,0x10);
                local_12d8 = (undefined *)0x0;
              } while (local_12d0 != (undefined *)0x0);
            }
            local_4e0 = 0;
LAB_014d5f58:
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_4e0 == 0) {
              local_a04[0] = 0;
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
              _class_copyIvarList(uVar2,local_a04);
              local_a10 = uVar2;
              for (local_a14 = 0; local_a14 < local_a04[0]; local_a14 = local_a14 + 1) {
                local_a20 = *(long *)(local_a10 + (ulong)local_a14 * 8);
                uVar2 = local_4d8;
                FUN_014d63c8(local_4d8,local_a20);
                _objc_retainAutoreleasedReturnValue();
                local_a28 = uVar2;
                if (uVar2 == 0) {
LAB_014d6224:
                  local_4e0 = 0;
                }
                else {
                  pcVar4 = "WCTableViewManager";
                  _objc_getClass();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                  uVar3 = local_a28;
                  if ((uVar2 & 1) == 0) {
                    pcVar4 = "MMTableViewInfo";
                    _objc_getClass();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                    if ((uVar3 & 1) == 0) goto LAB_014d6224;
                  }
                  lVar7 = local_a20;
                  _ivar_getName();
                  local_a30 = lVar7;
                  if (lVar7 == 0) {
                    local_1398 = &cf__unknown_;
                  }
                  else {
                    local_1398 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,
                               PTR_s_stringWithUTF8String__0269fd30,lVar7);
                    _objc_retainAutoreleasedReturnValue();
                    local_a40 = local_1398;
                  }
                  local_a41 = lVar7 != 0;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_a38 = local_1398;
                  if (local_a41) {
                    (*(code *)PTR__objc_release_02578630)(local_a40);
                  }
                  _free(local_a10);
                  uVar2 = local_a28;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_4c0 = uVar2;
                  local_4e0 = 1;
                  _objc_storeStrong(&local_a38,0);
                }
                _objc_storeStrong(&local_a28,0);
                if (local_4e0 != 0) goto LAB_014d62ac;
              }
              _free(local_a14 - local_a04[0],local_a10);
              local_4c0 = 0;
              local_4e0 = 1;
            }
LAB_014d62ac:
            _objc_storeStrong(local_9a8,0);
          }
          else {
            local_8c1 = 0;
            uVar1 = (local_4d9 & 1) != 0;
            if ((bool)uVar1) {
              uVar2 = local_4d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_8c1 = uVar1;
              local_8c0 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar1 = local_8c1;
            }
            local_8c1 = uVar1;
            uVar2 = local_4d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
            local_8d8 = uVar2;
            _class_getInstanceVariable(uVar2,"manager");
            local_8e0 = uVar2;
            if (uVar2 == 0) {
LAB_014d53b4:
              local_358 = &cf_tableViewMgr;
              local_350 = &cf__tableViewMgr;
              local_348 = &cf_tableViewManager;
              local_340 = &cf__tableViewManager;
              puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_358,4);
              _objc_retainAutoreleasedReturnValue();
              local_900[0] = puVar5;
              _memset(auStack_948,0,0x40);
              puVar5 = local_900[0];
              (*(code *)PTR__objc_retain_02578638)();
              local_11b0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_948,
                         auStack_3d8,0x10);
              if (local_11b0 != (undefined *)0x0) {
                lVar7 = *local_938;
                local_11b8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_938 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_938 - lVar7,puVar5);
                    }
                    uVar2 = local_8d8;
                    uVar8 = *(undefined8 *)(local_940 + (long)local_11b8 * 8);
                    local_908 = uVar8;
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_UTF8String_026a2e68);
                    _class_getInstanceVariable(uVar2,uVar8);
                    local_950 = uVar2;
                    if (uVar2 != 0) {
                      uVar3 = local_4d8;
                      FUN_014d63c8(local_4d8,uVar2);
                      _objc_retainAutoreleasedReturnValue();
                      local_958 = uVar3;
                      if (uVar3 == 0) {
LAB_014d5840:
                        local_4e0 = 0;
                      }
                      else {
                        pcVar4 = "WCTableViewManager";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                        if ((uVar3 & 1) == 0) goto LAB_014d5840;
                        local_960 = 0;
                        uVar2 = local_958;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_958,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_getAllSections_026af618);
                        if ((uVar2 & 1) != 0) {
                          uVar3 = local_958;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_958,PTR_s_performSelector__026ca7b8,
                                     PTR_s_getAllSections_026af618);
                          _objc_retainAutoreleasedReturnValue();
                          uVar2 = local_960;
                          local_960 = uVar3;
                          (*(code *)PTR__objc_release_02578630)(uVar2);
                        }
                        if ((local_960 == 0) ||
                           (uVar2 = local_960,
                           (*(code *)PTR__objc_msgSend_02578628)(local_960,PTR_s_count_0269cfe0),
                           uVar2 == 0)) {
                          uVar2 = local_4d8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_4d8,PTR_s_respondsToSelector__026ca818,
                                     PTR_s_reloadTableData_0269dca8);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = local_4d8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_4d8,PTR_s_respondsToSelector__026ca818,
                                       PTR_s_reload_026af6c8);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = local_958;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_958,PTR_s_respondsToSelector__026ca818,
                                         PTR_s_reloadAllSections_026af6d0);
                              if ((uVar2 & 1) != 0) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_958,PTR_s_performSelector__026ca7b8,
                                           PTR_s_reloadAllSections_026af6d0);
                              }
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_4d8,PTR_s_performSelector__026ca7b8,
                                         PTR_s_reload_026af6c8);
                            }
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_4d8,PTR_s_performSelector__026ca7b8,
                                       PTR_s_reloadTableData_0269dca8);
                          }
                        }
                        _objc_storeStrong(&local_960,0);
                        uVar2 = local_958;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_4c0 = uVar2;
                        local_4e0 = 1;
                      }
                      _objc_storeStrong(&local_958,0);
                      if (local_4e0 != 0) goto LAB_014d58d8;
                    }
                    local_11b8 = local_11b8 + 1;
                  } while (local_11b8 < local_11b0);
                  local_11b0 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_948,
                             auStack_3d8,0x10);
                  local_11b8 = (undefined *)0x0;
                } while (local_11b0 != (undefined *)0x0);
              }
              local_4e0 = 0;
LAB_014d58d8:
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if (local_4e0 == 0) {
                local_4e0 = 0;
              }
              _objc_storeStrong(local_900,0);
              if (local_4e0 == 0) goto LAB_014d5954;
            }
            else {
              uVar3 = local_4d8;
              FUN_014d63c8(local_4d8,uVar2);
              _objc_retainAutoreleasedReturnValue();
              local_8e8 = uVar3;
              if (uVar3 == 0) {
LAB_014d5390:
                local_4e0 = 0;
              }
              else {
                pcVar4 = "WCTableViewManager";
                _objc_getClass();
                (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
                if ((uVar3 & 1) == 0) goto LAB_014d5390;
                local_8f0 = 0;
                uVar2 = local_8e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_8e8,PTR_s_respondsToSelector__026ca818,
                           PTR_s_getAllSections_026af618);
                if ((uVar2 & 1) != 0) {
                  uVar3 = local_8e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_8e8,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618
                            );
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = local_8f0;
                  local_8f0 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                }
                if ((local_8f0 == 0) ||
                   (uVar2 = local_8f0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_8f0,PTR_s_count_0269cfe0), uVar2 == 0
                   )) {
                  uVar2 = local_4d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4d8,PTR_s_respondsToSelector__026ca818,
                             PTR_s_reloadTableData_0269dca8);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = local_4d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4d8,PTR_s_respondsToSelector__026ca818,PTR_s_reload_026af6c8);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = local_8e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_8e8,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_reloadAllSections_026af6d0);
                      if ((uVar2 & 1) != 0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_8e8,PTR_s_performSelector__026ca7b8,
                                   PTR_s_reloadAllSections_026af6d0);
                      }
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_4d8,PTR_s_performSelector__026ca7b8,PTR_s_reload_026af6c8);
                    }
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4d8,PTR_s_performSelector__026ca7b8,
                               PTR_s_reloadTableData_0269dca8);
                  }
                }
                _objc_storeStrong(&local_8f0,0);
                uVar2 = local_8e8;
                (*(code *)PTR__objc_retain_02578638)();
                local_4c0 = uVar2;
                local_4e0 = 1;
              }
              _objc_storeStrong(&local_8e8,0);
              if (local_4e0 == 0) goto LAB_014d53b4;
            }
          }
LAB_014d62bc:
          _objc_storeStrong(local_8b8,0);
        }
        else {
          local_649 = 0;
          uVar1 = (local_4d9 & 1) != 0;
          if ((bool)uVar1) {
            uVar2 = local_4d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            local_649 = uVar1;
            local_648 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            uVar1 = local_649;
          }
          local_649 = uVar1;
          local_b0 = &cf_m_tableViewMgr;
          local_a8 = &cf__m_tableViewMgr;
          local_a0 = &cf_tableViewMgr;
          local_98 = &cf__tableViewMgr;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_b0,4);
          _objc_retainAutoreleasedReturnValue();
          local_660[0] = puVar5;
          _memset(auStack_6a8,0,0x40);
          puVar5 = local_660[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_d18 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6a8,auStack_130,
                     0x10);
          if (local_d18 != (undefined *)0x0) {
            lVar7 = *local_698;
            local_d20 = (undefined *)0x0;
            do {
              do {
                if (*local_698 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_698 - lVar7,puVar5);
                }
                local_668 = *(undefined8 *)(local_6a0 + (long)local_d20 * 8);
                uVar2 = local_4d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_4d8,PTR_s_valueForKey__0269d128,local_668);
                _objc_retainAutoreleasedReturnValue();
                local_6b0 = uVar2;
                if (uVar2 == 0) {
LAB_014d353c:
                  local_4e0 = 0;
                }
                else {
                  pcVar4 = "WCTableViewManager";
                  _objc_getClass();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
                  uVar3 = local_6b0;
                  if ((uVar2 & 1) == 0) goto LAB_014d353c;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_4c0 = uVar3;
                  local_4e0 = 1;
                }
                _objc_storeStrong(&local_6b0,0);
                if (local_4e0 != 0) goto LAB_014d35d8;
                local_d20 = local_d20 + 1;
              } while (local_d20 < local_d18);
              local_d18 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6a8,
                         auStack_130,0x10);
              local_d20 = (undefined *)0x0;
            } while (local_d18 != (undefined *)0x0);
          }
          local_4e0 = 0;
LAB_014d35d8:
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (local_4e0 == 0) {
            local_4e0 = 0;
          }
          _objc_storeStrong(local_660,0);
          if (local_4e0 == 0) goto LAB_014d3688;
        }
LAB_014d62cc:
        _objc_storeStrong(local_640,0);
      }
      else {
        local_609 = 0;
        uVar1 = (local_4d9 & 1) != 0;
        if ((bool)uVar1) {
          uVar2 = local_4d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_609 = uVar1;
          local_608 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar1 = local_609;
        }
        local_609 = uVar1;
        uVar2 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
        local_620 = uVar2;
        _class_getInstanceVariable(uVar2,"tableViewMgr");
        local_628 = uVar2;
        if (uVar2 == 0) goto LAB_014d3160;
        uVar3 = local_4d8;
        FUN_014d63c8(local_4d8,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_630 = uVar3;
        if (uVar3 == 0) {
LAB_014d3100:
          local_4e0 = 0;
        }
        else {
          pcVar4 = "WCTableViewManager";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
          uVar2 = local_630;
          if ((uVar3 & 1) == 0) goto LAB_014d3100;
          (*(code *)PTR__objc_retain_02578638)();
          local_4c0 = uVar2;
          local_4e0 = 1;
        }
        _objc_storeStrong(&local_630,0);
        if (local_4e0 == 0) goto LAB_014d3160;
      }
      _objc_storeStrong(&local_600);
      _objc_storeStrong(&local_5f8,0);
      _objc_storeStrong(&local_5f0,0);
      _objc_storeStrong(local_5e8,0);
    }
    else {
      local_541 = 0;
      uVar1 = (local_4d9 & 1) != 0;
      if ((bool)uVar1) {
        uVar2 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_541 = uVar1;
        local_540 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar1 = local_541;
      }
      local_541 = uVar1;
      uVar2 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
      local_558 = uVar2;
      _class_getInstanceVariable(uVar2,"manager");
      local_560 = uVar2;
      if (uVar2 == 0) goto LAB_014d26ec;
      uVar3 = local_4d8;
      FUN_014d63c8(local_4d8,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_568 = uVar3;
      if (uVar3 == 0) {
LAB_014d268c:
        local_4e0 = 0;
      }
      else {
        pcVar4 = "MMTableViewInfo";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
        uVar2 = local_568;
        if ((uVar3 & 1) == 0) {
          pcVar4 = "WCTableViewManager";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
          if ((uVar2 & 1) == 0) goto LAB_014d268c;
        }
        uVar2 = local_568;
        (*(code *)PTR__objc_retain_02578638)();
        local_4c0 = uVar2;
        local_4e0 = 1;
      }
      _objc_storeStrong(&local_568,0);
      if (local_4e0 == 0) goto LAB_014d26ec;
    }
LAB_014d6314:
    _objc_storeStrong(local_538,0);
  }
  else {
    local_501 = 0;
    uVar1 = (local_4d9 & 1) != 0;
    if ((bool)uVar1) {
      uVar2 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_501 = uVar1;
      local_500 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = local_501;
    }
    local_501 = uVar1;
    uVar2 = local_4d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_class_0269cd60);
    local_518 = uVar2;
    _class_getInstanceVariable(uVar2,"manager");
    local_520 = uVar2;
    if (uVar2 == 0) goto LAB_014d236c;
    uVar3 = local_4d8;
    FUN_014d63c8(local_4d8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_528 = uVar3;
    if (uVar3 == 0) {
LAB_014d230c:
      local_4e0 = 0;
    }
    else {
      pcVar4 = "WCTableViewManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
      uVar2 = local_528;
      if ((uVar3 & 1) == 0) goto LAB_014d230c;
      (*(code *)PTR__objc_retain_02578638)();
      local_4c0 = uVar2;
      local_4e0 = 1;
    }
    _objc_storeStrong(&local_528,0);
    if (local_4e0 == 0) goto LAB_014d236c;
  }
  _objc_storeStrong(&local_4e8,0);
LAB_014d6374:
  _objc_storeStrong(&local_4d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_4c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

