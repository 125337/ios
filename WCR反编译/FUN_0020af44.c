// FUN_0020af44 @ 0020af44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0020af44(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *local_890;
  uint local_7ac;
  cfstringStruct *local_598;
  cfstringStruct *local_550;
  cfstringStruct *local_528;
  cfstringStruct *local_500;
  cfstringStruct *local_4c0;
  undefined1 *local_488;
  undefined1 *local_468;
  undefined1 *local_438;
  undefined *local_380;
  undefined *local_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  double local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  char *local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  undefined *local_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2a8;
  byte local_299;
  undefined1 *local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  undefined8 local_208;
  char local_1f9;
  double local_1f8;
  double dStack_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  byte local_1c9;
  double local_1c8;
  byte local_1ba;
  byte local_1b9;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 *local_178;
  undefined1 *local_170;
  cfstringStruct *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  byte local_111;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_8a;
  byte local_89;
  undefined1 *local_88;
  undefined1 *local_80;
  byte local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined *local_50 [3];
  cfstringStruct *local_38;
  int local_2c;
  undefined *local_28;
  
  local_28 = (undefined1 *)0x0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == (undefined1 *)0x0) {
    local_2c = 1;
    goto LAB_0020dd4c;
  }
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_msgBannerBeautifyEnabled_026a06b8);
  if (((ulong)pcVar4 & 1) == 0) {
    local_2c = 1;
  }
  else {
    local_50[0] = (undefined1 *)0x0;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_contentView_026ca5a8);
    if (((ulong)puVar5 & 1) != 0) {
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_contentView);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_50[0];
      local_50[0] = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    puVar5 = local_28;
    FUN_0021081c();
    _objc_retainAutoreleasedReturnValue();
    local_438 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_438 = local_50[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_438;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_60 = (undefined1 *)0x0;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_maskContainerView_026a06f8);
    if (((ulong)puVar5 & 1) != 0) {
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_valueForKey__0269d128,&cf_maskContainerView);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_60;
      local_60 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_71 = 0;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_titleLabel_026caba0);
    if (((ulong)puVar5 & 1) == 0) {
      local_468 = (undefined1 *)0x0;
    }
    else {
      local_468 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_titleLabel);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_468;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_468;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_89 = 0;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_messageLabel_026a0700);
    if (((ulong)puVar5 & 1) == 0) {
      local_488 = (undefined1 *)0x0;
    }
    else {
      local_488 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_messageLabel);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_488;
    }
    puVar7 = local_488;
    (*(code *)PTR__objc_retain_02578638)();
    local_8a = (byte)puVar7;
    local_80 = local_488;
    if ((local_89 & 1) != 0) {
      puVar7 = local_88;
      (*(code *)PTR__objc_release_02578630)();
      local_8a = (byte)puVar7;
    }
    FUN_001d6008();
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerNicknameColorEnabled_026a0708);
    puVar7 = local_68;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar7 & 1) != 0) {
        local_a1 = 0;
        local_b1 = 0;
        local_4c0 = local_38;
        if ((local_8a & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerNicknameColorLight_026a0718)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_b1 = 1;
          local_b0 = local_4c0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerNicknameColorDark_026a0710);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_4c0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_4c0;
        if ((local_b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        if (local_98 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98,local_98);
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerContentColorEnabled_026a0720);
    puVar7 = local_80;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar7 & 1) != 0) {
        local_c9 = 0;
        local_d9 = 0;
        local_500 = local_38;
        if ((local_8a & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerContentColorLight_026a0730);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = local_500;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerContentColorDark_026a0728);
          _objc_retainAutoreleasedReturnValue();
          local_c9 = 1;
          local_c8 = local_500;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = local_500;
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if ((local_c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        if (local_c0 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTextColor__026caa98,local_c0);
        }
        _objc_storeStrong(&local_c0,0);
      }
    }
    if (local_58 == (undefined1 *)0x0) {
      uStack_e8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
      local_f0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
      FUN_00210ab4(local_f0,uStack_e8,local_28,local_38,local_80);
      local_2c = 1;
    }
    else {
      if ((local_50[0] != (undefined1 *)0x0) && ((long)local_50[0] - (long)local_58 != 0)) {
        FUN_00211688((long)local_50[0] - (long)local_58,local_50[0]);
      }
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerBgUseImageBackground_026a06a8);
      if (((ulong)pcVar4 & 1) == 0) {
        FUN_00211688(local_58);
        FUN_002119f8(local_28,0);
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerBgColorEnabled_026a0738);
        if (((ulong)pcVar4 & 1) != 0) {
          local_101 = 0;
          local_111 = 0;
          local_528 = local_38;
          if ((local_8a & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerBgColorLight_026a0748);
            _objc_retainAutoreleasedReturnValue();
            local_111 = 1;
            local_110 = local_528;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerBgColorDark_026a0740);
            _objc_retainAutoreleasedReturnValue();
            local_101 = 1;
            local_100 = local_528;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = local_528;
          if ((local_111 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_110);
          }
          if ((local_101 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_100);
          }
          if ((local_f8 != (cfstringStruct *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_setBackgroundColor__026ca888,local_f8),
             local_60 != (undefined1 *)0x0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_setBackgroundColor__026ca888,local_f8);
          }
          _objc_storeStrong(&local_f8,0);
        }
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerFrostColorEnabled_026a0750);
        if (((ulong)pcVar4 & 1) != 0) {
          local_129 = 0;
          local_139 = 0;
          local_550 = local_38;
          if ((local_8a & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerFrostColorLight_026a0760);
            _objc_retainAutoreleasedReturnValue();
            local_139 = 1;
            local_138 = local_550;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerFrostColorDark_026a0758);
            _objc_retainAutoreleasedReturnValue();
            local_129 = 1;
            local_128 = local_550;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_550;
          if ((local_139 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          if ((local_129 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          if (local_120 != (cfstringStruct *)0x0) {
            FUN_00211cd8(local_28,local_120);
          }
          _objc_storeStrong(&local_120,0);
        }
        uStack_148 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
        local_150 = *(undefined8 *)PTR__CGSizeZero_025782f8;
        FUN_00210ab4(local_150,uStack_148,local_28,local_38,local_80);
        local_2c = 1;
      }
      else {
        puVar8 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
        _NSSearchPathForDirectoriesInDomains(9,1,1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_158 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar7 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_38;
        local_160 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerBgImageFolder_026a0768);
        _objc_retainAutoreleasedReturnValue();
        local_598 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_598 = &cf__;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = local_598;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        puVar7 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_stringByAppendingPathComponent__026cab30,local_168);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setClipsToBounds__026ca8c8,1);
        puVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar7 = local_58;
        FUN_00211fd4();
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          uStack_188 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
          local_190 = *(undefined8 *)PTR__CGSizeZero_025782f8;
          FUN_00210ab4(local_190,uStack_188,local_28,local_38,local_80);
          local_2c = 1;
        }
        else {
          puVar7 = local_170;
          FUN_001feef4(local_170,local_8a & 1);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar7;
          if (puVar7 == (undefined1 *)0x0) {
            FUN_00211688(local_58);
            puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_60 != (undefined1 *)0x0) {
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            FUN_002119f8(local_28,0);
            uStack_1a8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
            local_1b0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
            FUN_00210ab4(local_1b0,uStack_1a8,local_28,local_38,local_80);
            local_2c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            puVar7 = local_1b8;
            FUN_001ffdfc();
            local_1b9 = (byte)puVar7;
            puVar7 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isEqualToString__0269ccc8,&cf_gif)
            ;
            local_1ba = (byte)puVar7;
            FUN_00212610(local_38);
            pcVar4 = local_38;
            local_1c8 = param_1;
            FUN_00212754();
            local_1c9 = (byte)pcVar4;
            if (local_1c8 < 0.0) {
              local_1c8 = 0.0;
            }
            dVar14 = 1.0;
            if (1.0 < local_1c8) {
              local_1c8 = 1.0;
            }
            puVar7 = local_58;
            dVar11 = local_1c8;
            _objc_getAssociatedObject(local_58,&DAT_028c9195);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = local_58;
            local_1d8 = puVar7;
            _objc_getAssociatedObject(local_58,&DAT_028c9196);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_58;
            local_1e0 = puVar8;
            _objc_getAssociatedObject(local_58,&DAT_028c9197);
            _objc_retainAutoreleasedReturnValue();
            local_1e8 = puVar7;
            if ((local_1b9 & 1) == 0) {
              local_299 = 0;
              local_7ac = 0;
              if (local_1d8 != (undefined1 *)0x0) {
                puVar7 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                local_299 = 1;
                local_298 = puVar7;
                FUN_001ffdfc();
                local_7ac = (uint)puVar7;
              }
              if ((local_299 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_298);
              }
              if ((local_7ac & 1) != 0) {
                FUN_00211688(local_58);
                puVar8 = local_58;
                FUN_00211fd4();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_178;
                local_178 = puVar8;
                (*(code *)PTR__objc_release_02578630)(puVar7);
                _objc_storeStrong(&local_1d8,0);
              }
              puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                         local_198);
              _objc_retainAutoreleasedReturnValue();
              local_2a8 = puVar5;
              if (puVar5 == (undefined *)0x0) {
                FUN_00211688(local_58);
                FUN_002119f8(local_28,0);
                uStack_2b8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
                local_2c0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
                FUN_00210ab4(local_2c0,uStack_2b8,local_28,local_38,local_80);
                local_2c = 1;
              }
              else {
                puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar5);
                _objc_retainAutoreleasedReturnValue();
                local_2c8 = puVar6;
                if (puVar6 == (undefined *)0x0) {
                  dStack_2d8 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
                  dVar12 = *(double *)PTR__CGSizeZero_025782f8;
                  local_2e0 = dVar12;
                }
                else {
                  dVar12 = dVar14;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_size_026cab00);
                  dVar14 = dVar11;
                  local_2e0 = dVar11;
                  dStack_2d8 = dVar12;
                }
                puVar7 = local_1d8;
                local_2e8 = (undefined1 *)0x0;
                if (local_1d8 != (undefined1 *)0x0) {
                  puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5)
                  ;
                  if (((ulong)puVar7 & 1) != 0) {
                    _objc_storeStrong(&local_2e8,local_1d8);
                  }
                }
                if ((local_1ba & 1) == 0) {
LAB_0020d53c:
                  bVar1 = local_2c8 == (undefined *)0x0;
                  if (bVar1) {
                    local_890 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,
                               local_2a8);
                    _objc_retainAutoreleasedReturnValue();
                    local_380 = local_890;
                  }
                  else {
                    local_890 = local_2c8;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_378 = local_890;
                  if (bVar1) {
                    (*(code *)PTR__objc_release_02578630)(local_380);
                  }
                  if (local_378 == (undefined *)0x0) {
                    FUN_00211688(local_58);
                    FUN_002119f8(local_28,0);
                    FUN_00210ab4(*(undefined8 *)PTR__CGSizeZero_025782f8,
                                 *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8),local_28,local_38,
                                 local_80);
                    local_2c = 1;
                  }
                  else {
                    if (local_2e8 == (undefined1 *)0x0) {
                      if (local_1d8 != (undefined1 *)0x0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1d8,PTR_s_removeFromSuperview_026ca800);
                      }
                      puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                      _objc_alloc();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar6,PTR_s_initWithImage__0269e558,local_378);
                      puVar5 = local_2e8;
                      local_2e8 = puVar6;
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setContentMode__026ca8e0,2);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setClipsToBounds__026ca8c8,0);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setAutoresizingMask__026ca878,0);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_178,PTR_s_insertSubview_atIndex__026ca748,local_2e8,0);
                      _objc_setAssociatedObject(local_58,&DAT_028c9195,local_2e8,1);
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setImage__026ca978,local_378);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setContentMode__026ca8e0,2);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2e8,PTR_s_setClipsToBounds__026ca8c8,0);
                      puVar5 = local_2e8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_superview_026cab50);
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = local_178;
                      (*(code *)PTR__objc_release_02578630)();
                      if (puVar5 != puVar7) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2e8,PTR_s_removeFromSuperview_026ca800);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_178,PTR_s_insertSubview_atIndex__026ca748,local_2e8,0);
                      }
                    }
                    _objc_setAssociatedObject(local_58,&DAT_028c9196,local_198,3);
                    puVar6 = local_2e8;
                    puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_size_026cab00);
                    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_valueWithCGSize__0269ec00);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_setAssociatedObject(puVar6,&DAT_028c9199,puVar5,1);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (dVar12,dVar14,param_3,param_4,local_2e8,PTR_s_setFrame__026ca960);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c8,local_2e8,PTR_s_setAlpha__026ca860);
                    uVar13 = 0x3ff0000000000000;
                    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAlpha__026ca860);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_sendSubviewToBack__0269f5c0,local_2e8);
                    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_58,PTR_s_setBackgroundColor__026ca888);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    if (local_60 != (undefined1 *)0x0) {
                      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_60,PTR_s_setBackgroundColor__026ca888);
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                    }
                    FUN_002119f8(local_28,1);
                    puVar5 = local_28;
                    pcVar4 = local_38;
                    puVar7 = local_80;
                    (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_size_026cab00);
                    FUN_00210ab4(uVar13,dVar14,puVar5,pcVar4,puVar7);
                    FUN_00212938(local_2e8,local_178,local_38);
                    local_2c = 0;
                  }
                  _objc_storeStrong(&local_378,0);
                }
                else {
                  pcVar9 = "MMAnimatedImagePlayMgr";
                  _objc_getClass();
                  pcVar10 = "MMAnimatedImagePlayConfig";
                  local_2f0 = pcVar9;
                  _objc_getClass();
                  local_2f8 = pcVar10;
                  if ((local_2f0 == (char *)0x0) || (pcVar10 == (char *)0x0)) goto LAB_0020d53c;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_defaultConfig_0269f550);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar9 = local_2f0;
                  local_300 = pcVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_animatedImageViewWithData_config_0269f558,local_2a8,
                             pcVar10);
                  _objc_retainAutoreleasedReturnValue();
                  local_308 = pcVar9;
                  if (pcVar9 == (char *)0x0) {
                    local_2c = 0;
                  }
                  else {
                    if (local_1d8 != (undefined1 *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1d8,PTR_s_removeFromSuperview_026ca800);
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_308,PTR_s_setContentMode__026ca8e0,2);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_308,PTR_s_setClipsToBounds__026ca8c8,0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_308,PTR_s_setAutoresizingMask__026ca878,0);
                    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
                    local_350 = dVar12;
                    dStack_348 = dVar14;
                    local_340 = param_3;
                    uStack_338 = param_4;
                    local_328 = dVar12;
                    dStack_320 = dVar14;
                    local_318 = param_3;
                    uStack_310 = param_4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (dVar12,dVar14,local_308,PTR_s_setFrame__026ca960);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_insertSubview_atIndex__026ca748,local_308,0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_sendSubviewToBack__0269f5c0,local_308);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c8,local_308,PTR_s_setAlpha__026ca860);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (0x3ff0000000000000,local_58,PTR_s_setAlpha__026ca860);
                    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_58,PTR_s_setBackgroundColor__026ca888);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    if (local_60 != (undefined1 *)0x0) {
                      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_60,PTR_s_setBackgroundColor__026ca888);
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                    }
                    _objc_setAssociatedObject(local_58,&DAT_028c9195,local_308,1);
                    _objc_setAssociatedObject(local_58,&DAT_028c9196,local_198,3);
                    pcVar9 = local_308;
                    dStack_358 = dStack_2d8;
                    local_360 = local_2e0;
                    puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2e0,dStack_2d8,PTR__OBJC_CLASS___NSValue_026ce1f0,
                               PTR_s_valueWithCGSize__0269ec00);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_setAssociatedObject(pcVar9,&DAT_028c9199,puVar5,1);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    FUN_002119f8(local_28,1);
                    dStack_368 = dStack_2d8;
                    local_370 = local_2e0;
                    dVar12 = local_2e0;
                    dVar14 = dStack_2d8;
                    FUN_00210ab4(local_28,local_38,local_80);
                    FUN_00212938(local_308,local_178,local_38);
                    local_2c = 1;
                  }
                  _objc_storeStrong(&local_308);
                  _objc_storeStrong(&local_300,0);
                  if (local_2c == 0) goto LAB_0020d53c;
                }
                _objc_storeStrong(&local_2e8);
                _objc_storeStrong(&local_2c8,0);
              }
              _objc_storeStrong(&local_2a8,0);
            }
            else {
              FUN_00202a2c(local_198);
              local_1f9 = true;
              local_1f8 = dVar11;
              dStack_1f0 = dVar14;
              if (local_1d8 != (undefined1 *)0x0) {
                puVar7 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_isEqualToString__0269ccc8,local_198);
                local_1f9 = true;
                if ((((ulong)puVar7 & 1) != 0) && (local_1f9 = true, local_1e8 != (undefined1 *)0x0)
                   ) {
                  puVar7 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_boolValue_026ca540);
                  local_1f9 = (uint)puVar7 != (local_1c9 & 1);
                }
              }
              if ((bool)local_1f9 == false) {
                puVar8 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_superview_026cab50);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_178;
                (*(code *)PTR__objc_release_02578630)();
                if (puVar8 != puVar7) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_removeFromSuperview_026ca800);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_insertSubview_atIndex__026ca748,local_1d8,0);
                }
                puVar7 = local_1d8;
                pcVar4 = &cf_setPlayerToMuted_;
                _NSSelectorFromString();
                FUN_00200198(puVar7,pcVar4,local_1c9 & 1);
                puVar7 = local_1d8;
                pcVar4 = &cf_forceSetPlayerToMuted_;
                _NSSelectorFromString();
                FUN_00200198(puVar7,pcVar4,local_1c9 & 1);
                puVar7 = local_1d8;
                pcVar4 = &cf_setNotifyOthersAudioModule_;
                _NSSelectorFromString();
                FUN_00200198(puVar7,pcVar4,(local_1c9 ^ 1) & 1);
                puVar7 = local_1d8;
                pcVar4 = &cf_setVolume_;
                _NSSelectorFromString();
                uVar2 = 0;
                if ((local_1c9 & 1) == 0) {
                  uVar2 = 0x3f800000;
                }
                FUN_002002cc(local_1c9 & 1,uVar2,puVar7,pcVar4);
                puVar7 = local_1d8;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_1c9 & 1);
                _objc_retainAutoreleasedReturnValue();
                FUN_002003fc(puVar7,&cf_mute);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar7 = local_1d8;
                dVar11 = 5.26354424712089e-315;
                uVar3 = 0;
                if ((local_1c9 & 1) == 0) {
                  uVar3 = 0x3f800000;
                }
                dVar14 = (double)(ulong)uVar3;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
                _objc_retainAutoreleasedReturnValue();
                FUN_002003fc(puVar7,&cf_volume);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar7 = local_1d8;
                pcVar4 = &cf_startAutoPlay;
                _NSSelectorFromString();
                FUN_00200588(puVar7,pcVar4);
                puVar7 = local_1d8;
                pcVar4 = &cf_playVideo;
                _NSSelectorFromString();
                FUN_00200588(puVar7,pcVar4);
                puVar7 = local_58;
                _objc_getAssociatedObject(local_58,&DAT_028c9198);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___AVPlayer_026ce308;
                local_238 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
                if (((ulong)puVar7 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_238,PTR_s_setMuted__0269f258,local_1c9 & 1);
                  dVar11 = 5.26354424712089e-315;
                  uVar3 = 0;
                  if ((local_1c9 & 1) == 0) {
                    uVar3 = 0x3f800000;
                  }
                  dVar14 = (double)(ulong)uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setVolume__0269f280);
                  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_play_0269f2b0);
                }
                puVar7 = local_58;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_1c9 & 1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(puVar7,&DAT_028c9197,puVar5,1);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                _objc_storeStrong(&local_238,0);
              }
              else {
                FUN_00211688(local_58);
                puVar8 = local_58;
                FUN_00211fd4();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_178;
                local_178 = puVar8;
                (*(code *)PTR__objc_release_02578630)(puVar7);
                puVar8 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
                local_220 = dVar14;
                local_218 = dVar11;
                local_210 = param_3;
                local_208 = param_4;
                FUN_00212810(puVar8,local_58,local_1c9 & 1);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_1d8;
                local_1d8 = puVar8;
                (*(code *)PTR__objc_release_02578630)(puVar7);
                if (local_1d8 == (undefined1 *)0x0) {
                  FUN_002119f8(local_28,0);
                  uStack_228 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
                  local_230 = *(undefined8 *)PTR__CGSizeZero_025782f8;
                  FUN_00210ab4(local_230,uStack_228,local_28,local_38,local_80);
                  local_2c = 1;
                  goto LAB_0020dc6c;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_insertSubview_atIndex__026ca748,local_1d8,0);
                _objc_setAssociatedObject(local_58,&DAT_028c9195,local_1d8,1);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
              local_280 = dVar14;
              dStack_278 = dVar11;
              local_270 = param_3;
              uStack_268 = param_4;
              local_258 = dVar14;
              dStack_250 = dVar11;
              local_248 = param_3;
              uStack_240 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar14,dVar11,param_3,param_4,local_1d8,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,local_1d8,PTR_s_setAlpha__026ca860);
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,local_58,PTR_s_setAlpha__026ca860);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_sendSubviewToBack__0269f5c0,local_1d8);
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if (local_60 != (undefined1 *)0x0) {
                puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              FUN_002119f8(local_28,1);
              dStack_288 = dStack_1f0;
              local_290 = local_1f8;
              FUN_00210ab4(local_1f8,dStack_1f0,local_28,local_38,local_80);
              FUN_00212938(local_1d8,local_178,local_38);
              local_2c = 1;
            }
LAB_0020dc6c:
            _objc_storeStrong(&local_1e8);
            _objc_storeStrong(&local_1e0,0);
            _objc_storeStrong(&local_1d8,0);
            _objc_storeStrong(&local_1b8,0);
          }
          _objc_storeStrong(&local_198,0);
        }
        _objc_storeStrong(&local_178);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(&local_158,0);
      }
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_0020dd4c:
  _objc_storeStrong(&local_28,0);
  return;
}

