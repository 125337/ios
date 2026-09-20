// FUN_0060cb94 @ 0060cb94

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0060cb94(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
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
  byte local_4ec;
  undefined1 *local_220;
  undefined1 *local_218;
  double local_210;
  undefined *local_1f0;
  char *local_1e8;
  double local_1e0;
  char *local_1c0;
  char *local_1b8;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  byte local_f1;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined *local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
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
    goto LAB_0060de50;
  }
  puVar5 = local_28;
  _objc_msgSend(local_28,PTR_s_tag_026cab98);
  local_38 = puVar5;
  FUN_00610744();
  if (((ulong)puVar5 & 1) == 0) {
    iVar14 = 1;
    local_2c = 1;
    goto LAB_0060de50;
  }
  ppuVar6 = &PTR___tlv_bootstrap_028c7920;
  (*(code *)PTR___tlv_bootstrap_028c7920)();
  *ppuVar6 = *ppuVar6 + 1;
  if (1 < (long)*ppuVar6) {
    FUN_006107a8(*ppuVar6 + -2);
    if (((ulong)ppuVar6 & 1) != 0) {
      FUN_00610820(0x3ff0000000000000);
    }
    ppuVar6 = &PTR___tlv_bootstrap_028c7920;
    (*(code *)PTR___tlv_bootstrap_028c7920)();
    *ppuVar6 = *ppuVar6 + -1;
    iVar14 = 1;
    local_2c = 1;
    goto LAB_0060de50;
  }
  local_45 = '\0';
  local_50 = 0;
  local_51 = 0;
  if (local_38 == section_000003d8.sectname + 0xf) {
    local_50 = 0;
    local_51 = 0;
LAB_0060cd60:
    puVar5 = local_28;
    _objc_msgSend(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_2c = 1;
    }
    else {
      puVar7 = local_38;
      FUN_006108c4();
      puVar8 = local_38;
      local_68 = puVar7;
      FUN_006108e4();
      puVar7 = local_60;
      local_70 = puVar8;
      _objc_msgSend(local_60,PTR_s_viewWithTag__026cabe0,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar7;
      _objc_msgSend(local_28,PTR_s_frame_026ca640);
      dVar15 = param_3;
      local_a0 = param_1;
      local_98 = param_2;
      local_90 = param_3;
      local_88 = param_4;
      local_80 = param_3;
      _objc_msgSend(local_28,PTR_s_frame_026ca640);
      puVar5 = local_28;
      local_c8 = param_3;
      local_c0 = dVar15;
      local_b8 = param_2;
      local_b0 = param_1;
      local_a8 = param_1;
      _objc_msgSend(local_28,PTR_s_isHidden_026ca768);
      uVar4 = (uint)puVar5;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_28;
        _objc_msgSend(local_28,PTR_s_alpha_026ca4d8);
        uVar4 = (uint)puVar5;
        if (((param_1 <= DAT_02323cd0) || (local_80 <= 0.0)) || (local_a8 <= 0.0))
        goto LAB_0060cf18;
        local_d0 = (undefined1 *)0x0;
        local_d8 = 0;
        local_dc = 0;
        local_e0 = 0.0;
        local_e4 = 0.0;
        local_e8 = 1.5;
        local_f0 = 0;
        local_100 = 0;
        local_108 = 0;
        uVar9 = local_50;
        FUN_00610904(local_50,local_28,local_51 & 1,&local_100,&local_d8,&local_dc,&local_e0,
                     &local_e4,&local_e8,&local_108);
        _objc_storeStrong(&local_d0,local_100);
        puVar10 = &local_f0;
        _objc_storeStrong(puVar10,local_108);
        uVar4 = (uint)puVar10;
        local_f1 = (byte)uVar9 & 1;
        if ((uVar9 & 1) == 0) {
          if (local_78 != (undefined1 *)0x0) {
            puVar7 = local_78;
            _objc_msgSend(local_78,PTR_s_removeFromSuperview_026ca800);
            uVar4 = (uint)puVar7;
          }
          FUN_006107a8();
          if ((uVar4 & 1) != 0) {
            FUN_00610820(DAT_02323d00);
          }
          local_2c = 1;
        }
        else {
          puVar11 = local_28;
          FUN_006114ac(local_28,local_d8,local_d0,local_f0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_d0;
          local_d0 = puVar11;
          _objc_release(puVar5);
          puVar5 = local_d0;
          FUN_00611950();
          _objc_retainAutoreleasedReturnValue();
          local_110 = puVar5;
          _objc_msgSend(puVar5,PTR_s_length_0269cca0);
          if (puVar5 == (undefined1 *)0x0) {
            uVar4 = 0;
            if (local_78 != (undefined1 *)0x0) {
              puVar7 = local_78;
              _objc_msgSend(local_78,PTR_s_removeFromSuperview_026ca800);
              uVar4 = (uint)puVar7;
            }
            FUN_006107a8();
            if ((uVar4 & 1) != 0) {
              FUN_00610820(DAT_02323d00);
            }
            local_2c = 1;
          }
          else {
            local_118 = local_80 * (double)local_e8;
            dVar20 = (double)local_e8;
            dVar16 = local_a8 * dVar20;
            local_120 = dVar16;
            _objc_msgSend(local_28,PTR_s_frame_026ca640);
            uVar22 = 0x3fe0000000000000;
            dVar21 = (double)local_e0;
            dVar17 = dVar16 + (local_80 - local_118) * 0.5 + dVar21;
            local_148 = dVar16;
            local_140 = dVar20;
            local_138 = dVar15;
            local_130 = param_3;
            local_128 = dVar17;
            _objc_msgSend(local_28,PTR_s_frame_026ca640);
            dVar18 = (dVar21 + (local_a8 - local_120) * 0.5) - (double)local_e4;
            dVar15 = local_128;
            dVar20 = local_118;
            dVar19 = local_120;
            local_170 = dVar17;
            local_168 = dVar21;
            local_160 = uVar22;
            local_158 = dVar16;
            local_150 = dVar18;
            FUN_0060df68();
            local_190 = dVar15;
            dStack_188 = dVar18;
            local_180 = dVar20;
            dStack_178 = dVar19;
            if (local_78 == (undefined1 *)0x0) {
              puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
              _objc_alloc();
              dVar15 = local_190;
              dVar20 = dStack_188;
              dVar19 = local_180;
              dVar16 = dStack_178;
              _objc_msgSend(puVar5,PTR_s_initWithFrame__026ca6e8);
              puVar7 = local_78;
              local_78 = puVar5;
              _objc_release(puVar7);
              _objc_msgSend(local_78,PTR_s_setTag__026caa80,local_68);
              _objc_msgSend(local_78,PTR_s_setUserInteractionEnabled__026caad8,0);
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              _objc_msgSend(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_78,PTR_s_setBackgroundColor__026ca888);
              _objc_release(puVar5);
              puVar7 = local_78;
              _objc_msgSend(local_78,PTR_s_setClipsToBounds__026ca8c8,1);
              uVar4 = (uint)puVar7;
              FUN_006107a8();
              if ((uVar4 & 1) != 0) {
                dVar15 = 0.3;
                FUN_00610820();
              }
              pcVar12 = "MMEmoticonView";
              _objc_getClass();
              local_1b8 = pcVar12;
              if (pcVar12 == (char *)0x0) {
                puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                _objc_alloc();
                _objc_msgSend(local_78,PTR_s_bounds_026ca548);
                local_210 = dVar15;
                _objc_msgSend(dVar15,dVar20,dVar19,dVar16,puVar5,PTR_s_initWithFrame__026ca6e8);
                local_1f0 = puVar5;
                _objc_msgSend(puVar5,PTR_s_setTag__026caa80,local_70);
                _objc_msgSend(local_1f0,PTR_s_setContentMode__026ca8e0,1);
                puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                _objc_msgSend(PTR__OBJC_CLASS___UIImage_026cdfd0,
                              PTR_s_imageWithContentsOfFile__0269e0e0,local_110);
                _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(local_1f0,PTR_s_setImage__026ca978);
                _objc_release(puVar5);
                _objc_msgSend(local_78,PTR_s_addSubview__026ca4c0,local_1f0);
                _objc_storeStrong(&local_1f0,0);
              }
              else {
                _objc_alloc();
                _objc_msgSend(local_78,PTR_s_bounds_026ca548);
                local_1e0 = dVar15;
                _objc_msgSend(dVar15,dVar20,dVar19,dVar16,pcVar12,PTR_s_initWithFrame__026ca6e8);
                local_1c0 = pcVar12;
                _objc_retain();
                local_1e8 = pcVar12;
                _objc_msgSend(pcVar12,PTR_s_setTag__026caa80,local_70);
                _objc_msgSend(local_78,PTR_s_addSubview__026ca4c0,local_1e8);
                FUN_0060ee30(local_1c0,local_110);
                _objc_storeStrong(&local_1e8);
                _objc_storeStrong(&local_1c0,0);
              }
              _objc_setAssociatedObject(local_78,DAT_026f44b0,local_110,3);
              if (local_dc == 0) {
                _objc_msgSend(local_60,PTR_s_addSubview__026ca4c0,local_78);
              }
              else {
                _objc_msgSend(local_60,PTR_s_insertSubview_belowSubview__0269e078,local_78,local_28)
                ;
              }
            }
            else {
              puVar7 = local_78;
              _objc_msgSend(local_78,PTR_s_viewWithTag__026cabe0,local_70);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = local_78;
              local_218 = puVar7;
              _objc_getAssociatedObject(local_78,DAT_026f44b0);
              _objc_retainAutoreleasedReturnValue();
              local_4ec = 0;
              local_220 = puVar8;
              if (puVar8 != (undefined1 *)0x0) {
                _objc_msgSend(puVar8,PTR_s_isEqualToString__0269ccc8,local_110);
                local_4ec = (byte)puVar8;
              }
              puVar7 = local_78;
              _objc_msgSend(local_78,PTR_s_frame_026ca640);
              bVar3 = (byte)puVar7;
              _CGRectEqualToRect(dVar19,dVar20,dVar18,dVar15,local_190,dStack_188,local_180,
                                 dStack_178);
              dVar15 = dStack_188;
              dVar20 = local_180;
              dVar19 = dStack_178;
              _objc_msgSend(local_190,local_78,PTR_s_setFrame__026ca960);
              _objc_msgSend(local_78,PTR_s_setHidden__026ca970,0);
              uVar22 = 0x3ff0000000000000;
              _objc_msgSend(local_78,PTR_s_setAlpha__026ca860);
              if (local_218 != (undefined1 *)0x0) {
                _objc_msgSend(local_78,PTR_s_bounds_026ca548);
                _objc_msgSend(uVar22,dVar15,dVar20,dVar19,local_218,PTR_s_setFrame__026ca960);
              }
              puVar7 = local_218;
              if (((local_4ec & 1) == 0) && (local_218 != (undefined1 *)0x0)) {
                pcVar12 = "MMEmoticonView";
                _objc_getClass();
                _objc_msgSend(puVar7,PTR_s_isKindOfClass__0269cd68,pcVar12);
                puVar8 = local_218;
                if (((ulong)puVar7 & 1) == 0) {
                  puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  _objc_msgSend(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  _objc_msgSend(puVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
                  if (((ulong)puVar8 & 1) != 0) {
                    puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                    _objc_msgSend(PTR__OBJC_CLASS___UIImage_026cdfd0,
                                  PTR_s_imageWithContentsOfFile__0269e0e0,local_110);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_218,PTR_s_setImage__026ca978);
                    _objc_release(puVar5);
                  }
                }
                else {
                  FUN_0060ee30(local_218,local_110);
                }
                _objc_setAssociatedObject(local_78,DAT_026f44b0,local_110,3);
              }
              if (local_dc == 0) {
                puVar8 = local_60;
                _objc_msgSend(local_60,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar8;
                _objc_msgSend();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_78;
                _objc_release();
                _objc_release(puVar8);
                if (puVar13 != puVar7) {
                  puVar13 = local_60;
                  _objc_msgSend(local_60,PTR_s_bringSubviewToFront__026ca550,local_78);
                }
                uVar4 = (uint)puVar13;
              }
              else {
                puVar7 = local_60;
                _objc_msgSend(local_60,PTR_s_insertSubview_belowSubview__0269e078,local_78,local_28)
                ;
                uVar4 = (uint)puVar7;
              }
              if (((local_4ec & 1) == 0) || ((bVar3 & 1) == 0)) {
                FUN_006107a8();
                if ((uVar4 & 1) != 0) {
                  FUN_00610820(0x3fe3333333333333);
                }
                local_2c = 0;
              }
              else {
                FUN_006107a8();
                if ((uVar4 & 1) != 0) {
                  FUN_00610820(0x3ff3333333333333);
                }
                local_2c = 1;
              }
              _objc_storeStrong(&local_220);
              _objc_storeStrong(&local_218,0);
              if (local_2c != 0) goto LAB_0060dd60;
            }
            local_2c = 0;
          }
LAB_0060dd60:
          _objc_storeStrong(&local_110,0);
        }
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_d0,0);
      }
      else {
LAB_0060cf18:
        if (local_78 != (undefined1 *)0x0) {
          puVar7 = local_78;
          _objc_msgSend(local_78,PTR_s_removeFromSuperview_026ca800);
          uVar4 = (uint)puVar7;
        }
        FUN_006107a8();
        if ((uVar4 & 1) != 0) {
          FUN_00610820(0x3fe3333333333333);
        }
        local_2c = 1;
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60,0);
    if (local_2c == 0) {
      local_2c = 0;
    }
  }
  else {
    if (local_38 == section_000003d8.sectname + 0xe) {
      local_50 = 0;
LAB_0060cd5c:
      local_51 = 1;
      goto LAB_0060cd60;
    }
    if (local_38 == (undefined1 *)0x24f6de) {
      local_50 = 1;
      goto LAB_0060cd5c;
    }
    local_2c = 1;
  }
  iVar1 = local_2c;
  ppuVar6 = &PTR___tlv_bootstrap_028c7920;
  (*(code *)PTR___tlv_bootstrap_028c7920)();
  *ppuVar6 = *ppuVar6 + -1;
  if (local_45 == '\x01') {
    _objc_exception_rethrow(0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x60de04);
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x60df68);
      (*pcVar2)();
    }
  }
LAB_0060de50:
  _objc_storeStrong(iVar14,&local_28,0);
  return;
}

