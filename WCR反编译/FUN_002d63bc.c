// FUN_002d63bc @ 002d63bc

byte FUN_002d63bc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_3e8;
  ulong local_3e0;
  uint local_28c;
  double local_268;
  ulong local_218;
  double local_210;
  double dStack_208;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_181;
  ulong local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  long local_130;
  undefined8 local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  ulong local_100;
  ulong local_f8;
  undefined4 local_f0;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  ulong local_d8;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  local_d9 = 0;
  local_e9 = 0;
  local_28c = 1;
  if (local_b8 != 0) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_28c = 1;
    local_d8 = uVar3;
    if (uVar3 != 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_28c = (uint)puVar4 ^ 1;
    }
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_28c & 1) != 0) {
    local_a9 = 0;
    local_f0 = 1;
    goto LAB_002d7740;
  }
  uVar3 = local_b8;
  FUN_002d8308();
  if ((uVar3 & 1) != 0) {
    FUN_002b6e10(local_b8,&cf_overlay_skipChatReturn,0);
    uVar3 = local_b8;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_overlay_skipChatReturn___);
    _objc_retainAutoreleasedReturnValue();
    FUN_002c3da8(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_a9 = 0;
    local_f0 = 1;
    goto LAB_002d7740;
  }
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_b8;
  local_f8 = uVar3;
  _objc_getAssociatedObject(local_b8,&DAT_028c9805);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_b8;
  local_100 = uVar6;
  FUN_002b517c();
  if ((uVar3 & 1) == 0) {
    if (local_100 != 0) {
      uVar6 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_f8;
      (*(code *)PTR__objc_release_02578630)();
      if (uVar6 == uVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_bringSubviewToFront__026ca550,local_100);
        uVar3 = local_b8;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_overlay_keep___);
        _objc_retainAutoreleasedReturnValue();
        FUN_002c3da8(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_a9 = 1;
        local_f0 = 1;
        goto LAB_002d7700;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_b8,&DAT_028c9805,0,1);
    }
    uVar3 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028c9807);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar6 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      local_128 = param_1;
      local_120 = param_2;
      local_118 = param_3;
      local_110 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar4,PTR_s_initWithFrame__026ca6e8);
      local_108 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,DAT_02323ff0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar4 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_268 = 100000.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_130 = 0;
      _memset(auStack_178,0,0x40);
      uVar3 = local_b8;
      FUN_002d8828();
      _objc_retainAutoreleasedReturnValue();
      local_3e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3e0 != 0) {
        lVar5 = *local_168;
        local_3e8 = 0;
        do {
          do {
            if (*local_168 - lVar5 != 0) {
              _objc_enumerationMutation(*local_168 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_170 + local_3e8 * 8);
            local_181 = 0;
            bVar1 = true;
            local_138 = uVar6;
            if (uVar6 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
              bVar1 = true;
              if ((uVar6 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_alpha_026ca4d8);
                bVar1 = true;
                param_2 = DAT_02323d38;
                if (DAT_02323d38 < local_268) {
                  uVar6 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_superview_026cab50);
                  _objc_retainAutoreleasedReturnValue();
                  local_181 = 1;
                  bVar1 = uVar6 == 0;
                  local_180 = uVar6;
                }
              }
            }
            if ((local_181 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_180);
            }
            if (!bVar1) {
              uVar6 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_frame_026ca640);
              local_1c8 = local_268;
              local_1c0 = param_2;
              local_1b8 = param_3;
              local_1b0 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_convertRect_toView__0269ded8,local_f8);
              local_1a8 = local_268;
              dStack_1a0 = param_2;
              local_198 = param_3;
              uStack_190 = param_4;
              (*(code *)PTR__objc_release_02578630)();
              uVar2 = (uint)uVar6;
              local_268 = local_1a8;
              param_2 = dStack_1a0;
              param_3 = local_198;
              param_4 = uStack_190;
              _CGRectIsEmpty();
              if ((uVar2 & 1) == 0) {
                dStack_208 = dStack_1a0;
                local_210 = local_1a8;
                local_268 = local_1a8;
                param_2 = dStack_1a0;
                param_3 = local_198;
                param_4 = uStack_190;
                _CGRectIsNull();
                if ((uVar2 & 1) == 0) {
                  uVar6 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_snapshotViewAfterScreenUpdates__0269e2f0,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_218 = uVar6;
                  if (uVar6 == 0) {
                    local_f0 = 3;
                  }
                  else {
                    local_268 = local_1a8;
                    param_2 = dStack_1a0;
                    param_3 = local_198;
                    param_4 = uStack_190;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_setFrame__026ca960);
                    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_alpha_026ca4d8);
                    (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setAlpha__026ca860);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_218,PTR_s_setUserInteractionEnabled__026caad8,0);
                    uVar6 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_tag_026cab98);
                    if (((uVar6 == 0x24f749) ||
                        (uVar6 = local_138,
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_tag_026cab98),
                        uVar6 == 0x24f74a)) ||
                       (uVar6 = local_138,
                       (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_tag_026cab98),
                       uVar6 == 0x24f74b)) {
                      uVar6 = local_138;
                      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      if (local_268 <= 0.0) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bounds_026ca548);
                        _CGRectGetHeight(local_268,param_2);
                        param_2 = 2.0;
                        local_268 = local_268 / 2.0;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_218,PTR_s_setClipsToBounds__026ca8c8,1);
                      uVar6 = local_218;
                      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      uVar6 = local_218;
                      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      uVar6 = local_218;
                      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      FUN_002b0928();
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_addSubview__026ca4c0,local_218);
                    local_130 = local_130 + 1;
                    local_f0 = 0;
                  }
                  _objc_storeStrong(&local_218,0);
                }
              }
            }
            local_3e8 = local_3e8 + 1;
          } while (local_3e8 < local_3e0);
          local_3e0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_3e8 = 0;
        } while (local_3e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_a9 = local_130 != 0;
      if ((bool)local_a9) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addSubview__026ca4c0,local_108);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_bringSubviewToFront__026ca550,local_108);
        _objc_setAssociatedObject(local_b8,&DAT_028c9805,local_108,1);
        uVar3 = local_b8;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_overlay_show___);
        _objc_retainAutoreleasedReturnValue();
        FUN_002c3da8(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_002d8bb4(local_b8,local_108,0);
      }
      local_f0 = 1;
      _objc_storeStrong(&local_108,0);
    }
    else {
      local_a9 = 0;
      local_f0 = 1;
    }
  }
  else {
    if (local_100 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_b8,&DAT_028c9805,0,1);
    }
    local_a9 = 0;
    local_f0 = 1;
  }
LAB_002d7700:
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
LAB_002d7740:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

