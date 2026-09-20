// FUN_002db4f8 @ 002db4f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002db4f8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_348;
  ulong local_340;
  uint local_26c;
  double local_248;
  ulong local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  byte local_169;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  long local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  byte local_e1;
  undefined *local_e0;
  undefined8 local_c8;
  byte local_b9;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c8 = 0;
  local_b9 = param_6;
  _objc_storeStrong(&local_c8,param_7);
  local_e1 = 0;
  local_26c = 1;
  local_248 = param_1;
  if (local_b8 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_26c = (uint)puVar3 ^ 1;
    local_248 = param_1;
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_26c & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_frame_026ca640);
    local_110 = local_248;
    local_108 = param_2;
    local_100 = param_3;
    local_f8 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323ff0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setOpaque__026ca9f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setClipsToBounds__026ca8c8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setUserInteractionEnabled__026caad8,0);
    uVar4 = local_b8;
    FUN_002d8308();
    puVar3 = local_f0;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_b8;
      _objc_getAssociatedObject(local_b8,&DAT_028c9807);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar3 = local_f0;
      if ((uVar6 & 1) == 0) {
        uVar4 = local_b8;
        FUN_002c0210();
        puVar3 = local_f0;
        if ((uVar4 & 1) == 0) {
          local_118 = 0;
          _memset(auStack_160,0,0x40);
          uVar4 = local_b8;
          FUN_002d8828();
          _objc_retainAutoreleasedReturnValue();
          local_340 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_340 != 0) {
            lVar5 = *local_150;
            local_348 = 0;
            do {
              do {
                if (*local_150 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_150 - lVar5,uVar4);
                }
                uVar6 = *(ulong *)(local_158 + local_348 * 8);
                local_169 = 0;
                bVar1 = true;
                local_120 = uVar6;
                if (uVar6 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
                  bVar1 = true;
                  if ((uVar6 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_alpha_026ca4d8);
                    bVar1 = true;
                    param_2 = DAT_02323d38;
                    if (DAT_02323d38 < local_248) {
                      uVar6 = local_120;
                      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_superview_026cab50);
                      _objc_retainAutoreleasedReturnValue();
                      local_169 = 1;
                      bVar1 = uVar6 == 0;
                      local_168 = uVar6;
                    }
                  }
                }
                if ((local_169 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_168);
                }
                if (!bVar1) {
                  uVar6 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_superview_026cab50);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_frame_026ca640);
                  local_1b0 = local_248;
                  local_1a8 = param_2;
                  local_1a0 = param_3;
                  local_198 = param_4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_convertRect_toView__0269ded8,local_b8);
                  local_190 = local_248;
                  dStack_188 = param_2;
                  local_180 = param_3;
                  uStack_178 = param_4;
                  (*(code *)PTR__objc_release_02578630)();
                  uVar2 = (uint)uVar6;
                  local_248 = local_190;
                  param_2 = dStack_188;
                  param_3 = local_180;
                  param_4 = uStack_178;
                  _CGRectIsNull();
                  if ((uVar2 & 1) == 0) {
                    dStack_1e8 = dStack_188;
                    local_1f0 = local_190;
                    local_248 = local_190;
                    param_2 = dStack_188;
                    param_3 = local_180;
                    param_4 = uStack_178;
                    _CGRectIsEmpty();
                    if ((uVar2 & 1) == 0) {
                      uVar6 = local_120;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_120,PTR_s_snapshotViewAfterScreenUpdates__0269e2f0,
                                 local_b9 & 1);
                      _objc_retainAutoreleasedReturnValue();
                      local_1f8 = uVar6;
                      if (uVar6 == 0) {
                        local_e8 = 3;
                      }
                      else {
                        local_248 = local_190;
                        param_2 = dStack_188;
                        param_3 = local_180;
                        param_4 = uStack_178;
                        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_setFrame__026ca960);
                        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_alpha_026ca4d8);
                        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_setAlpha__026ca860);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1f8,PTR_s_setUserInteractionEnabled__026caad8,0);
                        uVar6 = local_120;
                        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_tag_026cab98);
                        if (((uVar6 == 0x24f749) ||
                            (uVar6 = local_120,
                            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_tag_026cab98),
                            uVar6 == 0x24f74a)) ||
                           (uVar6 = local_120,
                           (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_tag_026cab98),
                           uVar6 == 0x24f74b)) {
                          uVar6 = local_120;
                          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_layer_026ca788);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)();
                          (*(code *)PTR__objc_release_02578630)(uVar6);
                          if (local_248 <= 0.0) {
                            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_bounds_026ca548);
                            _CGRectGetHeight(local_248,param_2);
                            param_2 = 2.0;
                            local_248 = local_248 / 2.0;
                          }
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1f8,PTR_s_setClipsToBounds__026ca8c8,1);
                          uVar6 = local_1f8;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_layer_026ca788);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)();
                          (*(code *)PTR__objc_release_02578630)(uVar6);
                          uVar6 = local_1f8;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_layer_026ca788);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)();
                          (*(code *)PTR__objc_release_02578630)(uVar6);
                          uVar6 = local_1f8;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_layer_026ca788);
                          _objc_retainAutoreleasedReturnValue();
                          FUN_002b0928();
                          (*(code *)PTR__objc_release_02578630)(uVar6);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_f0,PTR_s_addSubview__026ca4c0,local_1f8);
                        local_118 = local_118 + 1;
                        local_e8 = 0;
                      }
                      _objc_storeStrong(&local_1f8,0);
                    }
                  }
                }
                local_348 = local_348 + 1;
              } while (local_348 < local_340);
              local_340 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,
                         auStack_a8,0x10);
              local_348 = 0;
            } while (local_340 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_b0 = local_f0;
          if (local_118 == 0) {
            local_b0 = (undefined *)0x0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar3;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar3;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
    }
    local_e8 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  else {
    local_b0 = (undefined *)0x0;
    local_e8 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

