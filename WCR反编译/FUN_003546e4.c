// FUN_003546e4 @ 003546e4

void FUN_003546e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long local_328;
  ulong local_2b8;
  ulong local_2b0;
  long local_268;
  long local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
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
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  byte local_d9;
  long local_d8;
  long local_d0;
  uint local_c4;
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
    local_c4 = 1;
  }
  else {
    FUN_0035503c();
    local_d9 = 0;
    bVar1 = local_b8 == 0;
    if (bVar1) {
      local_268 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_268;
    }
    else {
      local_268 = local_b8;
    }
    local_d9 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_268;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    lVar8 = local_b8;
    FUN_00355068();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_d0;
    local_e8 = lVar8;
    _objc_getAssociatedObject(local_d0,DAT_026e0068);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar4;
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeInteraction__0269fdd8,lVar4);
    }
    puVar5 = PTR_WCRHomeAvatarStripContextMenuDelegate_026ce5a0;
    _objc_alloc_init();
    local_f8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setActions__0269f1c0,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setPreviewAvatarView__026a2560,local_e8);
    puVar5 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_100 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addInteraction__0269fde8,puVar5);
    _objc_setAssociatedObject(local_d0,DAT_026e0070,local_f8);
    _objc_setAssociatedObject(local_d0,DAT_026e0068,local_100,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_bounds_026ca548);
    local_130 = param_1;
    local_128 = param_2;
    local_120 = param_3;
    local_118 = param_4;
    _CGRectGetMidX();
    uStack_200 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_bounds_026ca548);
    local_150 = uStack_200;
    local_148 = param_2;
    local_140 = param_3;
    local_138 = param_4;
    _CGRectGetMidY(uStack_200,param_2);
    FUN_00355144();
    pcVar6 = &cf__presentMenuAtLocation_;
    local_110 = param_1;
    local_108 = uStack_200;
    _NSSelectorFromString();
    puVar5 = local_100;
    local_158 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,pcVar6);
    if (((ulong)puVar5 & 1) == 0) {
      pcVar6 = &cf_presentMenuAtLocation_;
      _NSSelectorFromString();
      local_158 = pcVar6;
    }
    puVar5 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,local_158);
    bVar1 = ((ulong)puVar5 & 1) != 0;
    if (bVar1) {
      param_1 = local_110;
      uStack_200 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,local_158);
    }
    local_c4 = (uint)bVar1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_d0,0);
    if (local_c4 == 0) {
      puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar5;
      _memset(auStack_1a8,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2b0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      if (local_2b0 != 0) {
        lVar8 = *local_198;
        local_2b8 = 0;
        do {
          do {
            if (*local_198 - lVar8 != 0) {
              _objc_enumerationMutation(*local_198 - lVar8,uVar3);
            }
            puVar7 = local_160;
            puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            uVar9 = *(undefined8 *)(local_1a0 + local_2b8 * 8);
            local_168 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_168;
            local_1d0 = PTR___NSConcreteStackBlock_02578660;
            local_1c8 = 0xc2000000;
            local_1c4 = 0;
            local_1c0 = FUN_00355170;
            local_1b8 = &DAT_0257c5b8;
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,uVar9,0,&local_1d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            _objc_storeStrong(&local_1b0,0);
            local_2b8 = local_2b8 + 1;
          } while (local_2b8 < local_2b0);
          local_2b0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_2b8 = 0;
        } while (local_2b0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar5 = local_160;
      puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        bVar1 = local_b8 == 0;
        if (bVar1) {
          local_328 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = local_328;
        }
        else {
          local_328 = local_b8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setSourceView__0269fdf8,local_328);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_1e0);
        }
        bVar1 = local_b8 == 0;
        if (bVar1) {
          local_210 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_208 = param_1;
          local_1f8 = param_3;
          uStack_1f0 = param_4;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          local_208 = param_1;
          local_1f8 = param_3;
          uStack_1f0 = param_4;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_208,uStack_200,local_1f8,uStack_1f0,local_1d8,PTR_s_setSourceRect__0269fe00
                  );
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_160,1);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_160,0);
      local_c4 = 0;
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

