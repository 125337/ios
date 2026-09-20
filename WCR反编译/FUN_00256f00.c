// FUN_00256f00 @ 00256f00

void FUN_00256f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_318;
  ulong local_310;
  long local_238;
  undefined *local_210;
  undefined1 local_201;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  long local_1e0;
  byte local_1d1;
  long local_1d0;
  long local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  long local_180;
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
  undefined4 local_e8;
  byte local_e1;
  long local_e0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_7);
  local_e1 = 0;
  bVar1 = local_c0 == 0;
  if (bVar1) {
    local_238 = 0;
    FUN_00256860();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_238;
  }
  else {
    local_238 = local_c0;
  }
  local_e1 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_238;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if (local_c8 == 0) {
    local_e8 = 1;
  }
  else {
    lVar8 = local_c8;
    _objc_getAssociatedObject(local_c8,DAT_026dfb68);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar8;
    if (lVar8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeInteraction__0269fdd8,lVar8);
    }
    puVar3 = PTR_WCREmoticonGroupSysMenuDelegate_026ce428;
    _objc_alloc_init();
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setActions__0269f1c0,local_b8);
    puVar3 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithDelegate__0269fde0,local_f8);
    local_100 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addInteraction__0269fde8,puVar3);
    _objc_setAssociatedObject(local_c8,DAT_026dfb70,local_f8,1);
    _objc_setAssociatedObject(local_c8,DAT_026dfb68,local_100,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    local_130 = param_1;
    local_128 = param_2;
    local_120 = param_3;
    local_118 = param_4;
    _CGRectGetMidX();
    uVar10 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    local_150 = uVar10;
    local_148 = param_2;
    local_140 = param_3;
    local_138 = param_4;
    _CGRectGetMidY(uVar10,param_2,param_3,param_4);
    FUN_00257b40();
    pcVar4 = &cf__presentMenuAtLocation_;
    local_110 = param_1;
    uStack_108 = uVar10;
    _NSSelectorFromString();
    puVar3 = local_100;
    local_158 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = &cf_presentMenuAtLocation_;
      _NSSelectorFromString();
      local_158 = pcVar4;
    }
    puVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,local_158);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,local_b0,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar3;
      _memset(auStack_1c0,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_310 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
      if (local_310 != 0) {
        lVar8 = *local_1b0;
        local_318 = 0;
        do {
          do {
            if (*local_1b0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar8,uVar2);
            }
            lVar9 = *(long *)(local_1b8 + local_318 * 8);
            local_180 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = local_180;
            local_1c8 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = local_180;
            local_1d0 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar9);
            local_1d1 = (byte)lVar5;
            lVar6 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
            puVar7 = local_178;
            lVar9 = local_1c8;
            lVar5 = local_1d0;
            puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
            if (lVar6 == 0) {
              local_e8 = 3;
            }
            else {
              uVar10 = 2;
              if ((local_1d1 & 1) == 0) {
                uVar10 = 0;
              }
              local_200 = PTR___NSConcreteStackBlock_02578660;
              local_1f8 = 0xc2000000;
              local_1f4 = 0;
              local_1f0 = FUN_00257b6c;
              local_1e8 = &DAT_02579880;
              (*(code *)PTR__objc_retain_02578638)();
              local_1e0 = lVar5;
              local_201 = 1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,lVar9,uVar10,
                         &local_200);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
              local_201 = 0;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              _objc_storeStrong(&local_1e0,0);
              local_e8 = 0;
            }
            _objc_storeStrong(&local_1d0);
            _objc_storeStrong(&local_1c8,0);
            local_318 = local_318 + 1;
          } while (local_318 < local_310);
          local_310 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_318 = 0;
        } while (local_310 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar3 = local_178;
      puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_presentViewController_animated_c_0269d2b0,local_178,1,0);
      }
      _objc_storeStrong(&local_210);
      _objc_storeStrong(&local_178,0);
      local_e8 = 0;
    }
    else {
      uStack_168 = uStack_108;
      local_170 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,uStack_108,local_100,local_158);
      local_e8 = 1;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
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

