// FUN_00fb8800 @ 00fb8800

void FUN_00fb8800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong local_4e0;
  ulong local_4d8;
  ulong local_3d8;
  ulong local_3d0;
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  code *local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined **local_268;
  char *local_260;
  cfstringStruct *local_258;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined **local_190;
  cfstringStruct *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  char *local_168;
  byte local_15d;
  undefined4 local_15c;
  char *local_158;
  undefined *local_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "WCUIActionSheet";
  local_150 = puVar3;
  _objc_getClass();
  local_158 = pcVar4;
  if ((pcVar4 == (char *)0x0) || (local_150 == (undefined *)0x0)) {
    FUN_00fbf314(local_130,local_138);
    local_15c = 1;
    goto LAB_00fb9364;
  }
  FUN_00fc9f28();
  local_15d = (byte)pcVar4;
  pcVar4 = local_158;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar5 = local_130;
  local_168 = pcVar4;
  FUN_00fca068(local_130,local_140,local_15d & 1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = local_130;
  local_170 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
  uVar5 = local_138;
  local_178 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
  pcVar6 = &cf_addBtnTitle_handler_;
  local_180 = uVar5;
  _NSSelectorFromString();
  ppuVar7 = &PTR___NSConcreteGlobalBlock_02583d90;
  local_188 = pcVar6;
  _objc_retainBlock();
  pcVar8 = local_168;
  local_190 = ppuVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,local_188);
  pcVar4 = local_168;
  uVar5 = local_170;
  pcVar6 = local_188;
  ppuVar7 = local_190;
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar4 = "WCActionSheet";
    _objc_getClass();
    local_260 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar8 = local_168;
      local_168 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      pcVar4 = local_168;
      uVar1 = local_170;
      ppuVar9 = local_190;
      puVar3 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
      ppuVar7 = &local_298;
      local_298 = PTR___NSConcreteStackBlock_02578660;
      local_290 = 0xc2000000;
      local_28c = 0;
      local_288 = FUN_00fcab40;
      local_280 = &DAT_0257cb48;
      (*(code *)PTR__objc_retain_02578638)();
      uVar12 = local_178;
      local_268 = ppuVar9;
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = local_180;
      local_278 = uVar12;
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = uVar5;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3,uVar1);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      _memset(auStack_2e0,0,0x40);
      uVar2 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_4d8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_128,0x10)
      ;
      if (local_4d8 != 0) {
        lVar11 = *local_2d0;
        local_4e0 = 0;
        do {
          do {
            if (*local_2d0 - lVar11 != 0) {
              _objc_enumerationMutation(*local_2d0 - lVar11,uVar2);
            }
            uVar12 = *(undefined8 *)(local_2d8 + local_4e0 * 8);
            local_2a0 = uVar12;
            FUN_00fca44c(uVar12,local_15d & 1);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_2a0;
            local_2e8 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_copy_0269d150);
            pcVar4 = local_168;
            ppuVar9 = local_190;
            uVar12 = local_2e8;
            puVar3 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
            ppuVar7 = &local_320;
            local_320 = PTR___NSConcreteStackBlock_02578660;
            local_318 = 0xc2000000;
            local_314 = 0;
            local_310 = FUN_00fcac60;
            local_308 = &DAT_0257ca68;
            local_2f0 = uVar5;
            (*(code *)PTR__objc_retain_02578638)();
            uVar5 = local_2f0;
            local_2f8 = ppuVar9;
            (*(code *)PTR__objc_retain_02578638)();
            local_300 = uVar5;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3,uVar12);
            (*(code *)PTR__objc_release_02578630)(ppuVar7);
            _objc_storeStrong(&local_300);
            _objc_storeStrong(&local_2f8,0);
            _objc_storeStrong(&local_2f0,0);
            _objc_storeStrong(&local_2e8,0);
            local_4e0 = local_4e0 + 1;
          } while (local_4e0 < local_4d8);
          local_4d8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_128,
                     0x10);
          local_4e0 = 0;
        } while (local_4d8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar4 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setCancelButtonTitle_eventAction_026a0f68);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_setCancelButtonTitle_eventAction_026a0f68,&cf_Sm,0);
      }
      _objc_storeStrong(&local_270);
      _objc_storeStrong(&local_278,0);
      _objc_storeStrong(&local_268,0);
      goto LAB_00fb928c;
    }
    FUN_00fbf314(local_130,local_138);
    local_15c = 1;
  }
  else {
    ppuVar9 = &local_1c8;
    local_1c8 = PTR___NSConcreteStackBlock_02578660;
    local_1c0 = 0xc2000000;
    local_1bc = 0;
    local_1b8 = FUN_00fca32c;
    local_1b0 = &DAT_0257cb48;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_178;
    local_198 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    uVar12 = local_180;
    local_1a8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar12;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar6,uVar5);
    (*(code *)PTR__objc_release_02578630)(ppuVar9);
    _memset(auStack_210,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_3d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
    if (local_3d0 != 0) {
      lVar11 = *local_200;
      local_3d8 = 0;
      do {
        do {
          if (*local_200 - lVar11 != 0) {
            _objc_enumerationMutation(*local_200 - lVar11,uVar2);
          }
          uVar12 = *(undefined8 *)(local_208 + local_3d8 * 8);
          local_1d0 = uVar12;
          FUN_00fca44c(uVar12,local_15d & 1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_1d0;
          local_218 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_copy_0269d150);
          pcVar4 = local_168;
          pcVar6 = local_188;
          ppuVar9 = local_190;
          uVar12 = local_218;
          ppuVar7 = &local_250;
          local_250 = PTR___NSConcreteStackBlock_02578660;
          local_248 = 0xc2000000;
          local_244 = 0;
          local_240 = FUN_00fca5c4;
          local_238 = &DAT_0257ca68;
          local_220 = uVar5;
          (*(code *)PTR__objc_retain_02578638)();
          uVar5 = local_220;
          local_228 = ppuVar9;
          (*(code *)PTR__objc_retain_02578638)();
          local_230 = uVar5;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar6,uVar12);
          (*(code *)PTR__objc_release_02578630)(ppuVar7);
          _objc_storeStrong(&local_230);
          _objc_storeStrong(&local_228,0);
          _objc_storeStrong(&local_220,0);
          _objc_storeStrong(&local_218,0);
          local_3d8 = local_3d8 + 1;
        } while (local_3d8 < local_3d0);
        local_3d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10
                  );
        local_3d8 = 0;
      } while (local_3d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar6 = &cf_addCancelBtnTitle_handler_;
    _NSSelectorFromString();
    pcVar4 = local_168;
    local_258 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,pcVar6);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_168,local_258,&cf_Sm,0);
    }
    _objc_storeStrong(&local_1a0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_198,0);
LAB_00fb928c:
    pcVar8 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar4 = local_168;
    puVar3 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar8 & 1) != 0) {
      puVar10 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar10);
    }
    local_15c = 0;
  }
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
LAB_00fb9364:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

