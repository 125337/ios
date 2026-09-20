// FUN_0085c670 @ 0085c670

void FUN_0085c670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_2d8;
  ulong local_2d0;
  ulong local_250;
  ulong local_248;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    _memset(auStack_190,0,0x40);
    uVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_248 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_248 != 0) {
      lVar3 = *local_180;
      local_250 = 0;
      do {
        do {
          if (*local_180 - lVar3 != 0) {
            _objc_enumerationMutation(*local_180 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_188 + local_250 * 8);
          puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
          local_150 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
            uVar4 = local_150;
            local_1d0 = param_1;
            uStack_1c8 = param_2;
            local_1c0 = param_3;
            uStack_1b8 = param_4;
            local_1b0 = param_1;
            uStack_1a8 = param_2;
            local_1a0 = param_3;
            uStack_198 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setFrame__026ca960);
            FUN_0085c42c();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setVideoGravity__0269f298);
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_250 = 0;
      } while (local_248 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    _memset(auStack_218,0,0x40);
    uVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 != 0) {
      lVar3 = *local_208;
      local_2d8 = 0;
      do {
        do {
          if (*local_208 - lVar3 != 0) {
            _objc_enumerationMutation(*local_208 - lVar3,uVar4);
          }
          local_1d8 = *(undefined8 *)(local_210 + local_2d8 * 8);
          FUN_0085c670(local_1d8);
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                   0x10);
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_134 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

