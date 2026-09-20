// presentManageActionsWithTitle:actions: @ 0194ac0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonGroupManageViewController::presentManageActionsWithTitle_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  ID IVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong local_360;
  ulong local_358;
  cfstringStruct *local_338;
  ulong local_280;
  ulong local_278;
  ulong local_240;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  char *local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined4 local_1b8;
  byte local_1b1;
  long local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158;
  char *local_150;
  ulong local_148;
  cfstringStruct *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = (cfstringStruct *)0x0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  pcVar3 = "WCUIActionSheet";
  _objc_getClass();
  local_150 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,local_140,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    _memset(auStack_1a0,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_278 != 0) {
      lVar11 = *local_190;
      local_280 = 0;
      do {
        do {
          if (*local_190 - lVar11 != 0) {
            _objc_enumerationMutation(*local_190 - lVar11,uVar2);
          }
          lVar13 = *(long *)(local_198 + local_280 * 8);
          local_160 = lVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = local_160;
          local_1a8 = lVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = local_160;
          local_1b0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar13;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar13);
          local_1b1 = (byte)lVar5;
          lVar6 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
          puVar7 = local_158;
          lVar13 = local_1a8;
          lVar5 = local_1b0;
          puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
          if (lVar6 == 0) {
            local_1b8 = 3;
          }
          else {
            uVar1 = 2;
            if ((local_1b1 & 1) == 0) {
              uVar1 = 0;
            }
            local_1e0 = PTR___NSConcreteStackBlock_02578660;
            local_1d8 = 0xc2000000;
            local_1d4 = 0;
            local_1d0 = FUN_0194b66c;
            local_1c8 = &DAT_02584050;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c0 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,lVar13,uVar1,&local_1e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_1c0,0);
            local_1b8 = 0;
          }
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_1a8,0);
          local_280 = local_280 + 1;
        } while (local_280 < local_278);
        local_278 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_280 = 0;
      } while (local_278 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = local_158;
    puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_presentViewController_animated_c_0269d2b0,local_158,1,0);
    local_1b8 = 1;
    _objc_storeStrong(&local_158,0);
  }
  else {
    _objc_alloc();
    local_338 = local_140;
    if (local_140 == (cfstringStruct *)0x0) {
      local_338 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8,local_338);
    local_1e8 = pcVar3;
    _memset(auStack_230,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_358 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10);
    if (local_358 != 0) {
      lVar11 = *local_220;
      local_360 = 0;
      do {
        do {
          if (*local_220 - lVar11 != 0) {
            _objc_enumerationMutation(*local_220 - lVar11,uVar2);
          }
          uVar12 = *(ulong *)(local_228 + local_360 * 8);
          local_1f0 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_1f0;
          local_238 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = local_1f0;
          local_240 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar12);
          uVar12 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0);
          if (uVar12 == 0) {
            local_1b8 = 5;
          }
          else {
            if (((uVar8 & 1) == 0) ||
               (pcVar9 = local_1e8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1e8,PTR_s_respondsToSelector__026ca818,
                          PTR_s_addDestructiveButtonTitle_handle_0269ffb0), pcVar3 = local_1e8,
               uVar8 = local_238, puVar4 = PTR_s_addDestructiveButtonTitle_handle_0269ffb0,
               ((ulong)pcVar9 & 1) == 0)) {
              pcVar9 = local_1e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e8,PTR_s_respondsToSelector__026ca818,
                         PTR_s_addBtnTitle_handler__026a0f50);
              pcVar3 = local_1e8;
              uVar8 = local_238;
              puVar4 = PTR_s_addBtnTitle_handler__026a0f50;
              if (((ulong)pcVar9 & 1) != 0) {
                uVar12 = local_240;
                _objc_retainBlock();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar4,uVar8);
                (*(code *)PTR__objc_release_02578630)(uVar12);
              }
            }
            else {
              uVar12 = local_240;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar4,uVar8);
              (*(code *)PTR__objc_release_02578630)(uVar12);
            }
            local_1b8 = 0;
          }
          _objc_storeStrong(&local_240);
          _objc_storeStrong(&local_238,0);
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                   0x10);
        local_360 = 0;
      } while (local_358 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar3 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e8,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_handler__0269ffb8);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1e8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_addCancelBtnTitle_handler__0269ffb8,&cf_Sm,0);
    }
    pcVar9 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e8,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar3 = local_1e8;
    puVar4 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar9 & 1) != 0) {
      IVar10 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar10);
    }
    _objc_storeStrong(&local_1e8,0);
    local_1b8 = 0;
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

