// FUN_000ad3b4 @ 000ad3b4

void FUN_000ad3b4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  undefined *local_5c8;
  undefined *local_278;
  undefined *local_250;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  char *local_120;
  cfstringStruct *local_118;
  char *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  char *local_b8;
  char *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  char *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  int local_5c;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = pcVar1;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 == (cfstringStruct *)0x2) {
      pcVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(local_58,0);
  }
  pcVar1 = local_40;
  FUN_000bc4c4();
  puVar4 = local_28;
  if (((ulong)pcVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_250 = (undefined *)0x0;
    }
    else {
      local_250 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_250;
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      local_278 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_278 = local_28;
      }
      _objc_storeStrong(&local_70,local_278);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_68;
    FUN_000bc808(local_68,local_70);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefinePluginAggregateSearch);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineWeChatOfficialSearch);
      if (((ulong)pcVar1 & 1) == 0) {
        local_80 = (cfstringStruct *)0x0;
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCPayMainViewControllerV2);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_KindaViewController);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineViewController);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,
                         &cf_WCFinderTimelineTabViewController);
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,
                           &cf_WCFinderLiveHomePageViewController);
                if (((ulong)pcVar1 & 1) == 0) {
                  pcVar1 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_CameraScanViewController);
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCRefineRootViewController);
                    if (((ulong)pcVar1 & 1) == 0) {
                      pcVar1 = local_40;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_isEqualToString__0269ccc8,
                                 &cf_WCRefineFloatingTabBarSettingsViewController);
                      if (((ulong)pcVar1 & 1) == 0) {
                        pcVar1 = local_40;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_40,PTR_s_isEqualToString__0269ccc8,
                                   &cf_WCPluginsViewController);
                        if (((ulong)pcVar1 & 1) == 0) {
                          pcVar1 = local_40;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_40,PTR_s_isEqualToString__0269ccc8,
                                     &cf_ThemeBoxViewController);
                          if (((ulong)pcVar1 & 1) == 0) {
                            pcVar1 = local_40;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_40,PTR_s_isEqualToString__0269ccc8,
                                       &cf_NewHBALLSettingController);
                            if (((ulong)pcVar1 & 1) == 0) {
                              pcVar1 = local_40;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_40,PTR_s_isEqualToString__0269ccc8,
                                         &cf_NewPersonalQRCodeViewController);
                              if (((ulong)pcVar1 & 1) == 0) {
                                pcVar1 = local_40;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_40,PTR_s_isEqualToString__0269ccc8,
                                           &cf_WeNoteFlutterViewController);
                                if (((ulong)pcVar1 & 1) == 0) {
                                  pcVar1 = local_40;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_40,PTR_s_isEqualToString__0269ccc8,
                                             &cf_WCAccountLoginUsersViewController);
                                  if (((ulong)pcVar1 & 1) == 0) {
                                    pcVar1 = local_40;
                                    _NSClassFromString();
                                    local_1f0 = pcVar1;
                                    if (pcVar1 != (cfstringStruct *)0x0) {
                                      _objc_alloc_init();
                                      pcVar2 = local_80;
                                      local_80 = pcVar1;
                                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                                      if (local_80 != (cfstringStruct *)0x0) {
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_80,
                                                  PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
                                      }
                                    }
                                  }
                                  else {
                                    pcVar1 = &cf_NewSettingViewController;
                                    _NSClassFromString();
                                    local_1d8 = pcVar1;
                                    if (pcVar1 != (cfstringStruct *)0x0) {
                                      _objc_alloc_init();
                                      local_1e0 = pcVar1;
                                      if (pcVar1 != (cfstringStruct *)0x0) {
                                        pcVar1 = &cf_gotoSwitchAccount;
                                        _NSSelectorFromString();
                                        pcVar2 = local_1e0;
                                        local_1e8 = pcVar1;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_1e0,PTR_s_respondsToSelector__026ca818,
                                                   pcVar1);
                                        if (((ulong)pcVar2 & 1) != 0) {
                                          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,local_1e8)
                                          ;
                                          _objc_storeStrong(&local_80,0);
                                        }
                                      }
                                      _objc_storeStrong(&local_1e0,0);
                                    }
                                  }
                                }
                                else {
                                  pcVar1 = &cf_MyFavoritesViewController;
                                  _NSClassFromString();
                                  local_1c0 = pcVar1;
                                  if (pcVar1 != (cfstringStruct *)0x0) {
                                    _objc_alloc_init();
                                    local_1c8 = pcVar1;
                                    if (pcVar1 != (cfstringStruct *)0x0) {
                                      pcVar1 = &cf_onClickNewBtn;
                                      _NSSelectorFromString();
                                      pcVar2 = local_1c8;
                                      local_1d0 = pcVar1;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_1c8,PTR_s_respondsToSelector__026ca818,pcVar1
                                                );
                                      if (((ulong)pcVar2 & 1) != 0) {
                                        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,local_1d0);
                                        _objc_storeStrong(&local_80,0);
                                      }
                                    }
                                    _objc_storeStrong(&local_1c8,0);
                                  }
                                }
                              }
                              else {
                                pcVar1 = &cf_NewPersonalQRCodeViewController;
                                _NSClassFromString();
                                local_168 = pcVar1;
                                if (pcVar1 != (cfstringStruct *)0x0) {
                                  pcVar1 = &cf_initWithContact_;
                                  _NSSelectorFromString();
                                  pcVar2 = local_168;
                                  local_170 = pcVar1;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_168,PTR_s_instancesRespondToSelector__0269da90,
                                             pcVar1);
                                  if (((ulong)pcVar2 & 1) == 0) {
                                    pcVar2 = local_168;
                                    _objc_alloc_init();
                                    pcVar1 = local_80;
                                    local_80 = pcVar2;
                                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                                  }
                                  else {
                                    pcVar1 = &cf_MMServiceCenter;
                                    _NSClassFromString();
                                    local_178 = pcVar1;
                                    if (pcVar1 != (cfstringStruct *)0x0) {
                                      pcVar1 = &cf_defaultCenter;
                                      _NSSelectorFromString();
                                      pcVar2 = local_178;
                                      local_180 = pcVar1;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_178,PTR_s_respondsToSelector__026ca818,pcVar1
                                                );
                                      if (((ulong)pcVar2 & 1) != 0) {
                                        pcVar1 = local_178;
                                        (*(code *)PTR__objc_msgSend_02578628)(local_178,local_180);
                                        _objc_retainAutoreleasedReturnValue();
                                        local_188 = pcVar1;
                                        if (pcVar1 != (cfstringStruct *)0x0) {
                                          pcVar1 = &cf_CContactMgr;
                                          _NSClassFromString();
                                          local_190 = pcVar1;
                                          if (pcVar1 != (cfstringStruct *)0x0) {
                                            pcVar1 = &cf_getService_;
                                            _NSSelectorFromString();
                                            pcVar2 = local_188;
                                            local_198 = pcVar1;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_188,PTR_s_respondsToSelector__026ca818,
                                                       pcVar1);
                                            if (((ulong)pcVar2 & 1) != 0) {
                                              pcVar1 = local_188;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_188,local_198,local_190);
                                              _objc_retainAutoreleasedReturnValue();
                                              local_1a0 = pcVar1;
                                              if (pcVar1 != (cfstringStruct *)0x0) {
                                                pcVar1 = &cf_getSelfContact;
                                                _NSSelectorFromString();
                                                pcVar2 = local_1a0;
                                                local_1a8 = pcVar1;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (local_1a0,
                                                           PTR_s_respondsToSelector__026ca818,pcVar1
                                                          );
                                                if (((ulong)pcVar2 & 1) != 0) {
                                                  pcVar1 = local_1a0;
                                                  (*(code *)PTR__objc_msgSend_02578628)
                                                            (local_1a0,local_1a8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  local_1b0 = pcVar1;
                                                  if (pcVar1 != (cfstringStruct *)0x0) {
                                                    pcVar2 = local_168;
                                                    _objc_alloc();
                                                    pcVar7 = pcVar2;
                                                    (*(code *)PTR__objc_msgSend_02578628)
                                                              (pcVar2,local_170,local_1b0);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    pcVar1 = local_80;
                                                    local_80 = pcVar7;
                                                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                                                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                                                  }
                                                  _objc_storeStrong(&local_1b0,0);
                                                }
                                              }
                                              _objc_storeStrong(&local_1a0,0);
                                            }
                                          }
                                        }
                                        _objc_storeStrong(&local_188,0);
                                      }
                                    }
                                    if (local_80 == (cfstringStruct *)0x0) {
                                      pcVar2 = local_168;
                                      _objc_alloc_init();
                                      pcVar1 = local_80;
                                      local_80 = pcVar2;
                                      (*(code *)PTR__objc_release_02578630)(pcVar1);
                                    }
                                  }
                                  if (local_80 != (cfstringStruct *)0x0) {
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_80,PTR_s_setHidesBottomBarWhenPushed__0269db60,
                                               1);
                                  }
                                }
                              }
                            }
                            else {
                              pcVar1 = &cf_NewHBALLSettingController;
                              _NSClassFromString();
                              local_160 = pcVar1;
                              if (pcVar1 != (cfstringStruct *)0x0) {
                                _objc_alloc_init();
                                pcVar2 = local_80;
                                local_80 = pcVar1;
                                (*(code *)PTR__objc_release_02578630)(pcVar2);
                                if (local_80 != (cfstringStruct *)0x0) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_80,PTR_s_setHidesBottomBarWhenPushed__0269db60,1)
                                  ;
                                }
                              }
                            }
                          }
                          else {
                            pcVar1 = &cf_ThemeBoxViewController;
                            _NSClassFromString();
                            local_158 = pcVar1;
                            if (pcVar1 != (cfstringStruct *)0x0) {
                              _objc_alloc_init();
                              pcVar2 = local_80;
                              local_80 = pcVar1;
                              (*(code *)PTR__objc_release_02578630)(pcVar2);
                              if (local_80 != (cfstringStruct *)0x0) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_80,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
                              }
                            }
                          }
                        }
                        else {
                          _WCRefinePreferredPluginHubViewController();
                          _objc_retainAutoreleasedReturnValue();
                          pcVar2 = local_80;
                          local_80 = pcVar1;
                          (*(code *)PTR__objc_release_02578630)(pcVar2);
                        }
                      }
                      else {
                        pcVar1 = &cf_WCRefineFloatingTabBarSettingsViewController;
                        _NSClassFromString();
                        local_150 = pcVar1;
                        if (pcVar1 != (cfstringStruct *)0x0) {
                          _objc_alloc_init();
                          pcVar2 = local_80;
                          local_80 = pcVar1;
                          (*(code *)PTR__objc_release_02578630)(pcVar2);
                          if (local_80 != (cfstringStruct *)0x0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_80,PTR_s_setHidesBottomBarWhenPushed__0269db60,0);
                          }
                        }
                      }
                    }
                    else {
                      pcVar1 = &cf_WCRefineRootViewController;
                      _NSClassFromString();
                      local_148 = pcVar1;
                      if (pcVar1 != (cfstringStruct *)0x0) {
                        _objc_alloc_init();
                        pcVar2 = local_80;
                        local_80 = pcVar1;
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        if (local_80 != (cfstringStruct *)0x0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_80,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
                        }
                      }
                    }
                  }
                  else {
                    pcVar6 = "CAppViewControllerManager";
                    _objc_getClass();
                    local_110 = pcVar6;
                    if (pcVar6 != (char *)0x0) {
                      pcVar1 = &cf_getAppViewControllerManager;
                      _NSSelectorFromString();
                      pcVar6 = local_110;
                      local_118 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_110,PTR_s_respondsToSelector__026ca818,pcVar1);
                      if (((ulong)pcVar6 & 1) != 0) {
                        pcVar6 = local_110;
                        (*(code *)PTR__objc_msgSend_02578628)(local_110,local_118);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = &cf_jumpToCameraScanInTopViewController_;
                        local_120 = pcVar6;
                        _NSSelectorFromString();
                        local_128 = pcVar1;
                        if ((local_120 == (char *)0x0) ||
                           (pcVar6 = local_120,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_120,PTR_s_respondsToSelector__026ca818,pcVar1),
                           ((ulong)pcVar6 & 1) == 0)) {
                          pcVar1 = &cf_jumpToCameraScan_showMainView_;
                          _NSSelectorFromString();
                          local_130 = pcVar1;
                          if ((local_120 == (char *)0x0) ||
                             (pcVar6 = local_120,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_120,PTR_s_respondsToSelector__026ca818,pcVar1),
                             ((ulong)pcVar6 & 1) == 0)) {
                            pcVar1 = &cf_jumpToCameraScan_;
                            _NSSelectorFromString();
                            local_138 = pcVar1;
                            if ((local_120 == (char *)0x0) ||
                               (pcVar6 = local_120,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_120,PTR_s_respondsToSelector__026ca818,pcVar1),
                               ((ulong)pcVar6 & 1) == 0)) {
                              pcVar1 = &cf_CameraScanViewController;
                              _NSClassFromString();
                              local_140 = pcVar1;
                              if (pcVar1 != (cfstringStruct *)0x0) {
                                _objc_alloc_init();
                                pcVar2 = local_80;
                                local_80 = pcVar1;
                                (*(code *)PTR__objc_release_02578630)(pcVar2);
                              }
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)(local_120,local_138,1);
                              _objc_storeStrong(&local_80,0);
                            }
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)(local_120,local_130,1,0);
                            _objc_storeStrong(&local_80,0);
                          }
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)(local_120,local_128,1);
                          _objc_storeStrong(&local_80,0);
                        }
                        _objc_storeStrong(&local_120,0);
                      }
                    }
                  }
                }
                else {
                  pcVar1 = &cf_WCFinderLiveHomePageViewController;
                  _NSClassFromString();
                  local_d8 = pcVar1;
                  if (pcVar1 != (cfstringStruct *)0x0) {
                    pcVar1 = &cf_initWithParams_;
                    _NSSelectorFromString();
                    pcVar2 = local_d8;
                    local_e0 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_instancesRespondToSelector__0269da90,pcVar1);
                    if (((ulong)pcVar2 & 1) == 0) {
                      pcVar1 = &cf_initWithTargetTabType_;
                      _NSSelectorFromString();
                      pcVar2 = local_d8;
                      local_100 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_instancesRespondToSelector__0269da90,pcVar1);
                      if (((ulong)pcVar2 & 1) == 0) {
                        pcVar1 = &cf_initWithTabType_;
                        _NSSelectorFromString();
                        pcVar2 = local_d8;
                        local_108 = pcVar1;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_d8,PTR_s_instancesRespondToSelector__0269da90,pcVar1);
                        if (((ulong)pcVar2 & 1) == 0) {
                          pcVar2 = local_d8;
                          _objc_alloc_init();
                          pcVar1 = local_80;
                          local_80 = pcVar2;
                          (*(code *)PTR__objc_release_02578630)(pcVar1);
                        }
                        else {
                          pcVar2 = local_d8;
                          _objc_alloc();
                          pcVar7 = pcVar2;
                          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_108,0);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar1 = local_80;
                          local_80 = pcVar7;
                          (*(code *)PTR__objc_release_02578630)(pcVar1);
                          (*(code *)PTR__objc_release_02578630)(pcVar2);
                        }
                      }
                      else {
                        pcVar2 = local_d8;
                        _objc_alloc();
                        pcVar7 = pcVar2;
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_100,0);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = local_80;
                        local_80 = pcVar7;
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                      }
                    }
                    else {
                      pcVar1 = &cf_WCFinderLiveHomePageInitialParams;
                      _NSClassFromString();
                      local_f0 = (cfstringStruct *)0x0;
                      local_e8 = pcVar1;
                      if (pcVar1 != (cfstringStruct *)0x0) {
                        _objc_alloc_init();
                        pcVar2 = local_f0;
                        local_f0 = pcVar1;
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                      }
                      if (local_f0 == (cfstringStruct *)0x0) {
                        pcVar2 = local_d8;
                        _objc_alloc();
                        pcVar7 = pcVar2;
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_e0,0);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = local_80;
                        local_80 = pcVar7;
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                      }
                      else {
                        pcVar2 = local_d8;
                        _objc_alloc();
                        pcVar7 = pcVar2;
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_e0,local_f0);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = local_80;
                        local_80 = pcVar7;
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                      }
                      _objc_storeStrong(&local_f0,0);
                    }
                  }
                }
              }
              else {
                pcVar1 = &cf_WCFinderTimelineTabViewController;
                _NSClassFromString();
                local_c8 = pcVar1;
                if (pcVar1 != (cfstringStruct *)0x0) {
                  pcVar1 = &cf_initWithTargetTabType_;
                  _NSSelectorFromString();
                  pcVar2 = local_c8;
                  local_d0 = pcVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_instancesRespondToSelector__0269da90,pcVar1);
                  if (((ulong)pcVar2 & 1) == 0) {
                    pcVar2 = local_c8;
                    _objc_alloc_init();
                    pcVar1 = local_80;
                    local_80 = pcVar2;
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                  }
                  else {
                    pcVar2 = local_c8;
                    _objc_alloc();
                    pcVar7 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_d0,0);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar1 = local_80;
                    local_80 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                  }
                }
              }
            }
            else {
              pcVar1 = &cf_WCTimeLineViewController;
              _NSClassFromString();
              local_c0 = pcVar1;
              if (pcVar1 != (cfstringStruct *)0x0) {
                _objc_alloc_init();
                pcVar2 = local_80;
                local_80 = pcVar1;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
              }
            }
          }
          else {
            pcVar6 = "CAppViewControllerManager";
            _objc_getClass();
            local_90 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              pcVar1 = &cf_getAppViewControllerManager;
              _NSSelectorFromString();
              pcVar2 = &cf_topViewControllerOfMainWindow;
              local_98 = pcVar1;
              _NSSelectorFromString();
              pcVar1 = &cf_jumpToOfflinePayWithEntryVC_;
              local_a0 = pcVar2;
              _NSSelectorFromString();
              pcVar6 = local_90;
              local_a8 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_respondsToSelector__026ca818,local_98);
              if ((((ulong)pcVar6 & 1) != 0) &&
                 (pcVar6 = local_90,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_90,PTR_s_respondsToSelector__026ca818,local_a0),
                 ((ulong)pcVar6 & 1) != 0)) {
                pcVar6 = local_90;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,local_98);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = local_90;
                local_b0 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,local_a0);
                _objc_retainAutoreleasedReturnValue();
                local_b8 = pcVar5;
                if ((local_b0 != (char *)0x0) &&
                   (pcVar6 = local_b0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_b0,PTR_s_respondsToSelector__026ca818,local_a8),
                   ((ulong)pcVar6 & 1) != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_a8,local_b8);
                  _objc_storeStrong(&local_80,0);
                }
                _objc_storeStrong(&local_b8);
                _objc_storeStrong(&local_b0,0);
              }
            }
          }
        }
        else {
          pcVar1 = &cf_WCPayMainViewControllerV2;
          _NSClassFromString();
          local_88 = pcVar1;
          if (pcVar1 != (cfstringStruct *)0x0) {
            _objc_alloc_init();
            pcVar2 = local_80;
            local_80 = pcVar1;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        if (local_80 != (cfstringStruct *)0x0) {
          if (local_70 == (undefined *)0x0) {
            local_5c8 = local_28;
          }
          else {
            local_5c8 = local_70;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1f8 = local_5c8;
          FUN_000bd750(local_5c8,local_78,local_80);
          _objc_storeStrong(&local_1f8,0);
        }
        _objc_storeStrong(&local_80,0);
        local_5c = 0;
      }
      else {
        puVar4 = local_68;
        FUN_000bd2e0(local_68,local_70);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubN_ec_ed__
                    );
        }
        local_5c = 1;
      }
    }
    else {
      puVar4 = local_68;
      FUN_000bcdd8(local_68,local_70,local_78);
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_d__cNSb);
      }
      local_5c = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    local_5c = 1;
  }
  _objc_storeStrong(&local_40,0);
  if (local_5c == 0) {
    local_5c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

