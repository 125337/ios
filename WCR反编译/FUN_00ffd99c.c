// FUN_00ffd99c @ 00ffd99c

void FUN_00ffd99c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  cfstringStruct *local_4a8;
  ulong local_440;
  ulong local_438;
  cfstringStruct *local_3d8;
  ulong local_360;
  ulong local_358;
  cfstringStruct *local_338;
  undefined *local_310;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  cfstringStruct *local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  long local_248;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  long local_1a0;
  undefined *local_198;
  undefined4 local_18c;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  char *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  char *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "WCUIActionSheet";
  local_138 = param_1;
  local_130 = param_1;
  _objc_getClass();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_140 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_159 = 0;
  local_169 = 0;
  local_310 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_310 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_159 = 1;
    local_158 = local_310;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = local_310;
  }
  local_169 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_310;
  if ((local_169 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  if ((local_159 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_178 = (char *)0x0;
  pcVar4 = &cf_addBtnTitle_handler_;
  _NSSelectorFromString();
  pcVar5 = &cf_addCancelBtnTitle_handler_;
  local_180 = pcVar4;
  _NSSelectorFromString();
  local_188 = pcVar5;
  if ((local_140 != (char *)0x0) && (local_150 != (undefined *)0x0)) {
    pcVar2 = local_140;
    _objc_alloc();
    local_338 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_338 == (cfstringStruct *)0x0) {
      local_338 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,local_338);
    pcVar11 = local_178;
    local_178 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar11);
    pcVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_respondsToSelector__026ca818,local_180);
    if (((ulong)pcVar2 & 1) == 0) {
      _objc_storeStrong(&local_178,0);
    }
  }
  if (local_178 == (char *)0x0) {
    if (local_148 == (undefined *)0x0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      }
      local_18c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,*(undefined8 *)(param_1 + 0x20),0,0
                );
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar3;
      _memset(auStack_1e0,0,0x40);
      uVar6 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_358 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10);
      if (local_358 != 0) {
        lVar12 = *local_1d0;
        local_360 = 0;
        do {
          do {
            if (*local_1d0 - lVar12 != 0) {
              _objc_enumerationMutation(*local_1d0 - lVar12,uVar6);
            }
            lVar13 = *(long *)(local_1d8 + local_360 * 8);
            local_1a0 = lVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = local_1a0;
            local_1e8 = lVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = local_1e8;
            local_1f0 = lVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
            puVar1 = local_198;
            lVar13 = local_1e8;
            lVar8 = local_1f0;
            puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            if ((lVar9 == 0) || (local_1f0 == 0)) {
              local_18c = 5;
            }
            else {
              local_218 = PTR___NSConcreteStackBlock_02578660;
              local_210 = 0xc2000000;
              local_20c = 0;
              local_208 = FUN_00ffe644;
              local_200 = &DAT_02584050;
              (*(code *)PTR__objc_retain_02578638)();
              local_1f8 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,lVar13,0,&local_218);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              _objc_storeStrong(&local_1f8,0);
              local_18c = 0;
            }
            _objc_storeStrong(&local_1f0);
            _objc_storeStrong(&local_1e8,0);
            local_360 = local_360 + 1;
          } while (local_360 < local_358);
          local_358 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,
                     0x10);
          local_360 = 0;
        } while (local_358 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      puVar1 = local_198;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      lVar12 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_length_0269cca0);
      if (lVar12 == 0) {
        local_3d8 = &cf_Sm;
      }
      else {
        local_3d8 = *(cfstringStruct **)(param_1 + 0x30);
      }
      local_240 = PTR___NSConcreteStackBlock_02578660;
      local_238 = 0xc2000000;
      local_234 = 0;
      local_230 = FUN_00ffe6a0;
      local_228 = &DAT_02584050;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,local_3d8,1,&local_240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_presentViewController_animated_c_0269d2b0,local_198,1);
      local_18c = 1;
      _objc_storeStrong(&local_220,0);
      _objc_storeStrong(&local_198,0);
    }
  }
  else {
    _memset(auStack_288,0,0x40);
    uVar6 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_438 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,0x10);
    if (local_438 != 0) {
      lVar12 = *local_278;
      local_440 = 0;
      do {
        do {
          if (*local_278 - lVar12 != 0) {
            _objc_enumerationMutation(*local_278 - lVar12,uVar6);
          }
          lVar13 = *(long *)(local_280 + local_440 * 8);
          local_248 = lVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = local_248;
          local_290 = lVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = local_290;
          local_298 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0);
          pcVar2 = local_178;
          pcVar4 = local_180;
          lVar13 = local_290;
          lVar8 = local_298;
          if ((lVar9 == 0) || (local_298 == 0)) {
            local_18c = 7;
          }
          else {
            ppuVar10 = &local_2c0;
            local_2c0 = PTR___NSConcreteStackBlock_02578660;
            local_2b8 = 0xc2000000;
            local_2b4 = 0;
            local_2b0 = FUN_00ffe704;
            local_2a8 = &DAT_025814c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_2a0 = lVar8;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar4,lVar13);
            (*(code *)PTR__objc_release_02578630)(ppuVar10);
            _objc_storeStrong(&local_2a0,0);
            local_18c = 0;
          }
          _objc_storeStrong(&local_298);
          _objc_storeStrong(&local_290,0);
          local_440 = local_440 + 1;
        } while (local_440 < local_438);
        local_438 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,
                   0x10);
        local_440 = 0;
      } while (local_438 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    lVar12 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_length_0269cca0);
    if (lVar12 == 0) {
      local_4a8 = &cf_Sm;
    }
    else {
      local_4a8 = *(cfstringStruct **)(param_1 + 0x30);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_2c8 = local_4a8;
    pcVar11 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_respondsToSelector__026ca818,local_188);
    pcVar2 = local_178;
    pcVar5 = local_188;
    pcVar4 = local_2c8;
    if (((ulong)pcVar11 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_2c8,0);
      }
    }
    else {
      ppuVar10 = &local_2f0;
      local_2f0 = PTR___NSConcreteStackBlock_02578660;
      local_2e8 = 0xc2000000;
      local_2e4 = 0;
      local_2e0 = FUN_00ffe824;
      local_2d8 = &DAT_025814c8;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_retain_02578638)();
      local_2d0 = uVar7;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar5,pcVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar10);
      _objc_storeStrong(&local_2d0,0);
    }
    pcVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_178,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    if (((ulong)pcVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_showInView__0269d310,local_150);
    }
    _objc_storeStrong(&local_2c8,0);
    local_18c = 0;
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

