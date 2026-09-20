// FUN_001a5168 @ 001a5168

void FUN_001a5168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long local_428;
  ulong local_380;
  ulong local_378;
  long local_298;
  long local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long local_208;
  undefined *local_200;
  undefined1 local_1f1;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  cfstringStruct *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  byte local_e9;
  long local_e8;
  long local_e0;
  uint local_d8;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_7);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_8);
  if ((local_b0 == 0) ||
     (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    local_d8 = 1;
  }
  else {
    local_e9 = 0;
    bVar1 = local_c8 == 0;
    if (bVar1) {
      local_298 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_298;
    }
    else {
      local_298 = local_c8;
    }
    local_e9 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_298;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    lVar8 = local_e0;
    _objc_getAssociatedObject(local_e0,&DAT_028c89b3);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = lVar8;
    if (lVar8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeInteraction__0269fdd8,lVar8);
    }
    puVar4 = PTR_WCRefineContactsPackContextMenuDelegate_026ce3c0;
    _objc_alloc_init();
    local_100 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setActions__0269f1c0,local_c0);
    puVar4 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithDelegate__0269fde0,local_100);
    local_108 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addInteraction__0269fde8,puVar4);
    _objc_setAssociatedObject(local_e0,&DAT_028c89b4,local_100,1);
    _objc_setAssociatedObject(local_e0,&DAT_028c89b3,local_108,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
    local_138 = param_1;
    local_130 = param_2;
    local_128 = param_3;
    local_120 = param_4;
    _CGRectGetMidX();
    local_230 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
    local_158 = local_230;
    local_150 = param_2;
    local_148 = param_3;
    local_140 = param_4;
    _CGRectGetMidY(local_230,param_2);
    FUN_001a5f2c();
    pcVar5 = &cf__presentMenuAtLocation_;
    local_118 = param_1;
    uStack_110 = local_230;
    _NSSelectorFromString();
    puVar4 = local_108;
    local_160 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)puVar4 & 1) == 0) {
      pcVar5 = &cf_presentMenuAtLocation_;
      _NSSelectorFromString();
      local_160 = pcVar5;
    }
    puVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_respondsToSelector__026ca818,local_160);
    bVar1 = ((ulong)puVar4 & 1) != 0;
    if (bVar1) {
      uStack_168 = uStack_110;
      local_170 = local_118;
      local_230 = local_118;
      param_1 = uStack_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,local_160);
    }
    local_d8 = (uint)bVar1;
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_e0,0);
    if (local_d8 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,local_b8,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar4;
      _memset(auStack_1c0,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_378 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
      if (local_378 != 0) {
        lVar8 = *local_1b0;
        local_380 = 0;
        do {
          do {
            if (*local_1b0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar8,uVar3);
            }
            uVar9 = *(ulong *)(local_1b8 + local_380 * 8);
            local_180 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_destructive_0269fbf8);
            puVar7 = local_178;
            puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            local_1c8 = 2;
            if ((uVar9 & 1) == 0) {
              local_1c8 = 0;
            }
            uVar6 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_180;
            uVar2 = local_1c8;
            local_1f0 = PTR___NSConcreteStackBlock_02578660;
            local_1e8 = 0xc2000000;
            local_1e4 = 0;
            local_1e0 = FUN_001a5f58;
            local_1d8 = &DAT_0257ab70;
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = uVar9;
            local_1f1 = 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,uVar6,uVar2,&local_1f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
            local_1f1 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            _objc_storeStrong(&local_1d0,0);
            local_380 = local_380 + 1;
          } while (local_380 < local_378);
          local_378 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_380 = 0;
        } while (local_378 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar4 = local_178;
      puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      local_200 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        bVar1 = local_c8 == 0;
        if (bVar1) {
          local_428 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_208 = local_428;
        }
        else {
          local_428 = local_c8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setSourceView__0269fdf8,local_428);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_208);
        }
        bVar1 = local_c8 == 0;
        if (bVar1) {
          local_238 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          uStack_228 = param_1;
          local_220 = param_3;
          uStack_218 = param_4;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
          uStack_228 = param_1;
          local_220 = param_3;
          uStack_218 = param_4;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,uStack_228,local_220,uStack_218,local_200,PTR_s_setSourceRect__0269fe00
                  );
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_238);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_setPermittedArrowDirections__0269fe08,0xf);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_178,1,0);
      _objc_storeStrong(&local_200);
      _objc_storeStrong(&local_178,0);
      local_d8 = 0;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

