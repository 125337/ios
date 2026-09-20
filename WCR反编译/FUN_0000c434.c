// FUN_0000c434 @ 0000c434

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0000c434(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  uint local_260;
  uint local_248;
  uint local_22c;
  uint local_218;
  uint local_200;
  uint local_1e8;
  uint local_1d0;
  uint local_1b8;
  uint local_19c;
  byte local_17c;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 local_108;
  byte local_100;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  ulong local_68;
  cfstringStruct *local_60;
  byte local_55;
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  local_39 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_55 = 0;
  local_48 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_48;
  local_60 = &cf__vN;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar1;
  uVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCPluginsViewController);
  uVar1 = local_38;
  local_17c = 1;
  if ((uVar4 & 1) == 0) {
    pcVar2 = &cf_wcr_isBuiltInPluginHub;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,pcVar2);
    local_17c = (byte)uVar1;
  }
  local_69 = local_17c & 1;
  local_79 = 0;
  uVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCPayMainViewControllerV2);
  local_19c = 0;
  if ((uVar1 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_19c = (uint)puVar3;
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_19c & 1) == 0) {
    local_89 = 0;
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_MyFavoritesViewController);
    local_1b8 = 0;
    if ((uVar1 & 1) != 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1b8 = (uint)puVar3;
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_1b8 & 1) == 0) {
      local_99 = 0;
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineViewController);
      local_1d0 = 0;
      if ((uVar1 & 1) != 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1d0 = (uint)puVar3;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_1d0 & 1) == 0) {
        local_a9 = 0;
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCListViewController);
        local_1e8 = 0;
        if ((uVar1 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1e8 = (uint)puVar3;
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if ((local_1e8 & 1) == 0) {
          local_b9 = 0;
          uVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderTimelineTabViewController)
          ;
          local_200 = 0;
          if ((uVar1 & 1) != 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_200 = (uint)puVar3;
          }
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_200 & 1) == 0) {
            local_c9 = 0;
            uVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_isEqualToString__0269ccc8,
                       &cf_WCFinderMyTabEntranceViewController);
            local_218 = 0;
            if ((uVar1 & 1) != 0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_c9 = 1;
              local_c8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_218 = (uint)puVar3;
            }
            if ((local_c9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_c8);
            }
            if ((local_218 & 1) == 0) {
              local_d9 = 0;
              local_22c = 0;
              if ((local_69 & 1) != 0) {
                puVar3 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_d9 = 1;
                local_d8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_22c = (uint)puVar3;
              }
              if ((local_d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_d8);
              }
              if ((local_22c & 1) == 0) {
                local_e9 = 0;
                uVar1 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_isEqualToString__0269ccc8,&cf_NewSettingViewController);
                local_248 = 0;
                if ((uVar1 & 1) != 0) {
                  puVar3 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  local_e9 = 1;
                  local_e8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_248 = (uint)puVar3;
                }
                if ((local_e9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_e8);
                }
                if ((local_248 & 1) == 0) {
                  local_f9 = 0;
                  uVar1 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_MiYouViewController);
                  local_260 = 0;
                  if ((uVar1 & 1) != 0) {
                    puVar3 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    local_f9 = 1;
                    local_f8 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_260 = (uint)puVar3;
                  }
                  if ((local_f9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_f8);
                  }
                  if ((local_260 & 1) != 0) {
                    local_55 = 1;
                  }
                }
                else {
                  local_55 = 1;
                }
              }
              else {
                local_55 = 1;
              }
            }
            else {
              local_55 = 1;
            }
          }
          else {
            local_55 = 1;
          }
        }
        else {
          local_55 = 1;
        }
      }
      else {
        local_55 = 1;
      }
    }
    else {
      local_55 = 1;
    }
  }
  else {
    local_55 = 1;
  }
  if ((local_55 & 1) == 0) {
    (*DAT_028c79d8)(local_28,local_30,local_38,local_39 & 1);
  }
  else {
    puVar3 = PTR_WCRefinePageLockGuard_026ce020;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePageLockGuard_026ce020,PTR_s_sharedGuard_0269cdc8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60;
    uVar1 = local_68;
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_0000d550;
    local_120 = &DAT_02578d50;
    local_110 = local_28;
    local_108 = local_30;
    uVar4 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_39 & 1;
    local_118 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_authenticateForKey_scope_reason__0269cdd0,uVar1,0,pcVar2,&local_138,
               &PTR___NSConcreteGlobalBlock_02578d80);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

