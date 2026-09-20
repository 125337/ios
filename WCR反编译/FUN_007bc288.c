// FUN_007bc288 @ 007bc288

void FUN_007bc288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long local_400;
  ulong local_368;
  ulong local_360;
  long local_290;
  long local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  long local_200;
  undefined *local_1f8;
  undefined1 local_1e9;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  byte local_e1;
  long local_e0;
  long local_d8;
  uint local_d0;
  ulong local_c0;
  long local_b8;
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
  if ((local_b0 == 0) ||
     (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    local_d0 = 1;
  }
  else {
    local_e1 = 0;
    bVar1 = local_b8 == 0;
    if (bVar1) {
      local_290 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_290;
    }
    else {
      local_290 = local_b8;
    }
    local_e1 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_290;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    lVar7 = local_d8;
    _objc_getAssociatedObject(local_d8,DAT_026f4688);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar7;
    if (lVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeInteraction__0269fdd8,lVar7);
    }
    puVar4 = PTR_WCRTGMenuContextDelegate_026ce958;
    _objc_alloc_init();
    local_f8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setActions__0269f1c0,local_c0);
    puVar4 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithDelegate__0269fde0,local_f8);
    local_100 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addInteraction__0269fde8,puVar4);
    _objc_setAssociatedObject(local_d8,DAT_026f4690,local_f8,1);
    _objc_setAssociatedObject(local_d8,DAT_026f4688,local_100,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
    local_130 = param_1;
    local_128 = param_2;
    local_120 = param_3;
    local_118 = param_4;
    _CGRectGetMidX();
    uStack_220 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
    local_150 = uStack_220;
    local_148 = param_2;
    local_140 = param_3;
    local_138 = param_4;
    _CGRectGetMidY(uStack_220,param_2);
    FUN_007ba834();
    pcVar5 = &cf__presentMenuAtLocation_;
    local_110 = param_1;
    uStack_108 = uStack_220;
    _NSSelectorFromString();
    puVar4 = local_100;
    local_158 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)puVar4 & 1) == 0) {
      pcVar5 = &cf_presentMenuAtLocation_;
      _NSSelectorFromString();
      local_158 = pcVar5;
    }
    puVar4 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,local_158);
    bVar1 = ((ulong)puVar4 & 1) != 0;
    if (bVar1) {
      uStack_168 = uStack_108;
      local_170 = local_110;
      param_1 = local_110;
      uStack_220 = uStack_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,local_158);
    }
    local_d0 = (uint)bVar1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    if (local_d0 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar4;
      _memset(auStack_1c0,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_360 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
      if (local_360 != 0) {
        lVar7 = *local_1b0;
        local_368 = 0;
        do {
          do {
            if (*local_1b0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar7,uVar3);
            }
            puVar6 = local_178;
            puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            uVar8 = *(undefined8 *)(local_1b8 + local_368 * 8);
            local_180 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_180;
            local_1e8 = PTR___NSConcreteStackBlock_02578660;
            local_1e0 = 0xc2000000;
            local_1dc = 0;
            local_1d8 = FUN_007bd030;
            local_1d0 = &DAT_0257ab70;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c8 = uVar2;
            local_1e9 = 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,uVar8,0,&local_1e8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
            local_1e9 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            _objc_storeStrong(&local_1c8,0);
            local_368 = local_368 + 1;
          } while (local_368 < local_360);
          local_360 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_368 = 0;
        } while (local_360 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar4 = local_178;
      puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        bVar1 = local_b8 == 0;
        if (bVar1) {
          local_400 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_200 = local_400;
        }
        else {
          local_400 = local_b8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_setSourceView__0269fdf8,local_400);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_200);
        }
        bVar1 = local_b8 == 0;
        if (bVar1) {
          local_230 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_228 = param_1;
          local_218 = param_3;
          uStack_210 = param_4;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          local_228 = param_1;
          local_218 = param_3;
          uStack_210 = param_4;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,uStack_220,local_218,uStack_210,local_1f8,PTR_s_setSourceRect__0269fe00
                  );
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_230);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_178,1,0);
      _objc_storeStrong(&local_1f8);
      _objc_storeStrong(&local_178,0);
      local_d0 = 0;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

