// FUN_001c4a78 @ 001c4a78

void FUN_001c4a78(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_3a0;
  ulong local_398;
  ulong local_340;
  ulong local_338;
  ulong local_2d0;
  ulong local_2c8;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  ulong local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  ulong local_218;
  int local_210;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*DAT_028c8c60)(param_1,param_2);
  uVar1 = local_1b0;
  FUN_00203300();
  FUN_001cf8b0();
  if ((uVar1 & 1) != 0) {
    _memset(auStack_200,0,0x40);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != 0) {
      lVar4 = *local_1f0;
      local_2d0 = 0;
      do {
        do {
          if (*local_1f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_1f8 + local_2d0 * 8);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_1c0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            FUN_001d5470(local_1c0);
            local_210 = 2;
            goto LAB_001c4ca8;
          }
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10
                  );
        local_2d0 = 0;
      } while (local_2c8 != 0);
    }
    local_210 = 0;
LAB_001c4ca8:
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_00203c70();
  if ((uVar1 & 1) == 0) goto LAB_001c52e4;
  uVar1 = local_1b0;
  _objc_getAssociatedObject(local_1b0,&DAT_028c9176);
  _objc_retainAutoreleasedReturnValue();
  local_218 = uVar1;
  if ((uVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540), (uVar1 & 1) == 0)) {
    if (DAT_028c9178 == (cfstringStruct *)0x0) {
      pcVar3 = &cf_UIVisualEffectView;
      _NSClassFromString();
      DAT_028c9178 = pcVar3;
    }
    if (DAT_028c9178 != (cfstringStruct *)0x0) {
      _memset(auStack_260,0,0x40);
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_338 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_338 != 0) {
        lVar4 = *local_250;
        local_340 = 0;
        do {
          do {
            if (*local_250 - lVar4 != 0) {
              _objc_enumerationMutation(*local_250 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_258 + local_340 * 8);
            local_220 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,DAT_028c9178);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_setHidden__026ca970,1);
              uVar5 = local_1b0;
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar5,&DAT_028c9176,puVar2,1);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              local_210 = 1;
              goto LAB_001c5260;
            }
            _memset(auStack_2a8,0,0x40);
            uVar5 = local_220;
            (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_398 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_398 != 0) {
              lVar6 = *local_298;
              local_3a0 = 0;
              do {
                do {
                  if (*local_298 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_298 - lVar6,uVar5);
                  }
                  uVar7 = *(ulong *)(local_2a0 + local_3a0 * 8);
                  local_268 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_isKindOfClass__0269cd68,DAT_028c9178);
                  if ((uVar7 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setHidden__026ca970,1);
                    uVar7 = local_1b0;
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    _objc_setAssociatedObject(uVar7,&DAT_028c9176,puVar2,1);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                    local_210 = 1;
                    goto LAB_001c51cc;
                  }
                  local_3a0 = local_3a0 + 1;
                } while (local_3a0 < local_398);
                local_398 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,
                           auStack_1a8,0x10);
                local_3a0 = 0;
              } while (local_398 != 0);
            }
            local_210 = 0;
LAB_001c51cc:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (local_210 != 0) goto LAB_001c5260;
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,
                     0x10);
          local_340 = 0;
        } while (local_338 != 0);
      }
      local_210 = 0;
LAB_001c5260:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_210 != 0) goto LAB_001c52b4;
    }
    local_210 = 0;
  }
  else {
    local_210 = 1;
  }
LAB_001c52b4:
  _objc_storeStrong(&local_218,0);
LAB_001c52e4:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

