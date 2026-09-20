// FUN_017a87d0 @ 017a87d0

void FUN_017a87d0(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  uint local_2a0;
  ulong local_270;
  ulong local_268;
  undefined *local_218;
  undefined1 local_209;
  cfstringStruct *local_208;
  ulong local_200;
  char *local_1f8;
  char *local_1f0;
  undefined *local_1e8;
  ulong local_1d0;
  cfstringStruct *local_1c8 [2];
  ulong local_1b8 [2];
  ulong local_1a8;
  ulong local_1a0;
  long local_198;
  char *local_190;
  undefined *local_188;
  long local_180;
  undefined *local_178;
  undefined1 local_169;
  cfstringStruct *local_168;
  undefined1 local_159;
  ulong local_158;
  char *local_150;
  ulong local_148 [2];
  ulong local_138;
  ulong local_130;
  int local_128;
  byte local_121;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0 [3];
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028e4128)(param_1,param_2);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_017b2b64(local_b0,&cf_WCPluginsViewControllerreloadTableDataafterorig);
    FUN_017b377c(local_b0);
    local_d0[0] = 0;
    _memset(auStack_118,0,0x40);
    uVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    local_268 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_268 != 0) {
      lVar7 = *local_108;
      local_270 = 0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,uVar3);
          }
          uVar8 = *(ulong *)(local_110 + local_270 * 8);
          local_121 = 0;
          puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_d8 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
          local_2a0 = 1;
          if ((uVar8 & 1) == 0) {
            uVar8 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_121 = 1;
            local_120 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2a0 = (uint)uVar8;
          }
          if ((local_121 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          if ((local_2a0 & 1) != 0) {
            _objc_storeStrong(local_d0,local_d8);
            local_128 = 3;
            goto LAB_017a8bfc;
          }
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_270 = 0;
      } while (local_268 != 0);
    }
    local_128 = 0;
