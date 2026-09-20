// FUN_002bb194 @ 002bb194

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002bb194(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined1 uVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  double *pdVar12;
  int iVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_1050;
  ulong local_1048;
  ulong local_1008;
  ulong local_1000;
  ulong local_ea8;
  ulong local_e90;
  byte local_d8c;
  uint local_ce8;
  ulong local_c80;
  ulong local_bd8;
  undefined *local_a48;
  byte local_a39;
  undefined1 auStack_a30 [8];
  long local_a28;
  long *local_a20;
  undefined8 local_9f0;
  undefined1 auStack_9e8 [8];
  long local_9e0;
  long *local_9d8;
  undefined8 local_9a8;
  undefined1 local_8d9;
  ulong local_8d8;
  ulong local_8d0;
  ulong local_8c8;
  ulong local_8c0;
  undefined1 local_8b1;
  ulong local_8b0;
  undefined1 local_8a1;
  ulong local_8a0;
  ulong local_898;
  ulong local_890;
  ulong local_888;
  long local_880;
  undefined *local_878 [30];
  bool local_781;
  ulong local_780;
  ulong local_778 [5];
  double local_750;
  undefined8 uStack_748;
  double local_740;
  undefined8 uStack_738;
  bool local_721;
  ulong local_720;
  ulong local_718 [5];
  double local_6f0;
  double dStack_6e8;
  undefined8 local_6e0;
  double dStack_6d8;
  long local_688;
  byte local_651;
  double local_630;
  undefined8 local_628;
  double local_5e8;
  undefined8 local_5e0;
  byte local_5c1;
  double local_5a0;
  undefined8 local_598;
  byte local_579;
  ulong local_578 [5];
  double local_550;
  undefined8 local_548;
  double local_508;
  byte local_4e1;
  double local_4b8;
  byte local_493;
  byte local_492;
  byte local_491;
  undefined1 auStack_490 [135];
  char local_409;
  ulong local_408 [34];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_258;
  ulong local_250;
  ulong local_248;
  undefined1 local_240;
  byte local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  byte local_23c;
  undefined1 local_23b;
  bool local_231;
  ulong local_230;
  ulong local_228;
  ulong local_220;
  double local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double dStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  byte local_1c1;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  byte local_169;
  undefined8 local_168;
  ulong local_160;
  double local_158;
  int local_140;
  byte local_139;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar2 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  dVar15 = DAT_02323d38;
  _objc_storeStrong(&local_130,param_5);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_6);
  local_139 = param_7;
  if (local_130 == 0) {
    local_140 = 1;
    goto LAB_002bdf68;
  }
  uVar8 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  if ((uVar9 & 1) == 0) {
    local_140 = 1;
    goto LAB_002bdf68;
  }
  uVar8 = local_130;
  FUN_002bad18();
  if ((uVar8 & 1) != 0) {
    local_140 = 1;
    goto LAB_002bdf68;
  }
  _CFAbsoluteTimeGetCurrent();
  uVar8 = local_130;
  local_158 = dVar15;
  FUN_002b3d00();
  if ((uVar8 & 1) != 0) {
    local_139 = 0;
  }
  uVar8 = local_130;
  _objc_getAssociatedObject(local_130,&DAT_028c9807);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  if ((uVar9 & 1) != 0) {
    _objc_setAssociatedObject(local_130,&DAT_028c9807,0,1);
  }
  uVar8 = local_130;
  FUN_002b517c();
  if ((uVar8 & 1) != 0) {
    FUN_002b6bb8(local_130,&cf_apply_MiniTaskFollowNative,1);
    FUN_002b6e10(local_130,&cf_apply_MiniTaskFollowNative,0);
    FUN_002b7768(local_130,0,&cf_apply_MiniTaskFollowNative);
    uVar8 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
    if (((uVar8 & 1) == 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_alpha_026ca4d8), param_2 = dVar2,
       dVar15 <= dVar2)) {
      dVar15 = 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setAlpha__026ca860);
    }
  }
  uVar8 = local_130;
  FUN_002b83f8();
  if (((uVar8 & 1) != 0) &&
     (uVar8 = local_130, FUN_002c007c(local_130,&cf_apply_begin), (uVar8 & 1) != 0)) {
    FUN_002b7184(local_130,&cf_apply_deferredOffscreen);
    local_140 = 1;
    goto LAB_002bdf68;
  }
  uVar9 = local_130;
  _objc_getAssociatedObject(local_130,&DAT_028c9825);
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_boolValue_026ca540);
  uVar8 = local_130;
  if ((uVar9 & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar8,&DAT_028c9825,puVar10,1);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    local_168 = 2;
    local_169 = 0;
    if (local_138 != 0) {
      _objc_setAssociatedObject(local_130,&DAT_028c97f0,local_138,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    local_198 = dVar15;
    local_190 = param_2;
    local_188 = param_3;
    local_180 = param_4;
    _CGRectGetWidth();
    local_178 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    local_1c0 = dVar15;
    local_1b8 = param_2;
    local_1b0 = param_3;
    local_1a8 = param_4;
    _CGRectGetHeight();
    local_1a0 = dVar15;
    if ((local_178 <= 0.0) || (dVar15 <= 0.0)) {
      local_168 = 0;
      local_140 = 1;
    }
    else {
      uVar8 = local_130;
      FUN_002c0210();
      if ((uVar8 & 1) == 0) {
        uVar8 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
        if (((uVar8 & 1) == 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_alpha_026ca4d8), param_2 = dVar2,
           dVar15 <= dVar2)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_130,PTR_s_setAlpha__026ca860);
        }
        puVar10 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar10);
        local_1c1 = (byte)puVar11;
        uStack_1e8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
        local_1f0 = *(double *)PTR__CGRectZero_025782f0;
        uStack_1d8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
        dVar16 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        local_1e0 = dVar16;
        FUN_0029ef90(local_130,local_1c1 & 1,&local_1f0);
        local_210 = dVar16;
        dStack_208 = param_2;
        local_200 = param_3;
        dStack_1f8 = param_4;
        FUN_002b3e70(local_130);
        dVar17 = ABS(param_4);
        dVar15 = 0.5;
        if (0.5 < dVar17) {
          local_210 = local_210 + param_4;
          dVar17 = local_1f0 + param_4;
          dVar15 = param_4;
          local_1f0 = dVar17;
        }
        local_bd8 = local_130;
        local_218 = param_4;
        FUN_002acd8c(local_130,0x24f754);
        _objc_retainAutoreleasedReturnValue();
        local_231 = false;
        bVar5 = local_bd8 == 0;
        local_220 = local_bd8;
        if (bVar5) {
          local_bd8 = 0;
        }
        else {
          FUN_002acd8c(local_bd8,0x24f749);
          _objc_retainAutoreleasedReturnValue();
          local_230 = local_bd8;
        }
        local_231 = !bVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_228 = local_bd8;
        if ((local_231 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_230);
        }
        _memset(&local_2b8,0,0x80);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
        local_2d8 = dVar17;
        local_2d0 = dVar15;
        local_2c8 = param_2;
        local_2c0 = dVar16;
        _CGRectGetMinX();
        uVar8 = local_130;
        local_2b8 = dVar17;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
        local_2f8 = dVar17;
        local_2f0 = dVar15;
        local_2e8 = param_2;
        local_2e0 = dVar16;
        _CGRectGetMinY(dVar17,dVar15,param_2,dVar16);
        local_2a8 = local_178;
        local_2a0 = local_1a0;
        local_2b0 = dVar17;
        _CGRectGetMinX(local_210,dStack_208,local_200,dStack_1f8);
        _CGRectGetMinY(local_210,dStack_208,local_200,dStack_1f8);
        _CGRectGetWidth(local_210,dStack_208,local_200,dStack_1f8);
        _CGRectGetHeight(local_210,dStack_208,local_200,dStack_1f8);
        _CGRectGetMinX(local_1f0,uStack_1e8,local_1e0,uStack_1d8);
        _CGRectGetMinY(local_1f0,uStack_1e8,local_1e0,uStack_1d8);
        _CGRectGetWidth(local_1f0,uStack_1e8,local_1e0,uStack_1d8);
        uVar18 = uStack_1e8;
        dVar16 = local_1e0;
        uVar19 = uStack_1d8;
        _CGRectGetHeight();
        local_258 = local_218;
        dVar15 = local_218;
        if (local_138 == 0) {
          local_c80 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_selectedIndex_0269e580);
          local_c80 = uVar8;
        }
        local_250 = local_c80;
        FUN_002c05bc();
        uVar9 = local_130;
        local_248 = uVar8;
        FUN_002b13fc();
        local_240 = (undefined1)uVar9;
        local_23f = local_1c1 & 1;
        uVar8 = local_130;
        FUN_002b83f8();
        local_23e = (undefined1)uVar8;
        uVar8 = local_130;
        FUN_002b517c();
        local_23d = (undefined1)uVar8;
        uVar8 = local_130;
        _objc_getAssociatedObject(local_130,&DAT_028c9610);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_23c = (byte)uVar9;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        uVar8 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
        local_23b = (undefined1)uVar8;
        uVar8 = local_130;
        _objc_getAssociatedObject(local_130,&DAT_028c9821);
        _objc_retainAutoreleasedReturnValue();
        local_409 = false;
        local_408[0] = uVar8;
        if ((((local_139 & 1) == 0) && (local_409 = false, (local_23c & 1) == 0)) &&
           (local_409 = false, local_228 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
          local_409 = uVar8 == 0x80;
        }
        if ((bool)local_409 == false) {
LAB_002bce44:
          local_168 = 2;
          FUN_002b7184(local_130,&cf_apply_begin);
          FUN_002c2590(local_130);
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setClipsToBounds__026ca8c8,0);
          uVar8 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          FUN_002c2678(local_130);
          uVar8 = local_130;
          FUN_002ad040(local_130,1);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_130;
          local_888 = uVar8;
          FUN_002acd8c(local_130,0x24f749);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_130;
          local_890 = uVar9;
          FUN_002acd8c(local_130,0x24f74a);
          _objc_retainAutoreleasedReturnValue();
          local_8a1 = 0;
          bVar5 = false;
          uVar1 = local_890 != 0;
          local_898 = uVar8;
          if ((bool)uVar1) {
            uVar8 = local_890;
            (*(code *)PTR__objc_msgSend_02578628)(local_890,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar5 = uVar8 != local_888;
            local_8a1 = uVar1;
            local_8a0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar1 = local_8a1;
          }
          local_8a1 = uVar1;
          if (bVar5) {
            (*(code *)PTR__objc_msgSend_02578628)(local_888,PTR_s_addSubview__026ca4c0,local_890);
          }
          local_8b1 = 0;
          bVar5 = false;
          uVar1 = local_898 != 0;
          if ((bool)uVar1) {
            uVar8 = local_898;
            (*(code *)PTR__objc_msgSend_02578628)(local_898,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar5 = uVar8 != local_888;
            local_8b1 = uVar1;
            local_8b0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar1 = local_8b1;
          }
          local_8b1 = uVar1;
          if (bVar5) {
            (*(code *)PTR__objc_msgSend_02578628)(local_888,PTR_s_addSubview__026ca4c0,local_898);
          }
          uVar8 = local_888;
          FUN_002acd8c(local_888,0x24f749);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_888;
          local_8c0 = uVar8;
          FUN_002acd8c(local_888,0x24f74a);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_130;
          local_8c8 = uVar9;
          FUN_0029ded4(local_130,0x24f74b);
          _objc_retainAutoreleasedReturnValue();
          local_8d9 = 0;
          bVar5 = false;
          uVar1 = uVar8 != 0;
          local_8d0 = uVar8;
          if ((bool)uVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar5 = uVar8 != local_130;
            local_8d9 = uVar1;
            local_8d8 = uVar8;
            (*(code *)PTR__objc_release_02578630)();
            uVar1 = local_8d9;
          }
          local_8d9 = uVar1;
          if (bVar5) {
            uVar8 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_8d0);
          }
          if (local_8c0 == 0) {
            FUN_002c2b78();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_8c0;
            local_8c0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            uVar8 = local_888;
            (*(code *)PTR__objc_msgSend_02578628)(local_888,PTR_s_addSubview__026ca4c0,local_8c0);
          }
          if (local_8c8 == 0) {
            FUN_002aef14();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_8c8;
            local_8c8 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            uVar8 = local_888;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_888,PTR_s_insertSubview_aboveSubview__026ca740,local_8c8,local_8c0);
          }
          if (((local_1c1 & 1) == 0) || (local_8d0 != 0)) {
            if (((local_1c1 & 1) == 0) && (local_8d0 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_8d0,PTR_s_removeFromSuperview_026ca800);
              _objc_storeStrong(&local_8d0,0);
            }
          }
          else {
            FUN_002c31f4();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_8d0;
            local_8d0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_8d0);
          }
          FUN_002b7184(local_130,&cf_apply_afterEnsureViews);
          if (0.5 < ABS(local_218)) {
            FUN_002c3da8(local_130,&cf_apply_compensation);
          }
          FUN_002c42c8(local_210,dStack_208,local_200,dStack_1f8,local_1f0,uStack_1e8,local_1e0,
                       uStack_1d8,local_130,local_888);
          FUN_002c48dc(local_210,dStack_208,local_200,dStack_1f8,local_130,local_8c0);
          dVar15 = local_210;
          FUN_002c17c4(local_210,dStack_208,local_200,dStack_1f8,local_130);
          uVar8 = local_130;
          _objc_getAssociatedObject(local_130,&DAT_028c9610);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar9 & 1) == 0) {
            dVar15 = local_210;
            FUN_002a1f00(local_210,dStack_208,local_200,dStack_1f8,local_130,local_139 & 1);
          }
          if (local_8d0 != 0) {
            dVar15 = local_1f0;
            FUN_002c594c(local_1f0,uStack_1e8,local_1e0,uStack_1d8,local_130,local_8d0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_bringSubviewToFront__026ca550,local_8d0);
          }
          uVar8 = local_8c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_8c8,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          _memset(auStack_9e8,0,0x40);
          uVar8 = local_130;
          FUN_002ae960(local_130,&cf_MMTabBarItemView);
          _objc_retainAutoreleasedReturnValue();
          local_1000 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1000 != 0) {
            lVar14 = *local_9d8;
            local_1008 = 0;
            do {
              do {
                if (*local_9d8 - lVar14 != 0) {
                  _objc_enumerationMutation(*local_9d8 - lVar14,uVar8);
                }
                local_9a8 = *(undefined8 *)(local_9e0 + local_1008 * 8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_bringSubviewToFront__026ca550,local_9a8);
                local_1008 = local_1008 + 1;
              } while (local_1008 < local_1000);
              local_1000 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_9e8,
                         auStack_a8,0x10);
              local_1008 = 0;
            } while (local_1000 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar8);
          _memset(auStack_a30,0,0x40);
          uVar8 = local_130;
          FUN_002ae960(local_130,&cf_UITabBarButton);
          _objc_retainAutoreleasedReturnValue();
          local_1048 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1048 != 0) {
            lVar14 = *local_a20;
            local_1050 = 0;
            do {
              do {
                if (*local_a20 - lVar14 != 0) {
                  _objc_enumerationMutation(*local_a20 - lVar14,uVar8);
                }
                local_9f0 = *(undefined8 *)(local_a28 + local_1050 * 8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_bringSubviewToFront__026ca550,local_9f0);
                local_1050 = local_1050 + 1;
              } while (local_1050 < local_1048);
              local_1048 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_a30,
                         auStack_128,0x10);
              local_1050 = 0;
            } while (local_1048 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if (local_8d0 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_bringSubviewToFront__026ca550,local_8d0);
          }
          FUN_002b7184(local_130,&cf_apply_end);
          FUN_002b533c(local_130);
          dVar15 = ABS(dVar15);
          local_a39 = dVar15 <= 1.0;
          uVar8 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
          if ((((uVar8 & 1) == 0) && ((local_a39 & 1) == 0)) &&
             (uVar8 = local_130, FUN_002b517c(), (uVar8 & 1) == 0)) {
            FUN_002c3da8(local_130,&cf_apply_end_visualTransition);
          }
          uVar8 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
          if (((((uVar8 & 1) == 0) && ((local_a39 & 1) != 0)) &&
              (uVar8 = local_130, FUN_002c73bc(), (uVar8 & 1) == 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_alpha_026ca4d8), dVar2 < dVar15)
             ) {
            FUN_002b6e10(local_130,&cf_apply_end_visible,1);
          }
          puVar10 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,
                     &local_2b8,0x80);
          _objc_retainAutoreleasedReturnValue();
          local_a48 = puVar10;
          _objc_setAssociatedObject(local_130,&DAT_028c9821,puVar10,1);
          uVar8 = local_130;
          _objc_getAssociatedObject(local_130,&DAT_028c9826);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          _objc_setAssociatedObject(local_130,&DAT_028c9826,0,1);
          _objc_storeStrong(uVar9,&local_a48);
          _objc_storeStrong(&local_8d0,0);
          _objc_storeStrong(&local_8c8,0);
          _objc_storeStrong(&local_8c0,0);
          _objc_storeStrong(&local_898,0);
          _objc_storeStrong(&local_890,0);
          _objc_storeStrong(&local_888,0);
          local_140 = 0;
        }
        else {
          _memset(auStack_490,0,0x80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_408[0],PTR_s_getBytes_length__026a1aa0,auStack_490,0x80);
          pdVar12 = &local_2b8;
          FUN_002c0a90(pdVar12,auStack_490);
          local_491 = (byte)pdVar12;
          local_ce8 = 1;
          if (((ulong)pdVar12 & 1) == 0) {
            pdVar12 = &local_2b8;
            FUN_002c0e74(pdVar12,auStack_490);
            local_ce8 = (uint)pdVar12;
          }
          local_492 = (byte)local_ce8 & 1;
          if ((local_ce8 & 1) == 0) goto LAB_002bce44;
          uVar8 = local_228;
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_frame_026ca640);
          bVar6 = (byte)uVar8;
          local_4b8 = dVar15;
          _CGRectEqualToRect();
          local_493 = (bVar6 ^ 1) & 1;
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
          local_508 = dVar15;
          _CGRectGetWidth(dVar15,uVar18,dVar16,uVar19);
          dVar16 = local_210;
          uVar18 = local_200;
          dVar17 = dStack_1f8;
          _CGRectGetWidth(local_210,dStack_208);
          dVar15 = ABS(dVar15 - dVar16);
          uVar19 = 0x3fe0000000000000;
          local_4e1 = true;
          if (dVar15 <= 0.5) {
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
            local_550 = dVar15;
            local_548 = uVar19;
            _CGRectGetHeight(dVar15,uVar19,uVar18,dVar17);
            dVar16 = local_210;
            uVar18 = local_200;
            dVar17 = dStack_1f8;
            _CGRectGetHeight(local_210,dStack_208);
            dVar15 = ABS(dVar15 - dVar16);
            local_4e1 = 0.5 < dVar15;
          }
          uVar19 = 0x3fe0000000000000;
          uVar8 = local_130;
          FUN_0029ded4(local_130,0x24f74b);
          _objc_retainAutoreleasedReturnValue();
          local_d8c = 0;
          local_578[0] = uVar8;
          if (((local_1c1 & 1) != 0) && (local_d8c = 0, uVar8 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_frame_026ca640);
            local_d8c = (byte)uVar8;
            local_5a0 = dVar15;
            local_598 = uVar19;
            _CGRectEqualToRect();
            local_d8c = local_d8c ^ 1;
          }
          local_579 = local_d8c & 1;
          local_5c1 = false;
          if (((local_1c1 & 1) != 0) && (local_5c1 = true, local_578[0] != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_578[0],PTR_s_bounds_026ca548);
            local_5e8 = dVar15;
            local_5e0 = uVar19;
            _CGRectGetWidth(dVar15,uVar19,uVar18,dVar17);
            dVar16 = local_1f0;
            dVar17 = local_1e0;
            uVar18 = uStack_1d8;
            _CGRectGetWidth(local_1f0,uStack_1e8);
            dVar15 = ABS(dVar15 - dVar16);
            uVar19 = 0x3fe0000000000000;
            local_5c1 = true;
            if (dVar15 <= 0.5) {
              (*(code *)PTR__objc_msgSend_02578628)(local_578[0],PTR_s_bounds_026ca548);
              local_630 = dVar15;
              local_628 = uVar19;
              _CGRectGetHeight(dVar15,uVar19,dVar17,uVar18);
              dVar16 = local_1f0;
              _CGRectGetHeight(local_1f0,uStack_1e8,local_1e0,uStack_1d8);
              local_5c1 = 0.5 < ABS(dVar15 - dVar16);
            }
          }
          uVar8 = local_130;
          dVar15 = local_210;
          dVar16 = dStack_208;
          uVar18 = local_200;
          dVar17 = dStack_1f8;
          FUN_002c101c();
          local_651 = (byte)uVar8;
          if (((((local_491 & 1) == 0) || ((local_493 & 1) != 0)) || ((local_579 & 1) != 0)) ||
             ((uVar8 & 1) != 0)) {
            if (((local_4e1 & 1) == 0) && ((local_5c1 & 1) == 0)) {
              local_168 = 1;
              if (local_220 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar15,dVar16,uVar18,dVar17,local_220,PTR_s_setFrame__026ca960);
              }
              dStack_6e8 = dStack_208;
              local_6f0 = local_210;
              dStack_6d8 = dStack_1f8;
              local_6e0 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_210,dStack_208,local_200,dStack_1f8,local_228,
                         PTR_s_setFrame__026ca960);
              local_721 = false;
              bVar5 = local_220 == 0;
              if (bVar5) {
                local_e90 = 0;
              }
              else {
                local_e90 = local_220;
                FUN_002acd8c(local_220,0x24f74a);
                _objc_retainAutoreleasedReturnValue();
                local_720 = local_e90;
              }
              local_721 = !bVar5;
              (*(code *)PTR__objc_retain_02578638)();
              local_718[0] = local_e90;
              if ((local_721 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_720);
              }
              if (((local_1c1 & 1) != 0) && (local_578[0] != 0)) {
                uStack_748 = uStack_1e8;
                local_750 = local_1f0;
                uStack_738 = uStack_1d8;
                local_740 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,uStack_1e8,local_1e0,uStack_1d8,local_578[0],
                           PTR_s_setFrame__026ca960);
              }
              local_781 = false;
              bVar5 = local_220 == 0;
              if (bVar5) {
                local_ea8 = 0;
              }
              else {
                local_ea8 = local_220;
                FUN_002acd8c(local_220,0x24f757);
                _objc_retainAutoreleasedReturnValue();
                local_780 = local_ea8;
              }
              local_781 = !bVar5;
              uVar8 = local_ea8;
              (*(code *)PTR__objc_retain_02578638)();
              uVar7 = (uint)uVar8;
              local_778[0] = local_ea8;
              if ((local_781 & 1U) != 0) {
                uVar8 = local_780;
                (*(code *)PTR__objc_release_02578630)();
                uVar7 = (uint)uVar8;
              }
              if ((local_778[0] != 0) &&
                 (_CGRectIsEmpty(local_1f0,uStack_1e8,local_1e0,uStack_1d8), (uVar7 & 1) == 0)) {
                dVar15 = local_210;
                dVar16 = dStack_208;
                uVar18 = local_200;
                dVar17 = dStack_1f8;
                _CGRectUnion();
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar15,dVar16,uVar18,dVar17,local_778[0],PTR_s_setFrame__026ca960);
              }
              if (((local_651 & 1) != 0) || ((local_493 & 1) != 0)) {
                FUN_002c17c4(local_210,dStack_208,local_200,dStack_1f8,local_130);
              }
              if ((local_718[0] != 0) &&
                 ((((local_651 & 1) != 0 || ((local_493 & 1) != 0)) || ((local_491 & 1) == 0)))) {
                FUN_002a1f00(local_210,dStack_208,local_200,dStack_1f8,local_130,0);
              }
              puVar10 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,
                         &local_2b8,0x80);
              _objc_retainAutoreleasedReturnValue();
              local_878[0] = puVar10;
              _objc_setAssociatedObject(local_130,&DAT_028c9821,puVar10,1);
              uVar8 = local_130;
              _objc_getAssociatedObject(local_130,&DAT_028c9826);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_130;
              puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_880 = uVar9 + 1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithUnsignedInteger__0269e4d0,uVar9 + 1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar8,&DAT_028c9826,puVar10,1);
              (*(code *)PTR__objc_release_02578630)(puVar10);
              local_140 = 1;
              _objc_storeStrong(local_878);
              _objc_storeStrong(local_778,0);
              _objc_storeStrong(local_718,0);
            }
            else {
              local_140 = 0;
            }
          }
          else {
            local_168 = 0;
            uVar8 = local_130;
            _objc_getAssociatedObject(local_130,&DAT_028c9826);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_130;
            puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_688 = uVar9 + 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,uVar9 + 1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar8,&DAT_028c9826,puVar10,1);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            local_140 = 1;
          }
          _objc_storeStrong(local_578,0);
          if (local_140 == 0) goto LAB_002bce44;
        }
        _objc_storeStrong(local_408);
        _objc_storeStrong(&local_228,0);
        _objc_storeStrong(&local_220,0);
        if (local_140 == 0) {
          local_140 = 0;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setAlpha__026ca860);
        FUN_002b7768(local_130,1,&cf_foreignHorizontalTransition);
        FUN_002b7184(local_130,&cf_foreignHorizontalTransition);
        FUN_002bf3a4(local_130);
        local_168 = 0;
        local_140 = 1;
      }
    }
    iVar3 = local_140;
    _objc_setAssociatedObject(local_130,&DAT_028c9825,0,1);
    FUN_002b8b18(local_130);
    _CFAbsoluteTimeGetCurrent();
    if ((local_169 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x2bdf28);
      (*pcVar4)();
    }
    if (iVar3 == 0) {
      local_140 = 0;
      iVar13 = 0;
    }
    else {
      iVar13 = iVar3 + -2;
      local_140 = iVar3;
      if (iVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2be008);
        (*pcVar4)();
      }
    }
  }
  else {
    iVar13 = 1;
    local_140 = 1;
  }
  _objc_storeStrong(iVar13,&local_160,0);
LAB_002bdf68:
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

