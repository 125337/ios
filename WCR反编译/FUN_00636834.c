// FUN_00636834 @ 00636834

void FUN_00636834(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  byte local_50c;
  undefined1 *local_230;
  undefined1 *local_228;
  double local_220;
  undefined *local_200;
  char *local_1f8;
  double local_1f0;
  char *local_1d0;
  char *local_1c8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  byte local_f9;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined *local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  byte local_51;
  ulong local_50;
  char local_45;
  undefined1 *local_38;
  int local_2c;
  undefined *local_28;
  
  local_28 = (undefined1 *)0x0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == (undefined1 *)0x0) {
    iVar14 = 1;
    local_2c = 1;
    goto LAB_00637c4c;
  }
  puVar5 = local_28;
  _objc_msgSend(local_28,PTR_s_tag_026cab98);
  local_38 = puVar5;
  FUN_0063a200();
  if (((ulong)puVar5 & 1) == 0) {
    iVar14 = 1;
    local_2c = 1;
    goto LAB_00637c4c;
  }
  ppuVar6 = &PTR___tlv_bootstrap_028c7938;
  (*(code *)PTR___tlv_bootstrap_028c7938)();
  *ppuVar6 = *ppuVar6 + 1;
  if (1 < (long)*ppuVar6) {
    FUN_0063a27c(*ppuVar6 + -2);
    if (((ulong)ppuVar6 & 1) != 0) {
      FUN_0063a2f4(0x3ff0000000000000);
    }
    ppuVar6 = &PTR___tlv_bootstrap_028c7938;
    (*(code *)PTR___tlv_bootstrap_028c7938)();
    *ppuVar6 = *ppuVar6 + -1;
    iVar14 = 1;
    local_2c = 1;
    goto LAB_00637c4c;
  }
  local_45 = '\0';
  local_51 = 0;
  if (local_38 == (undefined1 *)((long)&section_00000748.addr + 3)) {
    local_50 = 0;
    puVar5 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f44e0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    _objc_msgSend(puVar5,PTR_s_boolValue_026ca540);
    local_51 = (byte)puVar5 & 1;
    _objc_storeStrong(&local_60,0);
LAB_00636a9c:
    puVar5 = local_28;
    _objc_msgSend(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_2c = 1;
    }
    else {
      puVar7 = local_38;
      FUN_0063a398();
      puVar8 = local_38;
      local_70 = puVar7;
      FUN_0063a3b8();
      puVar7 = local_68;
      local_78 = puVar8;
      _objc_msgSend(local_68,PTR_s_viewWithTag__026cabe0,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar7;
      _objc_msgSend(local_28,PTR_s_frame_026ca640);
      dVar15 = param_3;
      local_a8 = param_1;
      local_a0 = param_2;
      local_98 = param_3;
      local_90 = param_4;
      local_88 = param_3;
      _objc_msgSend(local_28,PTR_s_frame_026ca640);
      puVar5 = local_28;
      local_d0 = param_3;
      local_c8 = dVar15;
      local_c0 = param_2;
      local_b8 = param_1;
      local_b0 = param_1;
      _objc_msgSend(local_28,PTR_s_isHidden_026ca768);
      uVar4 = (uint)puVar5;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_28;
        _objc_msgSend(local_28,PTR_s_alpha_026ca4d8);
        uVar4 = (uint)puVar5;
        if (((param_1 <= DAT_02323cd0) || (local_88 <= 0.0)) || (local_b0 <= 0.0))
        goto LAB_00636c44;
        local_d8 = (undefined1 *)0x0;
        local_e0 = 0;
        local_e4 = 0;
        local_e8 = 0.0;
        local_ec = 0.0;
        local_f0 = 1.5;
        local_f8 = 0;
        local_108 = 0;
        local_110 = 0;
        uVar9 = local_50;
        FUN_0063a68c(local_50,local_28,local_51 & 1,&local_108,&local_e0,&local_e4,&local_e8,
                     &local_ec,&local_f0,&local_110);
        _objc_storeStrong(&local_d8,local_108);
        puVar10 = &local_f8;
        _objc_storeStrong(puVar10,local_110);
        uVar4 = (uint)puVar10;
        local_f9 = (byte)uVar9 & 1;
        if ((uVar9 & 1) == 0) {
          if (local_80 != (undefined1 *)0x0) {
            puVar7 = local_80;
            _objc_msgSend(local_80,PTR_s_removeFromSuperview_026ca800);
            uVar4 = (uint)puVar7;
          }
          FUN_0063a27c();
          if ((uVar4 & 1) != 0) {
            FUN_0063a2f4(DAT_02323d00);
          }
          FUN_0063a3d8(local_28,0,local_e4,&cf_config_disabled);
          local_2c = 1;
        }
        else {
          puVar11 = local_28;
          FUN_0063b408(local_28,local_e0,local_d8,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_d8;
          local_d8 = puVar11;
          _objc_release(puVar5);
          puVar5 = local_d8;
          FUN_0063b8ac();
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar5;
          _objc_msgSend(puVar5,PTR_s_length_0269cca0);
          if (puVar5 == (undefined1 *)0x0) {
            uVar4 = 0;
            if (local_80 != (undefined1 *)0x0) {
              puVar7 = local_80;
              _objc_msgSend(local_80,PTR_s_removeFromSuperview_026ca800);
              uVar4 = (uint)puVar7;
            }
            FUN_0063a27c();
            if ((uVar4 & 1) != 0) {
              FUN_0063a2f4(DAT_02323d00);
            }
            FUN_0063a3d8(local_28,0,local_e4,&cf_no_frame_path);
            local_2c = 1;
          }
          else {
            local_120 = local_88 * (double)local_f0;
            dVar20 = (double)local_f0;
            dVar16 = local_b0 * dVar20;
            local_128 = dVar16;
            _objc_msgSend(local_28,PTR_s_frame_026ca640);
            uVar22 = 0x3fe0000000000000;
            dVar21 = (double)local_e8;
            dVar17 = dVar16 + (local_88 - local_120) * 0.5 + dVar21;
            local_150 = dVar16;
            local_148 = dVar20;
            local_140 = dVar15;
            local_138 = param_3;
            local_130 = dVar17;
            _objc_msgSend(local_28,PTR_s_frame_026ca640);
            dVar18 = (dVar21 + (local_b0 - local_128) * 0.5) - (double)local_ec;
            dVar15 = local_130;
            dVar20 = local_120;
            dVar19 = local_128;
            local_178 = dVar17;
            local_170 = dVar21;
            local_168 = uVar22;
            local_160 = dVar16;
            local_158 = dVar18;
            FUN_00637d64();
            local_198 = dVar15;
            dStack_190 = dVar18;
            local_188 = dVar20;
            dStack_180 = dVar19;
            if (local_80 == (undefined1 *)0x0) {
              puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
              _objc_alloc();
              dVar15 = local_198;
              dVar20 = dStack_190;
              dVar19 = local_188;
              dVar16 = dStack_180;
              _objc_msgSend(puVar5,PTR_s_initWithFrame__026ca6e8);
              puVar7 = local_80;
              local_80 = puVar5;
              _objc_release(puVar7);
              _objc_msgSend(local_80,PTR_s_setTag__026caa80,local_70);
              _objc_msgSend(local_80,PTR_s_setUserInteractionEnabled__026caad8,0);
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              _objc_msgSend(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_80,PTR_s_setBackgroundColor__026ca888);
              _objc_release(puVar5);
              puVar7 = local_80;
              _objc_msgSend(local_80,PTR_s_setClipsToBounds__026ca8c8,1);
              uVar4 = (uint)puVar7;
              FUN_0063a27c();
              if ((uVar4 & 1) != 0) {
                dVar15 = 0.3;
                FUN_0063a2f4();
              }
              pcVar12 = "MMEmoticonView";
              _objc_getClass();
              local_1c8 = pcVar12;
              if (pcVar12 == (char *)0x0) {
                puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                _objc_alloc();
                _objc_msgSend(local_80,PTR_s_bounds_026ca548);
                local_220 = dVar15;
                _objc_msgSend(dVar15,dVar20,dVar19,dVar16,puVar5,PTR_s_initWithFrame__026ca6e8);
                local_200 = puVar5;
                _objc_msgSend(puVar5,PTR_s_setTag__026caa80,local_78);
                _objc_msgSend(local_200,PTR_s_setContentMode__026ca8e0,1);
                puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                _objc_msgSend(PTR__OBJC_CLASS___UIImage_026cdfd0,
                              PTR_s_imageWithContentsOfFile__0269e0e0,local_118);
                _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(local_200,PTR_s_setImage__026ca978);
                _objc_release(puVar5);
                _objc_msgSend(local_80,PTR_s_addSubview__026ca4c0,local_200);
                _objc_storeStrong(&local_200,0);
              }
              else {
                _objc_alloc();
                _objc_msgSend(local_80,PTR_s_bounds_026ca548);
                local_1f0 = dVar15;
                _objc_msgSend(dVar15,dVar20,dVar19,dVar16,pcVar12,PTR_s_initWithFrame__026ca6e8);
                local_1d0 = pcVar12;
                _objc_retain();
                local_1f8 = pcVar12;
                _objc_msgSend(pcVar12,PTR_s_setTag__026caa80,local_78);
                _objc_msgSend(local_80,PTR_s_addSubview__026ca4c0,local_1f8);
                FUN_006399d4(local_1d0,local_118);
                _objc_storeStrong(&local_1f8);
                _objc_storeStrong(&local_1d0,0);
              }
              _objc_setAssociatedObject(local_80,DAT_026f44f0,local_118,3);
              if (local_e4 == 0) {
                _objc_msgSend(local_68,PTR_s_addSubview__026ca4c0,local_80);
              }
              else {
                _objc_msgSend(local_68,PTR_s_insertSubview_belowSubview__0269e078,local_80,local_28)
                ;
              }
            }
            else {
              puVar7 = local_80;
              _objc_msgSend(local_80,PTR_s_viewWithTag__026cabe0,local_78);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = local_80;
              local_228 = puVar7;
              _objc_getAssociatedObject(local_80,DAT_026f44f0);
              _objc_retainAutoreleasedReturnValue();
              local_50c = 0;
              local_230 = puVar8;
              if (puVar8 != (undefined1 *)0x0) {
                _objc_msgSend(puVar8,PTR_s_isEqualToString__0269ccc8,local_118);
                local_50c = (byte)puVar8;
              }
              puVar7 = local_80;
              _objc_msgSend(local_80,PTR_s_frame_026ca640);
              bVar3 = (byte)puVar7;
              _CGRectEqualToRect(dVar19,dVar20,dVar18,dVar15,local_198,dStack_190,local_188,
                                 dStack_180);
              dVar15 = dStack_190;
              dVar20 = local_188;
              dVar19 = dStack_180;
              _objc_msgSend(local_198,local_80,PTR_s_setFrame__026ca960);
              _objc_msgSend(local_80,PTR_s_setHidden__026ca970,0);
              uVar22 = 0x3ff0000000000000;
              _objc_msgSend(local_80,PTR_s_setAlpha__026ca860);
              if (local_228 != (undefined1 *)0x0) {
                _objc_msgSend(local_80,PTR_s_bounds_026ca548);
                _objc_msgSend(uVar22,dVar15,dVar20,dVar19,local_228,PTR_s_setFrame__026ca960);
              }
              puVar7 = local_228;
              if (((local_50c & 1) == 0) && (local_228 != (undefined1 *)0x0)) {
                pcVar12 = "MMEmoticonView";
                _objc_getClass();
                _objc_msgSend(puVar7,PTR_s_isKindOfClass__0269cd68,pcVar12);
                puVar8 = local_228;
                if (((ulong)puVar7 & 1) == 0) {
                  puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  _objc_msgSend(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  _objc_msgSend(puVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
                  if (((ulong)puVar8 & 1) != 0) {
                    puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                    _objc_msgSend(PTR__OBJC_CLASS___UIImage_026cdfd0,
                                  PTR_s_imageWithContentsOfFile__0269e0e0,local_118);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_228,PTR_s_setImage__026ca978);
                    _objc_release(puVar5);
                  }
                }
                else {
                  FUN_006399d4(local_228,local_118);
                }
                _objc_setAssociatedObject(local_80,DAT_026f44f0,local_118,3);
              }
              if (local_e4 == 0) {
                puVar8 = local_68;
                _objc_msgSend(local_68,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar8;
                _objc_msgSend();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_80;
                _objc_release();
                _objc_release(puVar8);
                if (puVar13 != puVar7) {
                  puVar13 = local_68;
                  _objc_msgSend(local_68,PTR_s_bringSubviewToFront__026ca550,local_80);
                }
                uVar4 = (uint)puVar13;
              }
              else {
                puVar7 = local_68;
                _objc_msgSend(local_68,PTR_s_insertSubview_belowSubview__0269e078,local_80,local_28)
                ;
                uVar4 = (uint)puVar7;
              }
              if (((local_50c & 1) == 0) || ((bVar3 & 1) == 0)) {
                FUN_0063a27c();
                if ((uVar4 & 1) != 0) {
                  FUN_0063a2f4(0x3fe3333333333333);
                }
                local_2c = 0;
              }
              else {
                FUN_0063a27c();
                if ((uVar4 & 1) != 0) {
                  FUN_0063a2f4(0x3ff3333333333333);
                }
                FUN_0063a3d8(local_28,local_80,local_e4,&cf_keep);
                FUN_0063bb70(local_28,local_e4,&cf_keep);
                local_2c = 1;
              }
              _objc_storeStrong(&local_230);
              _objc_storeStrong(&local_228,0);
              if (local_2c != 0) goto LAB_00637b5c;
            }
            FUN_0063a3d8(local_28,local_80,local_e4,&cf_apply_final);
            FUN_0063bb70(local_28,local_e4,&cf_apply_final);
            local_2c = 0;
          }
LAB_00637b5c:
          _objc_storeStrong(&local_118,0);
        }
        _objc_storeStrong(&local_f8);
        _objc_storeStrong(&local_d8,0);
      }
      else {
LAB_00636c44:
        if (local_80 != (undefined1 *)0x0) {
          puVar7 = local_80;
          _objc_msgSend(local_80,PTR_s_removeFromSuperview_026ca800);
          uVar4 = (uint)puVar7;
        }
        FUN_0063a27c();
        if ((uVar4 & 1) != 0) {
          FUN_0063a2f4(0x3fe3333333333333);
        }
        FUN_0063a3d8(local_28,0,0xffffffff,&cf_hidden_remove);
        local_2c = 1;
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68,0);
    if (local_2c == 0) {
      local_2c = 0;
    }
  }
  else {
    if (local_38 == (undefined1 *)((long)&section_00000748.addr + 2)) {
      local_50 = 0;
LAB_00636a98:
      local_51 = 1;
      goto LAB_00636a9c;
    }
    if (local_38 == (undefined1 *)((long)&section_00000798.align + 3)) {
      local_50 = 1;
      goto LAB_00636a98;
    }
    if (local_38 == (undefined1 *)0x24f6de) {
      local_50 = 2;
      goto LAB_00636a98;
    }
    local_2c = 1;
  }
  iVar1 = local_2c;
  ppuVar6 = &PTR___tlv_bootstrap_028c7938;
  (*(code *)PTR___tlv_bootstrap_028c7938)();
  *ppuVar6 = *ppuVar6 + -1;
  if (local_45 == '\x01') {
    _objc_exception_rethrow(0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x637c00);
    (*pcVar2)();
  }
  if ((iVar1 == 0) || (iVar1 == 2)) {
    iVar14 = 0;
    local_2c = 0;
  }
  else {
    iVar14 = iVar1 + -3;
    local_2c = iVar1;
    if (iVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x637d64);
      (*pcVar2)();
    }
  }
LAB_00637c4c:
  _objc_storeStrong(iVar14,&local_28,0);
  return;
}

