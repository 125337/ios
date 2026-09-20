// FUN_00765798 @ 00765798

void FUN_00765798(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_368;
  undefined8 local_2f8;
  byte local_2c4;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined1 *local_f8;
  byte local_ea;
  byte local_e9;
  undefined1 *local_e8;
  byte local_d9;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  byte local_b9;
  undefined1 *local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  byte local_89;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  byte local_61;
  undefined1 *local_60;
  byte local_52;
  byte local_51;
  undefined1 *local_50;
  byte local_41;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 local_2c;
  undefined *local_28;
  
  local_28 = (undefined1 *)0x0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == (undefined1 *)0x0) {
    local_2c = 1;
  }
  else {
    puVar2 = local_28;
    FUN_007612d8();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x57435250);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
      }
      FUN_007668f8(local_28,0);
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      puVar3 = _WCRefineTextStyleInputPlaceholder;
      FUN_0075ede8();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_41 = (byte)puVar4;
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        _objc_storeStrong(&local_50,&cf___);
      }
      puVar2 = local_28;
      FUN_00766de8();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_28;
      local_51 = puVar3 != (undefined1 *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
      local_61 = 0;
      local_2c4 = 0;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        local_2c4 = 0;
        param_2 = DAT_02323d38;
        if (DAT_02323d38 < param_1) {
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_2c4 = 0;
          local_60 = puVar2;
          if (puVar2 != (undefined1 *)0x0) {
            puVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
            local_2c4 = (byte)puVar2;
            local_88 = param_1;
            local_80 = param_2;
            local_78 = param_3;
            local_70 = param_4;
            _CGRectIsEmpty();
            local_2c4 = local_2c4 ^ 1;
          }
        }
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      local_52 = local_2c4 & 1;
      local_89 = 0;
      if ((local_41 & 1) != 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        local_89 = 0;
        if ((puVar3 != (undefined1 *)0x0) && (local_89 = 0, (local_51 & 1) == 0)) {
          local_89 = local_52;
        }
      }
      local_89 = local_89 & 1;
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x57435250);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_98 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar2 & 1) == 0) {
        _objc_storeStrong(&local_98,0);
      }
      if ((local_89 & 1) == 0) {
        if (local_98 != (undefined1 *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,1);
        }
        if (((local_41 & 1) == 0) && ((local_51 & 1) == 0)) {
          FUN_007668f8(local_28,0);
        }
        else {
          FUN_007668f8(local_28,1);
        }
        local_2c = 1;
      }
      else {
        FUN_007668f8(local_28,1);
        if (local_98 == (undefined1 *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          _objc_alloc();
          param_1 = *(double *)PTR__CGRectZero_025782f0;
          param_2 = *(double *)(PTR__CGRectZero_025782f0 + 8);
          param_3 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
          param_4 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar3 = local_98;
          local_98 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,DAT_023242a0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setNumberOfLines__026ca9d8,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setLineBreakMode__026ca988,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_98);
        }
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_alignment);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_2f8 = 1;
        }
        else {
          local_2f8 = 2;
          if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            local_2f8 = 0;
          }
        }
        local_a0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTextAlignment__026caa90,local_2f8);
        puVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setText__026caa88,local_50);
        }
        puVar2 = local_28;
        FUN_00766f50();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = (undefined1 *)0x0;
        local_a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_font_0269ea00);
        if (((ulong)puVar2 & 1) != 0) {
          puVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_b0;
          local_b0 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if (local_b0 == (undefined1 *)0x0) {
          param_1 = 16.0;
          puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_b0;
          local_b0 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_bold);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          puVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontDescriptor_026a1d50);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontDescriptor_026a1d50);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_fontDescriptorWithSymbolicTraits_026a7d88,(uint)puVar3 | 2);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar3 = local_b8;
          puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          if (local_b8 != (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointSize_026a1d68);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_fontWithDescriptor_size__026a1d60,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = local_b0;
            local_b0 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          _objc_storeStrong(&local_b8,0);
        }
        puVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFont__026ca958,local_b0);
        }
        puVar2 = local_28;
        FUN_00761e68();
        local_b9 = (byte)puVar2;
        puVar2 = PTR_WCRefineGradientPalette_026ce910;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGradientPalette_026ce910,PTR_s_colorsFromStyle_dark__026a7d68,
                   local_40,local_b9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 0;
        local_e9 = 0;
        local_368 = puVar2;
        if (puVar2 == (undefined1 *)0x0) {
          pcVar1 = &cf_darkColor;
          if ((local_b9 & 1) == 0) {
            pcVar1 = &cf_lightColor;
          }
          local_368 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,pcVar1);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = local_368;
          _WCRefineSpecialTextColor();
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = local_368;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = local_368;
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradient);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_d0;
        local_ea = (byte)puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = puVar3;
        if ((local_ea & 1) != 0) {
          puVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
          _objc_retainAutoreleasedReturnValue();
          local_3a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (5 < (long)local_3a8) {
            local_3a8 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
          }
          if ((long)local_3a8 < 1) {
            local_3b0 = (undefined1 *)0x0;
          }
          else {
            local_3b0 = local_3a8;
          }
          puVar4 = local_98;
          FUN_00761f3c(local_98,local_c8,local_3b0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_f8;
          local_f8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        FUN_00764ce4(local_98,local_f8,local_ea & 1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        FUN_0076574c();
        FUN_007656b0();
        dVar7 = param_1;
        local_170 = param_1;
        dStack_168 = param_2;
        local_160 = param_3;
        uStack_158 = param_4;
        if ((local_a8 != (undefined1 *)0x0) &&
           (local_170 = param_1, local_160 = param_3, uStack_158 = param_4, local_a8 != local_28)) {
          puVar3 = local_a8;
          dVar6 = param_1;
          dVar8 = param_3;
          uVar9 = param_4;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_frame_026ca640);
          _CGRectIsEmpty();
          dVar7 = dVar6;
          local_170 = param_1;
          local_160 = param_3;
          uStack_158 = param_4;
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_frame_026ca640);
            FUN_0076574c();
            dVar7 = dVar8;
            FUN_007656b0();
            local_170 = dVar6;
            dStack_168 = param_2;
            local_160 = dVar7;
            uStack_158 = uVar9;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lineHeight_0269e7d8);
        local_3b8 = (double)(long)dVar7;
        if (local_3b8 < 18.0) {
          local_3b8 = 18.0;
        }
        dVar7 = local_170;
        _CGRectGetMidY(local_170,dStack_168,local_160);
        uVar9 = 0x3fe0000000000000;
        dVar8 = dVar7 - local_3b8 * 0.5;
        puVar3 = local_98;
        dVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640);
        _CGRectEqualToRect(dVar6,uVar9,dVar7,uStack_158,local_170,dVar8,local_160,local_3b8);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,dVar8,local_160,local_3b8,local_98,PTR_s_setFrame__026ca960);
          dVar6 = local_170;
        }
        puVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isHidden_026ca768);
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_alpha_026ca4d8);
        if (dVar6 < 1.0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_98,PTR_s_setAlpha__026ca860);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bringSubviewToFront__026ca550,local_98)
        ;
        _objc_storeStrong(&local_f8);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a8,0);
        local_2c = 0;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

