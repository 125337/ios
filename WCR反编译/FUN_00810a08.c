// FUN_00810a08 @ 00810a08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00810a08(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  cfstringStruct *local_e50;
  double local_d80;
  undefined1 *local_b18;
  uint local_8b4;
  uint local_6c4;
  uint local_668;
  uint local_660;
  uint local_648;
  uint local_640;
  bool local_571;
  cfstringStruct *local_570;
  ulong local_560;
  cfstringStruct *local_558;
  undefined *local_550;
  undefined4 local_548;
  undefined4 local_544;
  code *local_540;
  undefined *local_538;
  ulong local_530;
  undefined *local_528;
  long local_520;
  ulong local_518;
  undefined1 auStack_510 [8];
  undefined1 auStack_508 [8];
  double local_500;
  double local_4f8;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [8];
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  ulong local_480;
  undefined1 *local_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  double local_450;
  double dStack_448;
  double local_440;
  double dStack_438;
  undefined *local_430;
  undefined *local_428;
  undefined *local_420;
  undefined *local_418;
  undefined1 *local_410;
  byte local_401;
  long local_400;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined *local_3e8;
  byte local_3da;
  byte local_3d9;
  undefined1 *local_3d8;
  undefined1 *local_3d0;
  byte local_3c2;
  byte local_3c1;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined1 *local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double dStack_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined1 *local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined1 *local_218;
  double local_210;
  double local_208;
  byte local_1f9;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined *local_1e0;
  undefined1 *local_1d8;
  byte local_1c9;
  undefined1 *local_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  undefined8 local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  double dStack_168;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  double dStack_120;
  undefined1 local_111;
  undefined1 *local_110;
  char local_101;
  undefined1 *local_100;
  byte local_f1;
  undefined1 *local_f0;
  byte local_e1;
  undefined1 *local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  byte local_a2;
  byte local_a1;
  undefined1 *local_a0;
  byte local_91;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined *local_78;
  byte local_69;
  ulong local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined4 local_50;
  double local_40;
  undefined8 local_38;
  ulong local_30;
  undefined *local_28;
  
  dVar22 = DAT_02323db0;
  local_28 = (undefined1 *)0x0;
  dVar18 = DAT_02323db0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = param_7;
  _CFAbsoluteTimeGetCurrent();
  puVar16 = local_28;
  local_40 = dVar18;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isViewLoaded_0269cde0);
  uVar4 = (uint)puVar16;
  if (((ulong)puVar16 & 1) == 0) {
    local_50 = 1;
    goto LAB_00814bb4;
  }
  FUN_00821330();
  if ((uVar4 & 1) == 0) {
    FUN_00821344(local_28);
    FUN_00821b38(local_28,local_30,local_38);
    local_50 = 1;
    goto LAB_00814bb4;
  }
  FUN_00821dcc();
  if ((uVar4 & 1) == 0) {
    FUN_00821344(local_28);
    local_50 = 1;
    goto LAB_00814bb4;
  }
  puVar16 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar16);
  uVar4 = (uint)local_28;
  FUN_00821e70();
  if ((uVar4 & 1) == 0) {
    if (local_58 != (undefined1 *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_windowLevel_026a0f70);
      param_2 = *(double *)PTR__UIWindowLevelNormal_02578238;
      if (param_2 < dVar18) goto LAB_00810c5c;
    }
    puVar16 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    uVar15 = local_30;
    local_59 = bVar3;
    FUN_00821f48(local_30,bVar3);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar15;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_length_0269cca0);
    if (uVar15 == 0) {
      FUN_00821344(local_28);
      local_50 = 1;
    }
    else {
      local_69 = 0;
      local_78 = (undefined *)0x0;
      local_88 = 0;
      puVar16 = local_28;
      FUN_00822088(local_28,local_30,local_38,&local_69,&local_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_78,local_88);
      local_80 = puVar16;
      if (puVar16 == (undefined1 *)0x0) {
        local_50 = 1;
      }
      else {
        uVar4 = (uint)puVar16;
        local_91 = 0;
        FUN_00822d68();
        local_640 = 1;
        if ((uVar4 & 1) == 0) {
          puVar16 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isViewLoaded_0269cde0);
          local_648 = 0;
          if (((ulong)puVar16 & 1) != 0) {
            puVar16 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            local_90 = puVar16;
            FUN_00822d68();
            local_648 = (uint)puVar16;
          }
          local_640 = local_648;
        }
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        if ((local_640 & 1) == 0) {
          uVar4 = (uint)local_80;
          local_a1 = 0;
          FUN_00822f38();
          local_660 = 1;
          if ((uVar4 & 1) == 0) {
            puVar16 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isViewLoaded_0269cde0);
            local_668 = 0;
            if (((ulong)puVar16 & 1) != 0) {
              puVar16 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = puVar16;
              FUN_00822f38();
              local_668 = (uint)puVar16;
            }
            local_660 = local_668;
          }
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          puVar5 = local_80;
          if ((local_660 & 1) == 0) {
            puVar16 = PTR__OBJC_CLASS___UITableView_026ce1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar16);
            puVar16 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (((ulong)puVar5 & 1) != 0) {
              local_69 = 1;
              puVar5 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar16,PTR_s_stringWithFormat__0269cca8,&cf____backgroundView);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = local_78;
              local_78 = puVar16;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            if (((local_69 & 1) == 0) &&
               (uVar15 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneGlobal),
               (uVar15 & 1) != 0)) {
              uVar4 = (uint)local_80;
              FUN_0082317c();
              if ((uVar4 & 1) == 0) {
                FUN_00821344(local_28);
                FUN_0081501c(local_40,local_28,&cf_skip_transparent_host,local_30,&cf___,local_78,
                             &cf___);
                local_50 = 1;
                goto LAB_00814b74;
              }
            }
            local_6c4 = 0;
            if ((local_69 & 1) != 0) {
              local_6c4 = (uint)local_28;
              FUN_00823390();
            }
            puVar16 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_a2 = (byte)local_6c4 & 1;
            if ((local_6c4 & 1) != 0) {
              puVar5 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar16,PTR_s_stringWithFormat__0269cca8,&cf____index0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = local_78;
              local_78 = puVar16;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            puVar16 = local_28;
            _objc_getAssociatedObject(local_28,&DAT_028cd0e0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_28;
            local_b0 = puVar16;
            _objc_getAssociatedObject(local_28,&DAT_028cd1d1);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = puVar6;
            if ((local_b0 != (undefined1 *)0x0) && (puVar6 != local_80)) {
              FUN_00821344(local_28);
              _objc_storeStrong(&local_b0,0);
            }
            if (local_b0 == (undefined1 *)0x0) {
              puVar16 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              _objc_alloc();
              FUN_008235f4(local_80);
              local_d8 = dVar18;
              local_d0 = param_2;
              local_c8 = param_3;
              local_c0 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_initWithFrame__026ca6e8);
              puVar5 = local_b0;
              local_b0 = puVar16;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTag__026caa80,DAT_02324350);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setClipsToBounds__026ca8c8,1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_setAutoresizingMask__026ca878,0x12);
              _objc_setAssociatedObject(local_b0,&DAT_028cd1d2,local_78,3);
              if ((local_a2 & 1) == 0) {
                if ((local_69 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_80,PTR_s_addSubview__026ca4c0,local_b0);
                  FUN_00823d48(local_80,local_b0);
                }
                else {
                  FUN_0082391c(local_80,local_b0);
                }
              }
              else {
                FUN_008236a8(local_80,local_b0);
              }
              _objc_setAssociatedObject(local_28,&DAT_028cd0e0,local_b0,1);
              _objc_setAssociatedObject(local_28,&DAT_028cd1d1,local_80,1);
            }
            else {
              local_e1 = 0;
              local_f1 = 0;
              bVar3 = false;
              if ((local_a2 & 1) != 0) {
                puVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
                _objc_retainAutoreleasedReturnValue();
                local_e1 = 1;
                bVar3 = true;
                local_e0 = puVar5;
                if (puVar5 == local_80) {
                  puVar5 = local_80;
                  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_backgroundView_026a0320);
                  _objc_retainAutoreleasedReturnValue();
                  local_f1 = 1;
                  bVar3 = puVar5 == local_b0;
                  local_f0 = puVar5;
                }
              }
              if ((local_f1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_f0);
              }
              if ((local_e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_e0);
              }
              if (bVar3) {
                FUN_008236a8(local_80,local_b0);
              }
              else {
                local_101 = '\0';
                bVar3 = false;
                if (((local_a2 & 1) == 0) && (bVar3 = false, (local_69 & 1) != 0)) {
                  puVar5 = local_80;
                  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_backgroundView_026a0320);
                  _objc_retainAutoreleasedReturnValue();
                  local_101 = '\x01';
                  bVar3 = puVar5 != local_b0;
                  local_100 = puVar5;
                }
                if (local_101 != '\0') {
                  (*(code *)PTR__objc_release_02578630)(local_100);
                }
                if (bVar3) {
                  FUN_0082391c(local_80,local_b0);
                }
                else {
                  local_111 = 0;
                  bVar3 = false;
                  uVar1 = (local_69 & 1) == 0;
                  if ((bool)uVar1) {
                    puVar5 = local_b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
                    _objc_retainAutoreleasedReturnValue();
                    bVar3 = puVar5 != local_80;
                    local_111 = uVar1;
                    local_110 = puVar5;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    uVar1 = local_111;
                  }
                  local_111 = uVar1;
                  if (bVar3) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_80,PTR_s_addSubview__026ca4c0,local_b0);
                  }
                }
              }
            }
            FUN_0082435c(local_80,local_b0);
            FUN_008235f4(local_80);
            local_138 = dVar18;
            dStack_130 = param_2;
            local_128 = param_3;
            dStack_120 = param_4;
            if ((local_69 & 1) == 0) {
              puVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
              uVar4 = (uint)puVar5;
              dStack_178 = dStack_130;
              local_180 = local_138;
              dStack_168 = dStack_120;
              local_170 = local_128;
              local_158 = param_4;
              local_150 = param_3;
              local_148 = param_2;
              local_140 = dVar18;
              _CGRectEqualToRect(param_4,param_3,param_2,dVar18,local_138,dStack_130,local_128,
                                 dStack_120);
              if ((uVar4 & 1) == 0) {
                dStack_198 = dStack_130;
                local_1a0 = local_138;
                dStack_188 = dStack_120;
                local_190 = local_128;
                dStack_1b8 = dStack_130;
                local_1c0 = local_138;
                dStack_1a8 = dStack_120;
                local_1b0 = local_128;
                param_4 = local_138;
                dVar18 = dStack_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,dStack_130,local_128,local_b0,PTR_s_setFrame__026ca960);
              }
            }
            puVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
            FUN_00824810();
            puVar7 = local_b0;
            local_1c8 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentMode_026ca598);
            if (puVar7 != local_1c8) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_setContentMode__026ca8e0,local_1c8);
            }
            if ((local_69 & 1) == 0) {
              FUN_00823d48(local_80,local_b0);
            }
            puVar7 = local_80;
            FUN_008248f4(local_80,local_b0);
            puVar5 = local_80;
            local_1c9 = (byte)puVar7;
            if ((local_69 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              puVar16 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1d8 = puVar5;
              FUN_00814d40();
              puVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_backgroundView_026a0320);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_isOpaque_0269f438);
              puVar10 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_backgroundColor_026ca518);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              FUN_00824b80();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar16,PTR_s_stringWithFormat__0269cca8,
                         &cf_live__dready__ddirect__dsuper___bgSlot___tableOpaque__dtableBg___);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = puVar16;
              (*(code *)PTR__objc_release_02578630)(puVar11);
              (*(code *)PTR__objc_release_02578630)(puVar10);
              (*(code *)PTR__objc_release_02578630)(puVar9);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              pcVar2 = &cf_clear_fills;
              if ((local_1c9 & 1) == 0) {
                pcVar2 = &cf_skip_clear_no_wallpaper;
              }
              param_4 = local_40;
              FUN_0081501c(local_28,pcVar2,local_30,&cf___,local_78,local_1e0);
              _objc_storeStrong(&local_1e0);
              _objc_storeStrong(&local_1d8,0);
            }
            if ((local_1c9 & 1) == 0) {
              FUN_00824db0(local_b0);
              FUN_0082515c(local_b0);
            }
            else if (((local_69 & 1) != 0) && ((local_a2 & 1) == 0)) {
              FUN_0082552c(local_80,local_b0);
            }
            if ((((local_69 & 1) == 0) && ((local_1c9 & 1) != 0)) &&
               ((uVar15 = local_30,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMain),
                (uVar15 & 1) != 0 ||
                ((((uVar15 = local_30,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_30,PTR_s_isEqualToString__0269ccc8,
                              _WCRPageBackgroundSceneMoments), (uVar15 & 1) != 0 ||
                   (uVar15 = local_30,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMe),
                   (uVar15 & 1) != 0)) ||
                  (uVar15 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneChat),
                  (uVar15 & 1) != 0)) ||
                 (uVar15 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneGlobal),
                 (uVar15 & 1) != 0)))))) {
              FUN_008259f8(local_28,local_80,local_b0);
              puVar16 = local_28;
              FUN_00826364();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = local_30;
              local_1e8 = puVar16;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMain);
              if ((uVar15 & 1) != 0) {
                FUN_00827160(local_1e8);
              }
              uVar15 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMoments);
              if ((uVar15 & 1) != 0) {
                FUN_0082435c(local_1e8,local_b0);
                FUN_0082758c(local_1e8);
              }
              _objc_storeStrong(&local_1e8,0);
            }
            if (((local_69 & 1) != 0) && ((local_1c9 & 1) != 0)) {
              FUN_00827904(local_80,local_b0);
              puVar7 = local_b0;
              _objc_getAssociatedObject(local_b0,&DAT_028cd1d3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = local_80;
              local_1f9 = 0;
              local_8b4 = 0;
              local_1f0 = puVar7;
              if (puVar7 != (undefined1 *)0x0) {
                puVar16 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
                _objc_retainAutoreleasedReturnValue();
                local_1f9 = 1;
                local_1f8 = puVar16;
                FUN_00827aa4();
                local_8b4 = (uint)puVar5;
              }
              if ((local_1f9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1f8);
              }
              if ((local_8b4 & 1) != 0) {
                puVar16 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
                _objc_retainAutoreleasedReturnValue();
                FUN_00827dfc();
                (*(code *)PTR__objc_release_02578630)(puVar16);
              }
              _objc_storeStrong(&local_1f0,0);
            }
            if (((local_a2 & 1) != 0) && ((local_1c9 & 1) != 0)) {
              FUN_00828294(local_28,local_80,local_b0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRGlobalPageBackgroundStore_026ce9b0,
                       PTR_s_opacityForScene_configuration__026a8c40,local_30,DAT_028ccfc8);
            local_208 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRGlobalPageBackgroundStore_026ce9b0,
                       PTR_s_blurForScene_configuration__026a8c48,local_30,DAT_028ccfc8);
            local_210 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8);
            dVar24 = dVar22;
            dVar23 = local_208;
            if (dVar22 < ABS(param_4 - local_208)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_208,local_b0,PTR_s_setAlpha__026ca860);
            }
            puVar5 = local_b0;
            _objc_getAssociatedObject(local_b0,&DAT_028cd1d4);
            _objc_retainAutoreleasedReturnValue();
            dVar19 = local_210;
            local_218 = puVar5;
            if ((0.0 < local_210) && (puVar5 == (undefined1 *)0x0)) {
              puVar16 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
              _objc_alloc();
              puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,4);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_initWithEffect__026ca6e0);
              puVar5 = local_218;
              local_218 = puVar16;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_setUserInteractionEnabled__026caad8,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_setAutoresizingMask__026ca878,0x12);
              if ((local_a2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_218)
                ;
              }
              _objc_setAssociatedObject(local_b0,&DAT_028cd1d4,local_218,1);
            }
            dVar20 = dVar18;
            if (local_218 != (undefined1 *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_alpha_026ca4d8);
              dVar24 = dVar22;
              dVar21 = local_210;
              if (dVar22 < ABS(dVar19 - local_210)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_210,local_218,PTR_s_setAlpha__026ca860);
                dVar24 = dVar22;
              }
              puVar5 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_isHidden_026ca768);
              dVar19 = local_210;
              if ((uint)puVar5 != (uint)(local_210 <= 0.0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_setHidden__026ca970,local_210 <= 0.0);
              }
              dVar23 = dVar21;
              dVar20 = dVar18;
              if ((local_a2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_frame_026ca640);
                puVar5 = local_b0;
                dVar22 = dVar24;
                dVar25 = dVar19;
                local_238 = dVar19;
                local_230 = dVar24;
                local_228 = dVar21;
                local_220 = dVar18;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
                uVar4 = (uint)puVar5;
                dVar19 = local_238;
                dVar24 = local_230;
                dVar23 = local_228;
                dVar20 = local_220;
                local_258 = dVar18;
                local_250 = dVar21;
                local_248 = dVar22;
                local_240 = dVar25;
                _CGRectEqualToRect();
                if ((uVar4 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
                  local_2a0 = dVar19;
                  dStack_298 = dVar24;
                  local_290 = dVar23;
                  dStack_288 = dVar20;
                  local_278 = dVar19;
                  dStack_270 = dVar24;
                  local_268 = dVar23;
                  dStack_260 = dVar20;
                  (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setFrame__026ca960);
                }
                puVar7 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = local_218;
                (*(code *)PTR__objc_release_02578630)();
                (*(code *)PTR__objc_release_02578630)(puVar7);
                if (puVar8 != puVar5) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b0,PTR_s_bringSubviewToFront__026ca550,local_218);
                }
              }
            }
            if ((local_a2 & 1) != 0) {
              FUN_008288fc(local_80,local_b0,local_218);
            }
            uVar4 = (uint)local_b0;
            FUN_00814d40();
            if (((uVar4 & 1) != 0) &&
               ((((uVar15 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMain),
                  (uVar15 & 1) != 0 ||
                  (uVar15 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,
                             _WCRPageBackgroundSceneContacts), (uVar15 & 1) != 0)) ||
                 (uVar15 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneDiscover
                           ), (uVar15 & 1) != 0)) ||
                (((uVar15 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMe),
                  (uVar15 & 1) != 0 ||
                  (uVar15 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMoments
                            ), (uVar15 & 1) != 0)) ||
                 (uVar15 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneChat),
                 (uVar15 & 1) != 0)))))) {
              puVar16 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              FUN_00814ea4();
              (*(code *)PTR__objc_release_02578630)(puVar16);
            }
            puVar5 = local_b0;
            _objc_getAssociatedObject(local_b0,&DAT_028cd1d5);
            _objc_retainAutoreleasedReturnValue();
            dVar22 = dVar23;
            dVar18 = dVar20;
            local_2a8 = puVar5;
            if (puVar5 != (undefined1 *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_frame_026ca640);
              puVar5 = local_b0;
              dVar21 = dVar24;
              dVar25 = dVar19;
              local_2c8 = dVar19;
              local_2c0 = dVar24;
              local_2b8 = dVar23;
              local_2b0 = dVar20;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
              uVar4 = (uint)puVar5;
              dVar19 = local_2c8;
              dVar24 = local_2c0;
              dVar22 = local_2b8;
              dVar18 = local_2b0;
              local_2e8 = dVar20;
              local_2e0 = dVar23;
              local_2d8 = dVar21;
              local_2d0 = dVar25;
              _CGRectEqualToRect();
              if ((uVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
                local_330 = dVar19;
                dStack_328 = dVar24;
                local_320 = dVar22;
                dStack_318 = dVar18;
                local_308 = dVar19;
                dStack_300 = dVar24;
                local_2f8 = dVar22;
                dStack_2f0 = dVar18;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setFrame__026ca960);
              }
            }
            puVar5 = local_b0;
            _objc_getAssociatedObject(local_b0,&DAT_028cd1d6);
            _objc_retainAutoreleasedReturnValue();
            dVar23 = dVar22;
            dVar20 = dVar18;
            local_338 = puVar5;
            if (puVar5 != (undefined1 *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_frame_026ca640);
              puVar5 = local_b0;
              local_358 = dVar19;
              local_350 = dVar24;
              local_348 = dVar22;
              local_340 = dVar18;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
              uVar4 = (uint)puVar5;
              dVar21 = local_358;
              dVar25 = local_350;
              dVar23 = local_348;
              dVar20 = local_340;
              local_378 = dVar18;
              local_370 = dVar22;
              local_368 = dVar24;
              local_360 = dVar19;
              _CGRectEqualToRect();
              if ((uVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
                local_3c0 = dVar21;
                dStack_3b8 = dVar25;
                local_3b0 = dVar23;
                dStack_3a8 = dVar20;
                local_398 = dVar21;
                dStack_390 = dVar25;
                local_388 = dVar23;
                dStack_380 = dVar20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar21,dVar25,local_338,PTR_s_setFrame__026ca960);
              }
            }
            uVar12 = DAT_028ccfc8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoMuted);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar12);
            local_3c1 = (byte)uVar13;
            uVar12 = DAT_028ccfc8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoLoop);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar12);
            local_3c2 = (byte)uVar13;
            uVar4 = (uint)local_68;
            local_3d9 = 0;
            FUN_00829390();
            if ((uVar4 & 1) == 0) {
              local_b18 = (undefined1 *)0x0;
            }
            else {
              local_b18 = local_28;
              FUN_0082959c(local_28,local_68,local_3c2 & 1);
              _objc_retainAutoreleasedReturnValue();
              local_3d9 = 1;
              local_3d8 = local_b18;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_3d0 = local_b18;
            if ((local_3d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3d8);
            }
            puVar16 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_3da = local_3d0 != (undefined1 *)0x0;
            uVar12 = DAT_028ccfc8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar22 = local_210;
            dVar18 = local_208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar16,PTR_s_stringWithFormat__0269cca8,&cf_____ld__d__d___3f___3f__d);
            _objc_retainAutoreleasedReturnValue();
            local_3e8 = puVar16;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            puVar5 = local_b0;
            _objc_getAssociatedObject(local_b0,&DAT_028cd0e1);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_b0;
            local_3f0 = puVar5;
            _objc_getAssociatedObject(local_b0,&DAT_028cd1d7);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = local_30;
            local_3f8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneMoments);
            if ((uVar15 & 1) != 0) {
              uVar4 = (uint)local_b0;
              FUN_00814d40();
              if ((uVar4 & 1) != 0) {
                puVar16 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
                _objc_retainAutoreleasedReturnValue();
                FUN_0082a0bc();
                (*(code *)PTR__objc_release_02578630)(puVar16);
                puVar16 = local_28;
                FUN_00826364();
                _objc_retainAutoreleasedReturnValue();
                FUN_0082758c();
                (*(code *)PTR__objc_release_02578630)(puVar16);
              }
            }
            puVar5 = local_3f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3f0,PTR_s_isEqualToString__0269ccc8,local_3e8);
            if ((((ulong)puVar5 & 1) == 0) &&
               (puVar5 = local_3f8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_3f8,PTR_s_isEqualToString__0269ccc8,local_3e8),
               ((ulong)puVar5 & 1) == 0)) {
              FUN_0082af08(local_b0);
              _objc_setAssociatedObject(local_b0,&DAT_028cd1d7,local_3e8,3);
              lVar17 = DAT_026f4830;
              (*(code *)PTR__objc_retain_02578638)();
              local_400 = lVar17;
              local_401 = local_3da & 1;
              uVar15 = local_68;
              FUN_00829390();
              puVar5 = local_3d0;
              if ((uVar15 & 1) == 0) {
                FUN_0082ba38();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar15;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_480 = uVar14;
                (*(code *)PTR__objc_release_02578630)();
                uVar4 = (uint)uVar15;
                local_401 = local_480 != 0;
                FUN_0082baac();
                if (((uVar4 & 1) != 0) &&
                   (((local_401 & 1) == 0 || (FUN_0082bab8(), (uVar4 & 1) != 0)))) {
                  puVar16 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
                  _NSStringFromClass();
                  _objc_retainAutoreleasedReturnValue();
                  _getpid();
                  FUN_0082baf4();
                  _NSLog(&
                         cf__wcr__page_bg_event_apply_cachevc___trigger___scene___hit__dpid__dmemAvailKB__llu
                        );
                  (*(code *)PTR__objc_release_02578630)(puVar16);
                }
                if (local_480 == 0) {
                  puVar16 = PTR__OBJC_CLASS___UIScreen_026cdf70;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar24 = dVar23;
                  local_4b0 = dVar22;
                  local_4a8 = dVar18;
                  local_4a0 = dVar23;
                  local_498 = dVar20;
                  (*(code *)PTR__objc_release_02578630)(puVar16);
                  puVar16 = PTR__OBJC_CLASS___UIScreen_026cdf70;
                  local_490 = dVar23;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_4d8 = dVar23;
                  local_4d0 = dVar24;
                  local_4c8 = dVar18;
                  local_4c0 = dVar22;
                  (*(code *)PTR__objc_release_02578630)(puVar16);
                  local_d80 = dVar22;
                  if (dVar22 <= local_490) {
                    local_d80 = local_490;
                  }
                  local_4e0 = local_d80;
                  puVar16 = PTR__OBJC_CLASS___UIScreen_026cdf70;
                  dVar18 = local_d80;
                  local_4b8 = dVar22;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar16);
                  local_488 = local_d80 * dVar18;
                  _objc_initWeak(auStack_4e8,local_28);
                  puVar5 = auStack_4f0;
                  _objc_initWeak(puVar5,local_b0);
                  FUN_0082c2b8();
                  _objc_retainAutoreleasedReturnValue();
                  local_550 = PTR___NSConcreteStackBlock_02578660;
                  local_548 = 0xc2000000;
                  local_544 = 0;
                  local_540 = FUN_0082c32c;
                  local_538 = &DAT_025806f0;
                  uVar15 = local_68;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_500 = local_488;
                  local_530 = uVar15;
                  _objc_copyWeak();
                  _objc_copyWeak();
                  puVar16 = local_3e8;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar17 = local_400;
                  local_528 = puVar16;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_4f8 = local_40;
                  uVar15 = local_30;
                  local_520 = lVar17;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_518 = uVar15;
                  _dispatch_async(puVar5,&local_550);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  _objc_storeStrong(&local_518);
                  _objc_storeStrong(&local_520,0);
                  _objc_storeStrong(&local_528,0);
                  _objc_destroyWeak(auStack_508);
                  _objc_destroyWeak(auStack_510);
                  _objc_storeStrong(&local_530,0);
                  _objc_destroyWeak(auStack_4f0);
                  _objc_destroyWeak(auStack_4e8);
                }
                else {
                  FUN_0082bb10(local_40,local_28,local_b0,local_480,local_3e8,local_400,1);
                }
                _objc_storeStrong(&local_480,0);
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                puVar16 = PTR__OBJC_CLASS___AVPlayerItem_026ce300;
                local_410 = puVar5;
                local_418 = (undefined *)0x0;
                if (puVar5 == (undefined1 *)0x0) {
                  puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
                             local_68);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_playerItemWithURL__0269f260);
                  _objc_retainAutoreleasedReturnValue();
                  local_420 = puVar16;
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  if ((local_3c2 & 1) == 0) {
                    puVar16 = PTR__OBJC_CLASS___AVPlayer_026ce308;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___AVPlayer_026ce308,
                               PTR_s_playerWithPlayerItem__0269f268,local_420);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = local_410;
                    local_410 = puVar16;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_410,PTR_s_setActionAtItemEnd__026a05a8,1);
                  }
                  else {
                    puVar16 = PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0,
                               PTR_s_queuePlayerWithItems__026a0588,
                               *(undefined8 *)PTR____NSArray0___02578280);
                    _objc_retainAutoreleasedReturnValue();
                    local_428 = puVar16;
                    _objc_storeStrong(&local_410,puVar16);
                    puVar6 = PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8,
                               PTR_s_playerLooperWithPlayer_templateI_026a0590,local_428,local_420);
                    _objc_retainAutoreleasedReturnValue();
                    puVar16 = local_418;
                    local_418 = puVar6;
                    (*(code *)PTR__objc_release_02578630)(puVar16);
                    _objc_storeStrong(&local_428,0);
                  }
                  _objc_storeStrong(&local_420,0);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_410,PTR_s_setMuted__0269f258,local_3c1 & 1);
                puVar16 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,
                           PTR_s_playerLayerWithPlayer__026a05a0,local_410);
                _objc_retainAutoreleasedReturnValue();
                local_430 = puVar16;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
                puVar16 = local_430;
                local_470 = dVar22;
                dStack_468 = dVar18;
                local_460 = dVar23;
                dStack_458 = dVar20;
                local_450 = dVar22;
                dStack_448 = dVar18;
                local_440 = dVar23;
                dStack_438 = dVar20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar22,dVar18,dVar23,dVar20,local_430,PTR_s_setFrame__026ca960);
                FUN_0082b168();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_setVideoGravity__0269f298);
                (*(code *)PTR__objc_release_02578630)(puVar16);
                (*(code *)PTR__objc_msgSend_02578628)(0,local_430,PTR_s_setOpacity__026ca9f0);
                puVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar7 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_superview_026cab50);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = local_b0;
                (*(code *)PTR__objc_release_02578630)();
                if (puVar7 == puVar5) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b0,PTR_s_bringSubviewToFront__026ca550,local_218);
                }
                _objc_setAssociatedObject(local_b0,&DAT_028cd1d8,local_410,1);
                puVar5 = local_b0;
                puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_3da & 1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(puVar5,&DAT_028cd1d9,puVar16,1);
                (*(code *)PTR__objc_release_02578630)(puVar16);
                _objc_setAssociatedObject(local_b0,&DAT_028cd1da,local_418,1);
                puVar5 = local_b0;
                puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_3c2 & 1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(puVar5,&DAT_028cd1db,puVar16,1);
                (*(code *)PTR__objc_release_02578630)(puVar16);
                _objc_setAssociatedObject(local_b0,&DAT_028cd1d6,local_430,1);
                puVar16 = local_28;
                _objc_getAssociatedObject(local_28,&DAT_028cd1dc);
                _objc_retainAutoreleasedReturnValue();
                local_478 = puVar16;
                if (((local_3da & 1) == 0) &&
                   ((puVar16 == (undefined1 *)0x0 ||
                    ((*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_boolValue_026ca540),
                    ((ulong)puVar16 & 1) != 0)))) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_play_0269f2b0);
                }
                FUN_0082b2a4(local_28,local_b0,local_3e8,100);
                _objc_storeStrong(&local_478);
                _objc_storeStrong(&local_430,0);
                _objc_storeStrong(&local_418,0);
                _objc_storeStrong(&local_410,0);
              }
              puVar16 = local_28;
              FUN_0082a958(local_28,local_30,local_80,local_78,local_b0);
              uVar4 = (uint)puVar16;
              FUN_0082d7bc();
              local_e50 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              local_571 = (uVar4 & 1) == 0;
              if (local_571) {
                local_e50 = &cf___;
              }
              else {
                local_560 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e50,PTR_s_stringWithFormat__0269cca8,&cf___cached__d);
                _objc_retainAutoreleasedReturnValue();
                local_570 = local_e50;
              }
              local_571 = !local_571;
              (*(code *)PTR__objc_retain_02578638)();
              local_558 = local_e50;
              if (local_571) {
                (*(code *)PTR__objc_release_02578630)(local_570);
                (*(code *)PTR__objc_release_02578630)(local_560);
              }
              FUN_0081501c(local_40,local_28,&cf_apply,local_30,&cf___,local_78,local_558,local_3e8)
              ;
              _objc_storeStrong(&local_558);
              _objc_storeStrong(&local_400,0);
              local_50 = 0;
            }
            else {
              FUN_0082a958(local_28,local_30,local_80,local_78,local_b0);
              local_50 = 1;
            }
            _objc_storeStrong(&local_3f8);
            _objc_storeStrong(&local_3f0,0);
            _objc_storeStrong(&local_3e8,0);
            _objc_storeStrong(&local_3d0,0);
            _objc_storeStrong(&local_338,0);
            _objc_storeStrong(&local_2a8,0);
            _objc_storeStrong(&local_218,0);
            _objc_storeStrong(&local_b8,0);
            _objc_storeStrong(&local_b0,0);
          }
          else {
            FUN_00821344(local_28);
            FUN_0081501c(local_40,local_28,&cf_skip_search_results,local_30,&cf___,local_78,&cf___);
            local_50 = 1;
          }
        }
        else {
          FUN_00821344(local_28);
          FUN_0081501c(local_40,local_28,&cf_skip_share_confirm,local_30,&cf___,local_78,&cf___);
          local_50 = 1;
        }
      }
LAB_00814b74:
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
LAB_00810c5c:
    FUN_00821344(local_28);
    local_50 = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_00814bb4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

