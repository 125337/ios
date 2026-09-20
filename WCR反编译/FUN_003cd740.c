// FUN_003cd740 @ 003cd740

void FUN_003cd740(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *local_388;
  undefined *local_380;
  ulong local_360;
  ulong local_348;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_2c8;
  uint local_264;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  ulong local_248;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  byte local_171;
  ulong local_170;
  byte local_161;
  ulong local_160;
  ulong local_158;
  undefined4 local_150;
  byte local_149;
  undefined *local_148;
  ulong local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  local_149 = 0;
  local_264 = 1;
  if ((local_138 != 0) && (local_264 = 1, local_140 != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_149 = 1;
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_264 = (uint)puVar2 ^ 1;
  }
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  if ((local_264 & 1) == 0) {
    uVar3 = local_138;
    FUN_003bed8c();
    _objc_retainAutoreleasedReturnValue();
    local_161 = 0;
    local_171 = 0;
    bVar1 = true;
    local_158 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_preservedOriginalRows_026a2ce0);
      _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (uVar3 == 0) {
        uVar3 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_trailingOriginalRows_026a2cd8);
        _objc_retainAutoreleasedReturnValue();
        local_171 = 1;
        local_170 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar3 == 0;
      }
    }
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    if ((local_161 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    if (bVar1) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = 1;
      local_130 = puVar2;
    }
    else {
      puVar2 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_groupForId__026a27e0);
      _objc_retainAutoreleasedReturnValue();
      local_180 = puVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_180 == (undefined *)0x0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = 1;
        local_130 = puVar2;
      }
      else {
        puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_190 = puVar4;
        _memset(auStack_1d8,0,0x40);
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_items_0269e4b0);
        _objc_retainAutoreleasedReturnValue();
        local_2c8 = uVar3;
        if (uVar3 == 0) {
          local_2c8 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_2e0 = local_2c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                   0x10);
        if (local_2e0 != 0) {
          lVar9 = *local_1c8;
          local_2e8 = 0;
          do {
            do {
              if (*local_1c8 - lVar9 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar9,local_2c8);
              }
              lVar10 = *(long *)(local_1d0 + local_2e8 * 8);
              local_198 = lVar10;
              (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar10;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar10);
              puVar2 = local_190;
              if (lVar5 != 0) {
                lVar5 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_username_026a2238);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(lVar5);
              }
              local_2e8 = local_2e8 + 1;
            } while (local_2e8 < local_2e0);
            local_2e0 = local_2c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                       auStack_a8,0x10);
            local_2e8 = 0;
          } while (local_2e0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(local_2c8);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_wcrGrouping_logicGetSessionAtIndexPath_;
        local_1e0 = puVar2;
        _NSSelectorFromString();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_1e8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_158;
        local_1f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_preservedOriginalRows_026a2ce0);
        _objc_retainAutoreleasedReturnValue();
        local_348 = uVar3;
        if (uVar3 == 0) {
          local_348 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_348);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = local_1f0;
        uVar3 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_trailingOriginalRows_026a2cd8);
        _objc_retainAutoreleasedReturnValue();
        local_360 = uVar3;
        if (uVar3 == 0) {
          local_360 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_360);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _memset(auStack_238,0,0x40);
        puVar2 = local_1f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_380 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                   0x10);
        if (local_380 != (undefined *)0x0) {
          lVar9 = *local_228;
          local_388 = (undefined *)0x0;
          do {
            do {
              if (*local_228 - lVar9 != 0) {
                _objc_enumerationMutation(*local_228 - lVar9,puVar2);
              }
              puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
              uVar11 = *(undefined8 *)(local_230 + (long)local_388 * 8);
              local_1f8 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_integerValue_026ca750);
              uVar3 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_targetSection_026a2d68);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_indexPathForRow_inSection__0269e9a0,uVar11,uVar3);
              _objc_retainAutoreleasedReturnValue();
              local_248 = 0;
              uVar3 = local_138;
              local_240 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_respondsToSelector__026ca818,local_1e8);
              if ((uVar3 & 1) != 0) {
                uVar7 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,local_1e8,local_240);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_248;
                local_248 = uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
              puVar4 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_nativeSessionFromObject__026a2c00,local_248);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = local_188;
              local_250 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_usernameForNativeObject__026a2c08,puVar4);
              _objc_retainAutoreleasedReturnValue();
              local_258 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_length_0269cca0);
              if ((puVar8 == (undefined *)0x0) ||
                 (puVar4 = local_190,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_190,PTR_s_containsObject__0269cbb8,local_258),
                 ((ulong)puVar4 & 1) != 0)) {
                local_150 = 5;
              }
              else {
                puVar4 = PTR_WCRGroupingItem_026ce5c8;
                _objc_alloc_init();
                local_260 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSession__0269d2e0,local_250);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setUsername__026a2510,local_258);
                puVar4 = local_188;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_nativeCellDataForSession__026a2810,local_250);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setCellData__026a2818);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_setOriginalIndexPath__026a2c68,local_240);
                puVar4 = local_260;
                FUN_003ce3dc(local_260,local_180,local_188);
                if (((ulong)puVar4 & 1) == 0) {
                  local_150 = 5;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_190,PTR_s_addObject__0269d180,local_258);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e0,PTR_s_addObject__0269d180,local_260);
                  local_150 = 0;
                }
                _objc_storeStrong(&local_260,0);
              }
              _objc_storeStrong(&local_258);
              _objc_storeStrong(&local_250,0);
              _objc_storeStrong(&local_248,0);
              _objc_storeStrong(&local_240,0);
              local_388 = local_388 + 1;
            } while (local_388 < local_380);
            local_380 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                       auStack_128,0x10);
            local_388 = (undefined *)0x0;
          } while (local_380 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_1e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
        local_150 = 1;
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_1e0,0);
        _objc_storeStrong(&local_190,0);
        _objc_storeStrong(&local_188,0);
      }
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_158,0);
  }
  else {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = 1;
    local_130 = puVar2;
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

