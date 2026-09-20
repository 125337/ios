// FUN_0169e28c @ 0169e28c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0169e28c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_608;
  undefined *local_538;
  undefined *local_510;
  double local_500;
  uint local_4f4;
  undefined1 *local_4e0;
  undefined1 *local_4c0;
  double local_458;
  double local_3d8;
  double local_3c0;
  ulong local_2c0;
  ulong local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  double local_250;
  double dStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  double local_1f8;
  double local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  byte local_1ab;
  byte local_1aa;
  byte local_1a9;
  undefined1 *local_1a8;
  byte local_199;
  undefined1 *local_198;
  byte local_189;
  undefined1 *local_188;
  byte local_179;
  undefined1 *local_178;
  undefined1 *local_170;
  byte local_161;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  ulong local_f0;
  undefined1 local_e1;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  byte local_73;
  byte local_72;
  undefined1 local_71;
  undefined1 *local_70;
  int local_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  dVar11 = DAT_02323da8;
  dVar2 = DAT_02323d38;
  dVar15 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  dVar13 = DAT_02323c68;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  uVar7 = local_48;
  pcVar3 = DAT_028e3d88;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar3)(uVar7,local_50,local_58);
  uVar9 = local_48;
  local_48 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar9);
  if (local_48 != 0) {
    uVar9 = local_48;
    FUN_016a9384();
    uVar7 = local_48;
    if ((uVar9 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar7;
      local_68 = 1;
      goto LAB_016a012c;
    }
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_repeatEnhanceEnabled_026b2bd8);
    uVar7 = local_48;
    local_71 = SUB81(puVar5,0);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar7;
      local_68 = 1;
    }
    else if ((local_58 == 0) ||
            (uVar7 = local_58,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
            (uVar7 & 1) == 0)) {
      uVar7 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar7;
      local_68 = 1;
    }
    else {
      uVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSender_0269d1b0);
      local_72 = (byte)uVar7;
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatUseImage_026b2be0);
      local_73 = (byte)puVar6;
      if (((((ulong)puVar6 & 1) != 0) && (local_48 != 0)) &&
         (uVar7 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48,PTR_s_respondsToSelector__026ca818,
                    PTR_s_repeatEnhanceDarkModeChanged__026b2ac8), (uVar7 & 1) != 0)) {
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatCornerRadius_026b2ab0);
      local_88 = dVar13;
      if (dVar13 < 0.0) {
        local_88 = 0.0;
      }
      if (10.0 < local_88) {
        local_88 = 10.0;
      }
      if ((local_73 & 1) == 0) {
        local_3d8 = local_88;
        if ((local_72 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatButtonSizeOther_026b2c00);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatButtonSize_026b2bf8);
        }
        local_90 = local_3d8;
      }
      else {
        local_3c0 = local_88;
        if ((local_72 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatImageButtonSizeOther_026b2bf0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatImageButtonSize_026b2be8);
        }
        local_90 = local_3c0;
      }
      FUN_016b1b78();
      if ((local_73 & 1) == 0) {
        local_179 = 0;
        local_189 = 0;
        local_4c0 = local_70;
        if ((local_72 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatTextContentOther_026b2c20);
          _objc_retainAutoreleasedReturnValue();
          local_189 = 1;
          local_188 = local_4c0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatTextContentSelf_026b2c18);
          _objc_retainAutoreleasedReturnValue();
          local_179 = 1;
          local_178 = local_4c0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = local_4c0;
        if ((local_189 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        if ((local_179 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        if (local_170 == (undefined1 *)0x0) {
          local_199 = 0;
          local_1a9 = 0;
          local_4e0 = local_70;
          if ((local_72 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatTextContentOther_026b2c20);
            _objc_retainAutoreleasedReturnValue();
            local_1a9 = 1;
            local_1a8 = local_4e0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatTextContentSelf_026b2c18);
            _objc_retainAutoreleasedReturnValue();
            local_199 = 1;
            local_198 = local_4e0;
          }
          _objc_storeStrong(&local_170,local_4e0);
          if ((local_1a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a8);
          }
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
        }
        puVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatBoldFont_026b2c28);
        local_1aa = (byte)puVar6;
        puVar6 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isEqualToString__0269ccc8,&cf__);
        local_4f4 = 1;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_isEqualToString__0269ccc8,&cf_format_s_);
          local_4f4 = (uint)puVar6;
        }
        local_1ab = (byte)local_4f4 & 1;
        if ((local_4f4 & 1) != 0) {
          _objc_storeStrong(&local_170,&cf__);
        }
        local_1b8 = local_90 - dVar11 * local_90 * 2.0;
        dVar15 = dVar11;
        local_500 = local_1b8;
        if ((local_1ab & 1) != 0) {
          dVar15 = 1.2;
          local_500 = local_1b8 * 1.2;
        }
        local_1c0 = local_500;
        local_1d1 = 0;
        local_1e1 = 0;
        local_510 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        if ((local_1aa & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_500,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_1e1 = 1;
          local_1e0 = local_510;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_500,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_boldSystemFontOfSize__0269cf28);
          _objc_retainAutoreleasedReturnValue();
          local_1d1 = 1;
          local_1d0 = local_510;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1c8 = local_510;
        if ((local_1e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e0);
        }
        if ((local_1d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1d0);
        }
        puVar6 = local_170;
        local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        local_201 = 0;
        local_211 = 0;
        local_538 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        dVar13 = local_1b8;
        if ((local_1aa & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_211 = 1;
          local_210 = local_538;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
          _objc_retainAutoreleasedReturnValue();
          local_201 = 1;
          local_200 = local_538;
        }
        local_30 = local_538;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_sizeWithAttributes__026cab08);
        local_1f8 = dVar13;
        local_1f0 = dVar15;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if ((local_211 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
        if ((local_201 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_200);
        }
        local_220 = local_1f8 + dVar11 * local_90 * 2.0;
        if (((local_88 == 10.0) &&
            (puVar6 = local_170,
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
            puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) && (local_220 < local_90)) {
          local_220 = local_90;
        }
        uVar12 = 0;
        uVar10 = 0;
        dVar15 = local_220;
        dVar13 = local_90;
        FUN_01696f30();
        local_260 = uVar10;
        uStack_258 = uVar12;
        local_250 = dVar15;
        dStack_248 = dVar13;
        local_240 = uVar10;
        uStack_238 = uVar12;
        local_230 = dVar15;
        dStack_228 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar10,uVar12,dVar15,dVar13,local_80,PTR_s_setFrame__026ca960);
        if ((local_170 != (undefined1 *)0x0) &&
           (puVar6 = local_170,
           (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
           puVar6 != (undefined1 *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setTitle_forState__026caab8,local_170,0);
        }
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        local_268 = puVar5;
        if (puVar5 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setFont__026ca958,local_1c8);
          (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setTextAlignment__026caa90,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setNumberOfLines__026ca9d8,1);
        }
        dVar15 = local_90 * dVar11;
        dVar13 = local_90 * dVar11;
        dVar14 = local_90 * dVar11;
        dVar11 = local_90 * dVar11;
        FUN_016b3184();
        local_2b0 = dVar15;
        dStack_2a8 = dVar13;
        local_2a0 = dVar14;
        dStack_298 = dVar11;
        local_288 = dVar15;
        dStack_280 = dVar13;
        local_278 = dVar14;
        dStack_270 = dVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar15,dVar13,dVar14,dVar11,local_80,PTR_s_setContentEdgeInsets__0269ebd0);
        uVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSender_0269d1b0);
        uVar9 = uVar7 & 0xffffffff;
        getRepeatEnhanceTextColorForSender(SUB81(uVar7,0));
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = uVar9;
        if (uVar9 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setTitleColor_forState__026caac0,uVar9,0);
        }
        uVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSender_0269d1b0);
        uVar7 = uVar7 & 0xffffffff;
        FUN_016b31d0();
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = uVar7;
        if (uVar7 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888,uVar7);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_alpha_026ca4d8);
        if (dVar2 < ABS(dVar15 - 1.0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_80,PTR_s_setAlpha__026ca860);
        }
        _objc_storeStrong(&local_2c0);
        _objc_storeStrong(&local_2b8,0);
        _objc_storeStrong(&local_268,0);
        _objc_storeStrong(&local_1c8,0);
        _objc_storeStrong(&local_170,0);
      }
      else {
        uVar10 = 0;
        local_458 = 0.0;
        dVar11 = local_90;
        dVar13 = local_90;
        local_98 = local_90;
        FUN_01696f30();
        puVar5 = local_80;
        local_e0 = local_458;
        uStack_d8 = uVar10;
        local_d0 = dVar11;
        dStack_c8 = dVar13;
        local_b8 = local_458;
        uStack_b0 = uVar10;
        local_a8 = dVar11;
        dStack_a0 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_458,uVar10,dVar11,dVar13,local_80,PTR_s_setFrame__026ca960);
        uVar4 = (uint)puVar5;
        FUN_0169b20c();
        local_e1 = (undefined1)uVar4;
        uVar7 = (ulong)(local_72 & 1);
        FUN_016b1be0(uVar7,uVar4 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = uVar7;
        if (uVar7 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImage_forState__0269cc60,0,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImage_forState__0269cc60,uVar7,0);
          puVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_458 = local_90 * dVar15;
          dVar11 = local_90 * dVar15;
          dVar13 = local_90 * dVar15;
          dVar15 = local_90 * dVar15;
          FUN_016b3184();
          local_130 = local_458;
          dStack_128 = dVar11;
          local_120 = dVar13;
          dStack_118 = dVar15;
          local_110 = local_458;
          dStack_108 = dVar11;
          local_100 = dVar13;
          dStack_f8 = dVar15;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_458,dVar11,dVar13,dVar15,local_80,PTR_s_setImageEdgeInsets__0269ebe0);
        }
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        uVar4 = (uint)puVar5;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)();
        local_141 = 0;
        local_151 = 0;
        FUN_0169b20c();
        if ((uVar4 & 1) == 0) {
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_151 = 1;
          local_150 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        else {
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          local_140 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        if ((local_151 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_150);
        }
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        local_138 = local_458;
        if (local_458 < 0.0) {
          local_138 = 0.0;
        }
        if (1.0 < local_138) {
          local_138 = 1.0;
        }
        dVar15 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAlpha__026ca860);
        local_161 = 0;
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (puVar5 != (undefined *)0x0) {
          puVar8 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          local_161 = 1;
          local_160 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = dVar2 < ABS(dVar15 - 1.0);
        }
        if ((local_161 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (bVar1) {
          puVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        _objc_storeStrong(&local_f0,0);
      }
      dVar15 = local_88;
      if (local_88 == 10.0) {
        dVar15 = local_90 / 2.0;
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar15);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar15);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_repeatButtonShadowAlpha_026b2c30);
      if ((local_73 & 1) == 0) {
        local_608 = (double)(long)puVar6 / 100.0;
      }
      else {
        local_608 = 0.0;
      }
      if (local_608 <= dVar2) {
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar12 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
        uVar10 = *(undefined8 *)PTR__CGSizeZero_025782f8;
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar12);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff8000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,DAT_02323c70,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
        puVar8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar10 = 0;
        uVar12 = 0x3ff8000000000000;
        FUN_01696f7c();
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar12);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)((float)local_608);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      FUN_016b3ab4(local_80);
      FUN_016b3fe8(local_80,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_48,
                 PTR_s_performRepeatEnhanceAction__026b2ab8,0x40);
      FUN_016b40c0(local_48,local_80);
      FUN_016b4370(local_48,local_80);
      FUN_016b4420(local_48,0);
      _objc_storeStrong(&local_80,0);
      local_68 = 0;
    }
    _objc_storeStrong(&local_70,0);
    if (local_68 != 0) goto LAB_016a012c;
  }
  uVar7 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar7;
  local_68 = 1;
LAB_016a012c:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_40;
}

