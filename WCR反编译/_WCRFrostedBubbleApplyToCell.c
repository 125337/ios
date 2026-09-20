// _WCRFrostedBubbleApplyToCell @ 00f80f58

/* WARNING: Removing unreachable block (ram,0x00f82d58) */
/* WARNING: Removing unreachable block (ram,0x00f82d60) */
/* WARNING: Removing unreachable block (ram,0x00f82d64) */
/* WARNING: Removing unreachable block (ram,0x00f82d68) */
/* WARNING: Removing unreachable block (ram,0x00f82dc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRFrostedBubbleApplyToCell
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_6f8;
  double local_6f0;
  ulong local_6d0;
  undefined *local_6b0;
  undefined *local_688;
  uint local_53c;
  undefined *local_530;
  ulong local_498;
  undefined *local_3f8;
  undefined *local_3e8;
  ulong local_3c0;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  byte local_2b1;
  undefined *local_2b0;
  undefined *local_2a8;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined *local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  byte local_199;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150;
  ulong local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  undefined *local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar2 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  dVar13 = DAT_02323d38;
  _objc_storeStrong(&local_40,param_5);
  puVar6 = local_40;
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_44 = 1;
  }
  else {
    _WCRFrostedBubbleEnabled();
    if ((((ulong)puVar6 & 1) == 0) || (puVar6 = local_40, FUN_00f82f04(), ((ulong)puVar6 & 1) != 0))
    {
      FUN_00f8322c(local_40);
      local_44 = 1;
    }
    else {
      puVar6 = local_40;
      FUN_00f833a4();
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      bVar3 = true;
      dVar12 = dVar13;
      dVar15 = param_2;
      dVar16 = param_3;
      local_50 = puVar6;
      if (puVar6 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        bVar3 = true;
        dVar12 = dVar13;
        dVar15 = param_2;
        dVar16 = param_3;
        local_58 = puVar6;
        if (puVar6 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
          dVar14 = 1.0;
          bVar3 = true;
          dVar12 = param_3;
          dVar15 = dVar14;
          dVar16 = param_3;
          local_80 = dVar13;
          local_78 = param_2;
          local_70 = param_3;
          local_68 = param_4;
          if (1.0 < param_3) {
            dVar12 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
            dVar15 = 1.0;
            bVar3 = dVar12 <= 1.0;
            param_4 = dVar12;
            local_a0 = param_3;
            local_98 = dVar14;
            local_90 = dVar16;
            local_88 = dVar12;
          }
        }
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if (bVar3) {
        FUN_00f8322c(local_40);
        local_44 = 1;
      }
      else {
        FUN_00f835c4(local_50);
        puVar6 = local_40;
        FUN_00f83728();
        local_a1 = (byte)puVar6;
        local_a2 = 1;
        local_a3 = 1;
        FUN_00f83858(local_40,&local_a2,&local_a3);
        FUN_00f839c4(local_40,local_50);
        puVar6 = local_50;
        local_c8 = dVar12;
        local_c0 = dVar15;
        local_b8 = dVar16;
        local_b0 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        dVar13 = local_c8;
        dVar15 = local_c0;
        dVar14 = local_b8;
        dVar19 = local_b0;
        local_d0 = puVar6;
        FUN_00f8457c(local_a1 & 1,local_a2 & 1,local_a3 & 1);
        local_f0 = dVar13;
        dStack_e8 = dVar15;
        local_e0 = dVar14;
        dStack_d8 = dVar19;
        FUN_00f846a4(local_40,local_d0,local_a2 & 1,local_a3 & 1);
        dVar12 = local_c8;
        dVar16 = local_c0;
        dVar18 = local_b8;
        dVar20 = local_b0;
        local_110 = dVar13;
        dStack_108 = dVar15;
        local_100 = dVar14;
        dStack_f8 = dVar19;
        local_f0 = dVar13;
        dStack_e8 = dVar15;
        local_e0 = dVar14;
        dStack_d8 = dVar19;
        _CGRectGetMaxY();
        dVar13 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
        local_130 = dVar13;
        local_128 = dVar16;
        local_120 = dVar18;
        local_118 = dVar20;
        _CGRectGetMaxY(dVar13,dVar16,dVar18,dVar20);
        if (dVar13 + 0.5 < dVar12) {
          dVar13 = local_c8;
          _CGRectGetMaxY(local_c8,local_c0,local_b8,local_b0);
          local_138 = 3.0;
          if ((local_a3 & 1) == 0) {
            local_138 = 0.0;
          }
          local_138 = dVar13 + local_138;
          dVar12 = local_f0;
          _CGRectGetMaxY(local_a3 & 1,local_f0,dStack_e8,local_e0,dStack_d8);
          if (dVar12 < local_138) {
            dVar12 = local_138 - dStack_e8;
            dStack_d8 = dVar12;
          }
        }
        bVar1 = 0;
        if ((local_a2 & 1) != 0) {
          bVar1 = local_a3;
        }
        FUN_00f84914(local_40,(bVar1 ^ 1) & 1);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        uVar7 = (ulong)(local_a1 & 1);
        local_140 = dVar12;
        FUN_00f84b54();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = (ulong)(local_a1 & 1);
        dVar13 = local_f0;
        dVar12 = dStack_e8;
        dVar15 = local_e0;
        dVar16 = dStack_d8;
        local_148 = uVar7;
        FUN_00f84f9c(uVar8,local_a2 & 1,local_a3 & 1,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_40;
        local_150 = uVar8;
        _objc_getAssociatedObject(local_40,&DAT_028e2e78);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_40;
        local_158 = puVar6;
        _objc_getAssociatedObject(local_40,&DAT_028e2e79);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_d0;
        local_160 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_530 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_179 = 0;
        local_168 = local_530;
        if (local_530 == (undefined *)0x7fffffffffffffff) {
          local_530 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_179 = 1;
          local_178 = local_530;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        else {
          local_530 = local_530 + 1;
        }
        if ((local_179 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        local_170 = local_530;
        puVar5 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_150);
        puVar6 = local_160;
        local_189 = 0;
        local_199 = 0;
        local_53c = 0;
        if (((ulong)puVar5 & 1) != 0) {
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          local_53c = 0;
          if (((ulong)puVar6 & 1) != 0) {
            puVar6 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_189 = 1;
            local_53c = 0;
            local_188 = puVar6;
            if (puVar6 == local_d0) {
              puVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_199 = 1;
              local_198 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_53c = 0;
              if (puVar6 == local_170) {
                puVar6 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_frame_026ca640);
                local_53c = (uint)puVar6;
                local_1c0 = dVar13;
                local_1b8 = dVar12;
                local_1b0 = dVar15;
                local_1a8 = dVar16;
                _CGRectEqualToRect(dVar13,dVar12,dVar15,dVar16,local_f0,dStack_e8,local_e0,dStack_d8
                                  );
              }
            }
          }
        }
        if ((local_199 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_198);
        }
        if ((local_189 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        puVar6 = local_160;
        if ((local_53c & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)puVar6 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
            _objc_alloc();
            dVar13 = local_f0;
            dVar12 = dStack_e8;
            dVar15 = local_e0;
            dVar16 = dStack_d8;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar6 = local_160;
            local_160 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_setUserInteractionEnabled__026caad8,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setOpaque__026ca9f8,0);
            puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_setTag__026caa80,_kWCRFrostedBubbleHostTag);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setAutoresizingMask__026ca878,0);
            puVar6 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1c8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_setUserInteractionEnabled__026caad8,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setAutoresizingMask__026ca878);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addSubview__026ca4c0,local_1c8);
            puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
            local_1f0 = dVar13;
            local_1e8 = dVar12;
            local_1e0 = dVar15;
            local_1d8 = dVar16;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_initWithFrame__026ca6e8);
            local_1d0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_setUserInteractionEnabled__026caad8,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d0,PTR_s_setAutoresizingMask__026ca878,0x12);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addSubview__026ca4c0,local_1d0);
            puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
            local_218 = dVar13;
            local_210 = dVar12;
            local_208 = dVar15;
            local_200 = dVar16;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar13,dVar12,dVar15,dVar16,puVar6,PTR_s_initWithFrame__026ca6e8);
            local_1f8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_setUserInteractionEnabled__026caad8,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_setAutoresizingMask__026ca878,0x12);
            puVar6 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
            local_220 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,DAT_02323c70,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
            puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
            local_38 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar6 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
            puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_30 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_setColors__026ca8d0);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            uVar17 = 0;
            uVar11 = 0x3fd3333333333333;
            FUN_00f853d8();
            local_230 = uVar11;
            uStack_228 = uVar17;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar11,uVar17,local_220,PTR_s_setStartPoint__026caa70);
            uVar17 = 0x3fd3333333333333;
            uVar11 = 0x3fe6666666666666;
            FUN_00f853d8();
            local_250 = uVar17;
            uStack_248 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar17,uVar11,local_220,PTR_s_setEndPoint__026ca940);
            puVar6 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addSubview__026ca4c0,local_1f8);
            _objc_setAssociatedObject(local_40,&DAT_028e2e79,local_160);
            _objc_setAssociatedObject(local_40,&DAT_028e2e7a,local_1c8,1);
            _objc_setAssociatedObject(local_40,&DAT_028e2e7b,local_1d0,1);
            _objc_setAssociatedObject(local_40,&DAT_028e2e7c,local_1f8,1);
            _objc_storeStrong(&local_220,0);
            _objc_storeStrong(&local_1f8,0);
            _objc_storeStrong(&local_1d0,0);
            _objc_storeStrong(&local_1c8,0);
          }
          dStack_278 = dStack_e8;
          local_280 = local_f0;
          dStack_268 = dStack_d8;
          local_270 = local_e0;
          dVar13 = local_f0;
          local_6f0 = dStack_e8;
          dVar12 = local_e0;
          dVar15 = dStack_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setFrame__026ca960);
          puVar6 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_160;
          local_2a8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = puVar6 != local_d0;
          bVar4 = local_2a8 != local_168 + 1;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if (bVar3 || bVar4) {
            puVar5 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_d0;
            (*(code *)PTR__objc_release_02578630)();
            if (puVar5 == puVar6) {
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_removeFromSuperview_026ca800);
              puVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_168 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_2b1 = 0;
              if (local_168 == (undefined *)0x7fffffffffffffff) {
                local_688 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                local_2b1 = 1;
                local_2b0 = local_688;
                (*(code *)PTR__objc_msgSend_02578628)();
              }
              else {
                local_688 = local_168 + 1;
              }
              local_170 = local_688;
              if ((local_2b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2b0);
              }
            }
            puVar5 = local_d0;
            puVar6 = local_160;
            local_2c0 = local_170;
            puVar9 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar9);
            local_6b0 = puVar10;
            if (local_2c0 < puVar10) {
              local_6b0 = local_2c0;
            }
            local_2d0 = local_6b0;
            local_2c8 = puVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_insertSubview_atIndex__026ca748,puVar6,local_6b0);
          }
          puVar6 = local_40;
          _objc_getAssociatedObject(local_40,&DAT_028e2e7a);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_40;
          local_2d8 = puVar6;
          _objc_getAssociatedObject(local_40,&DAT_028e2e7b);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_40;
          local_2e0 = puVar5;
          _objc_getAssociatedObject(local_40,&DAT_028e2e7c);
          _objc_retainAutoreleasedReturnValue();
          local_2e8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_setFrame__026ca960);
          bVar1 = 0;
          if ((local_a2 & 1) != 0) {
            bVar1 = local_a3;
          }
          bVar3 = (bVar1 & 1) == 0;
          if (bVar3) {
            local_6d0 = (ulong)(local_a1 & 1);
            FUN_00f85404();
            _objc_retainAutoreleasedReturnValue();
            local_3c0 = local_6d0;
          }
          else {
            local_6d0 = local_148;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2e0,PTR_s_setBackgroundColor__026ca888,local_6d0);
          if (bVar3) {
            (*(code *)PTR__objc_release_02578630)(local_3c0);
          }
          if ((bVar1 & 1) == 0) {
            local_6f8 = 0.0;
          }
          else {
            puVar6 = PTR__OBJC_CLASS___UIScreen_026cdf70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_6f0 = dVar13;
            if (dVar13 < 1.0) {
              local_6f0 = 1.0;
            }
            local_6f8 = 1.0 / local_6f0;
          }
          puVar6 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          bVar3 = (bVar1 & 1) == 0;
          if (bVar3) {
            local_3f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_CGColor_026ca470);
          }
          else {
            local_6f8 = 1.0;
            local_3e8 = PTR__OBJC_CLASS___UIColor_026cdf78;
            local_6f0 = DAT_02323f10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_CGColor_026ca470);
          }
          puVar6 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if (bVar3) {
            (*(code *)PTR__objc_release_02578630)(local_3f8);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_3e8);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
          FUN_00f854b4();
          FUN_00f85564(local_6f8,local_2d8,local_a2 & 1,local_a3 & 1);
          FUN_00f85564(local_6f8,local_2e0,local_a2 & 1,local_a3 & 1);
          dVar13 = local_6f8;
          FUN_00f85564(local_2e8,local_a2 & 1,local_a3 & 1);
          puVar6 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if (puVar9 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_bounds_026ca548);
            puVar6 = local_2e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(dVar13,local_6f0);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_setHidden__026ca970,bVar1 & 1 ^ 1);
          puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
          puVar5 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          dVar13 = DAT_02323c90;
          if ((bVar1 & 1) == 0) {
            dVar13 = 0.0;
          }
          puVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)((float)dVar13);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar11 = 0;
          uVar17 = 0x4000000000000000;
          FUN_00f85748();
          puVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar17);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar17 = 0;
          uVar11 = 0x4024000000000000;
          if ((bVar1 & 1) == 0) {
            uVar11 = uVar17;
          }
          puVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          local_498 = 0;
          if ((local_a2 & 1) != 0) {
            local_498 = 3;
          }
          if ((local_a3 & 1) != 0) {
            local_498 = local_498 | 0xc;
          }
          if ((bVar1 & 1) == 0) {
            puVar6 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
            dVar13 = local_6f8;
            FUN_00f85748();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar11,uVar17,dVar12,dVar15,local_6f8,dVar13,puVar6,
                       PTR_s_bezierPathWithRoundedRect_byRoun_026a0400,local_498);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGPath_026ca478);
            puVar5 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          puVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if ((bVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setEffect__026ca930,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setHidden__026ca970,1);
            FUN_00f85d44(local_2d8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setHidden__026ca970,0);
            if (dVar2 < local_140) {
              puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,0xb
                        );
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setEffect__026ca930);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            FUN_00f85774(local_140,local_2d8);
          }
          FUN_00f8510c(local_40);
          _objc_setAssociatedObject(local_40,&DAT_028e2e78,local_150,3);
          _objc_storeStrong(&local_2e8);
          _objc_storeStrong(&local_2e0,0);
          _objc_storeStrong(&local_2d8,0);
          local_44 = 0;
        }
        else {
          FUN_00f8510c(local_40);
          local_44 = 1;
        }
        _objc_storeStrong(&local_160);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

