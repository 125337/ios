// FUN_0051dc80 @ 0051dc80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0051dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_4b8;
  ulong local_4b0;
  ulong local_318;
  ulong local_310;
  undefined *local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  undefined8 local_278;
  undefined *local_270;
  char *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d1;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  char *local_150;
  undefined4 local_148;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_6);
  if ((local_130 == 0) ||
     (uVar1 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_148 = 1;
  }
  else {
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    local_150 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_gSW_b,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar5;
      _memset(auStack_1a0,0,0x40);
      uVar1 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_310 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      if (local_310 != 0) {
        lVar6 = *local_190;
        local_318 = 0;
        do {
          do {
            if (*local_190 - lVar6 != 0) {
              _objc_enumerationMutation(*local_190 - lVar6,uVar1);
            }
            uVar7 = *(undefined8 *)(local_198 + local_318 * 8);
            local_160 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_158;
            puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            uVar8 = local_160;
            local_1a8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_1a8;
            local_1d0 = PTR___NSConcreteStackBlock_02578660;
            local_1c8 = 0xc2000000;
            local_1c4 = 0;
            local_1c0 = FUN_005201e8;
            local_1b8 = &DAT_02579880;
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar7;
            local_1d1 = 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,uVar8,0,&local_1d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
            local_1d1 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            _objc_storeStrong(&local_1b0);
            _objc_storeStrong(&local_1a8,0);
            local_318 = local_318 + 1;
          } while (local_318 < local_310);
          local_310 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_318 = 0;
        } while (local_310 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar5 = local_158;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      lVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_218 = param_1;
      local_210 = param_2;
      local_208 = param_3;
      local_200 = param_4;
      _CGRectGetMidX();
      lVar4 = local_130;
      uVar7 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_238 = uVar7;
      local_230 = param_2;
      local_228 = param_3;
      local_220 = param_4;
      _CGRectGetMidY(uVar7,param_2,param_3,param_4);
      uVar9 = 0x3ff0000000000000;
      uVar8 = 0x3ff0000000000000;
      FUN_00520274();
      puVar5 = local_158;
      local_1f8 = param_1;
      uStack_1f0 = uVar7;
      local_1e8 = uVar8;
      uStack_1e0 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      uStack_258 = uStack_1f0;
      local_260 = local_1f8;
      uStack_248 = uStack_1e0;
      local_250 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,uStack_1f0,local_1e8,uStack_1e0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_presentViewController_animated_c_0269d2b0,local_158,1,0);
      local_148 = 1;
      _objc_storeStrong(&local_158,0);
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_gSW_b);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      uVar1 = local_138;
      local_268 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_270 = puVar5;
      _memset(auStack_2b8,0,0x40);
      uVar1 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_4b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_128,0x10)
      ;
      if (local_4b0 != 0) {
        lVar6 = *local_2a8;
        local_4b8 = 0;
        do {
          do {
            if (*local_2a8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_2a8 - lVar6,uVar1);
            }
            local_278 = *(undefined8 *)(local_2b0 + local_4b8 * 8);
            puVar5 = PTR_WCRCoverSheetTarget_026ce720;
            _objc_alloc_init();
            uVar7 = local_278;
            local_2c0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_setHandler__0269fb20);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_addObject__0269d180,local_2c0);
            pcVar2 = local_268;
            uVar7 = local_278;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,uVar7,local_2c0,
                       PTR_s_fire__026a48e8);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            _objc_storeStrong(&local_2c0,0);
            local_4b8 = local_4b8 + 1;
          } while (local_4b8 < local_4b0);
          local_4b0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_128,
                     0x10);
          local_4b8 = 0;
        } while (local_4b0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      _objc_setAssociatedObject(local_268,&DAT_028cb0d8,local_270,1);
      pcVar2 = local_268;
      lVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      _objc_storeStrong(&local_270);
      _objc_storeStrong(&local_268,0);
      local_148 = 0;
    }
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