LAB_017a8bfc:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d0[0] == 0) {
      local_128 = 1;
    }
    else {
      uVar8 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_130 = uVar8;
      if (uVar8 == 0) {
        local_128 = 1;
      }
      else {
        local_138 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_valueForKey__0269d128,&cf_sections);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_138;
        local_138 = uVar8;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((local_138 == 0) ||
           (uVar8 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0)
           , uVar8 == 0)) {
          local_128 = 1;
        }
        else {
          uVar8 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_148[0] = uVar8;
          if (uVar8 == 0) {
            local_128 = 1;
          }
          else {
            pcVar4 = "getCellCount";
            _sel_getUid();
            uVar8 = local_148[0];
            local_150 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148[0],PTR_s_respondsToSelector__026ca818,pcVar4);
            if ((uVar8 & 1) == 0) {
              local_128 = 1;
            }
            else {
              uVar8 = local_148[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_148[0],local_150);
              local_158 = uVar8;
              if ((long)uVar8 < 1) {
                local_128 = 1;
              }
              else {
                puVar1 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar1);
                local_159 = SUB81(puVar2,0);
                if (((ulong)puVar2 & 1) == 0) {
                  local_128 = 1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_168 = &cf_WCRefine;
                  puVar1 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  local_169 = SUB81(puVar2,0);
                  if (((ulong)puVar2 & 1) != 0) {
                    puVar1 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_178 = puVar2;
                    (*(code *)PTR__objc_release_02578630)(puVar1);
                    if ((local_178 != (undefined *)0x0) &&
                       (puVar1 = local_178,
                       (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
                       puVar1 != (undefined *)0x0)) {
                      _objc_storeStrong(puVar1,&local_168,local_178);
                    }
                    _objc_storeStrong(&local_178,0);
                  }
                  local_180 = -1;
                  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,
                             PTR_s_arrayWithCapacity__0269d9b8,local_158);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar4 = "getCellAt:";
                  local_188 = puVar1;
                  _sel_getUid();
                  uVar8 = local_148[0];
                  local_190 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148[0],PTR_s_respondsToSelector__026ca818,pcVar4);
                  if ((uVar8 & 1) == 0) {
                    local_128 = 1;
                  }
                  else {
                    for (local_198 = 0; local_198 < (long)local_158; local_198 = local_198 + 1) {
                      uVar8 = local_148[0];
                      (*(code *)PTR__objc_msgSend_02578628)(local_148[0],local_190,local_198);
                      _objc_retainAutoreleasedReturnValue();
                      local_1a0 = uVar8;
                      if (uVar8 == 0) {
                        local_128 = 8;
                      }
                      else {
                        local_1a8 = 0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar8,PTR_s_valueForKey__0269d128,&cf_cellConfig);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = local_1a8;
                        local_1a8 = uVar8;
                        (*(code *)PTR__objc_release_02578630)(uVar3);
                        if (local_1a8 == 0) {
                          local_128 = 8;
                        }
                        else {
                          local_1b8[0] = 0;
                          uVar3 = local_1a8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1a8,PTR_s_valueForKey__0269d128,&cf_leftConfig);
                          _objc_retainAutoreleasedReturnValue();
                          uVar8 = local_1b8[0];
                          local_1b8[0] = uVar3;
                          (*(code *)PTR__objc_release_02578630)(uVar8);
                          if (local_1b8[0] == 0) {
                            local_128 = 8;
                          }
                          else {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_1c8[0] = &cf___;
                            uVar8 = local_1b8[0];
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1b8[0],PTR_s_valueForKey__0269d128,&cf_title);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                            local_1d0 = uVar8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
                            if ((uVar8 & 1) != 0) {
                              _objc_storeStrong(local_1c8,local_1d0);
                            }
                            _objc_storeStrong(&local_1d0,0);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_188,PTR_s_addObject__0269d180,local_1c8[0]);
                            if ((local_180 < 0) &&
                               (pcVar5 = local_1c8[0],
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_1c8[0],PTR_s_isEqualToString__0269ccc8,local_168),
                               ((ulong)pcVar5 & 1) != 0)) {
                              local_180 = local_198;
                            }
                            _objc_storeStrong(local_1c8,0);
                            local_128 = 0;
                          }
                          _objc_storeStrong(local_1b8,0);
                        }
                        _objc_storeStrong(&local_1a8,0);
                      }
                      _objc_storeStrong(&local_1a0,0);
                    }
                    if (local_180 < 0) {
                      local_128 = 1;
                    }
                    else {
                      puVar1 = PTR_WCRefineConfig_026cdf58;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = puVar1;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar1);
                      local_1e8 = puVar2;
                      if ((long)local_158 <= (long)puVar2) {
                        local_1e8 = (undefined *)(local_158 - 1);
                      }
                      if ((long)local_1e8 < 0) {
                        local_1e8 = (undefined *)0x0;
                      }
                      if (local_180 - (long)local_1e8 == 0) {
                        local_128 = 1;
                      }
                      else {
                        pcVar4 = "removeCellAt:";
                        _sel_getUid(local_180 - (long)local_1e8);
                        pcVar6 = "insertCell:At:";
                        local_1f0 = pcVar4;
                        _sel_getUid();
                        uVar8 = local_148[0];
                        local_1f8 = pcVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_148[0],PTR_s_respondsToSelector__026ca818,local_1f0);
                        if (((uVar8 & 1) == 0) ||
                           (uVar8 = local_148[0],
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_148[0],PTR_s_respondsToSelector__026ca818,local_1f8),
                           (uVar8 & 1) == 0)) {
                          local_128 = 1;
                        }
                        else {
                          uVar8 = local_148[0];
                          (*(code *)PTR__objc_msgSend_02578628)(local_148[0],local_190,local_180);
                          _objc_retainAutoreleasedReturnValue();
                          local_200 = uVar8;
                          if (uVar8 == 0) {
                            local_128 = 1;
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)(local_148[0],local_1f0,local_180);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_148[0],local_1f8,local_200,local_1e8);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_188,PTR_s_removeObjectAtIndex__0269d530,local_180);
                            (*(code *)PTR__objc_retain_02578638)();
                            local_208 = &cf_WCRefine;
                            puVar1 = PTR_WCRefineConfig_026cdf58;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = puVar1;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            (*(code *)PTR__objc_release_02578630)(puVar1);
                            local_209 = SUB81(puVar2,0);
                            if (((ulong)puVar2 & 1) != 0) {
                              puVar1 = PTR_WCRefineConfig_026cdf58;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                              _objc_retainAutoreleasedReturnValue();
                              puVar2 = puVar1;
                              (*(code *)PTR__objc_msgSend_02578628)();
                              _objc_retainAutoreleasedReturnValue();
                              local_218 = puVar2;
                              (*(code *)PTR__objc_release_02578630)(puVar1);
                              if ((local_218 != (undefined *)0x0) &&
                                 (puVar1 = local_218,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_218,PTR_s_length_0269cca0),
                                 puVar1 != (undefined *)0x0)) {
                                _objc_storeStrong(puVar1,&local_208,local_218);
                              }
                              _objc_storeStrong(&local_218,0);
                            }
                            puVar1 = local_1e8;
                            puVar2 = local_188;
                            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
                            if (puVar2 < puVar1) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_188,PTR_s_addObject__0269d180,local_208);
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_188,PTR_s_insertObject_atIndex__0269eac0,local_208,
                                         local_1e8);
                            }
                            puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                       PTR_s_standardUserDefaults_026cab10);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)();
                            (*(code *)PTR__objc_release_02578630)(puVar1);
                            puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSUserDefaults_026ce338,
                                       PTR_s_standardUserDefaults_026cab10);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)();
                            (*(code *)PTR__objc_release_02578630)(puVar1);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_d0[0],PTR_s_reloadData_0269e400);
                            FUN_017b2b64(local_b0,&
                                                  cf_WCPluginsViewControllerreloadTableDataaftercustomsortreload
                                        );
                            FUN_017b377c(local_b0);
                            _objc_storeStrong(&local_208,0);
                            local_128 = 0;
                          }
                          _objc_storeStrong(&local_200,0);
                          if (local_128 == 0) {
                            local_128 = 0;
                          }
                        }
                      }
                    }
                  }
                  _objc_storeStrong(&local_188);
                  _objc_storeStrong(&local_168,0);
                }
              }
            }
          }
          _objc_storeStrong(local_148,0);
        }
        _objc_storeStrong(&local_138,0);
      }
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(local_d0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

