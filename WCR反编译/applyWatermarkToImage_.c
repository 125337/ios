// applyWatermarkToImage: @ 00724678

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenshotWatermarkProcessor::applyWatermarkToImage_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 in_d1;
  double dVar12;
  double local_628;
  byte local_3a4;
  undefined8 ***local_370;
  undefined8 ***local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined4 local_244;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined *local_1a8;
  undefined8 ***local_1a0;
  byte local_191;
  undefined8 ***local_190;
  byte local_181;
  undefined8 ***local_180;
  byte local_171;
  undefined8 ***local_170;
  byte local_161;
  undefined8 ***local_160;
  byte local_151;
  undefined8 ***local_150;
  byte local_141;
  undefined8 ***local_140;
  byte local_131;
  undefined8 ***local_130;
  byte local_121;
  undefined8 ***local_120;
  byte local_111;
  undefined8 ***local_110;
  byte local_101;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 ***local_e8;
  double local_e0;
  undefined8 ***local_d8;
  byte local_cd;
  int local_cc;
  undefined8 ***local_c8;
  byte local_b9;
  undefined8 local_98;
  double local_90;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined1 local_5f;
  byte local_5e;
  byte local_5d;
  undefined8 ***local_50;
  undefined4 local_44;
  undefined8 ***local_40;
  SEL local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  
  local_40 = (undefined8 ****)0x0;
  local_38 = param_2;
  local_30 = (undefined8 ***)param_1;
  _objc_storeStrong(&local_40,param_3);
  if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
    local_28 = (undefined8 ****)0x0;
    local_44 = 1;
  }
  else {
    ppppuVar3 = (undefined8 ****)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = ppppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_screenshotWatermark1Enabled_026a78c0);
    local_5d = (byte)ppppuVar3;
    ppppuVar3 = (undefined8 ****)local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2Enabled_026a78c8);
    local_5e = (byte)ppppuVar3;
    ppppuVar3 = (undefined8 ****)local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark3Enabled_026a78d0);
    pppuVar2 = local_40;
    local_5f = SUB81(ppppuVar3,0);
    if ((((local_5d & 1) == 0) && ((local_5e & 1) == 0)) && (((ulong)ppppuVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pppuVar2;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      local_70 = in_d0;
      local_68 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
      uVar4 = 0;
      _UIGraphicsBeginImageContextWithOptions(local_70,local_68,in_d1);
      _UIGraphicsGetCurrentContext();
      pppuVar2 = local_40;
      dVar8 = local_70;
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      dVar11 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      dVar12 = 0.0;
      uVar4 = 0;
      FUN_007260f8();
      local_98 = uVar4;
      local_90 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,pppuVar2,PTR_s_drawInRect__026ca610);
      ppppuVar3 = (undefined8 ****)local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isDarkMode_0269f410);
      local_b9 = (byte)ppppuVar3;
      ppppuVar5 = (undefined8 ****)local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_effectiveWatermark1RelativePathF_026a78d8,(uint)ppppuVar3 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = ppppuVar5;
      for (local_cc = 1; local_cc + -3 == 0 || local_cc < 3; local_cc = local_cc + 1) {
        local_cd = 0;
        local_d8 = (undefined8 ****)0x0;
        local_e0 = 1.0;
        local_e8 = (undefined8 ****)0x0;
        local_f0 = 0.0;
        dVar9 = 0.5;
        local_f8 = 0.5;
        local_100 = 0.5;
        local_101 = 0;
        if (local_cc == 1) {
          ppppuVar3 = (undefined8 ****)local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark1Enabled_026a78c0)
          ;
          local_cd = (byte)ppppuVar3;
          local_111 = 0;
          dVar10 = dVar9;
          if (((undefined8 ****)local_c8 == (undefined8 ****)0x0) ||
             (ppppuVar3 = (undefined8 ****)local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0), dVar10 = dVar9,
             ppppuVar3 == (undefined8 ****)0x0)) {
            local_370 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark1ImagePath_026a78a8);
            _objc_retainAutoreleasedReturnValue();
            ppppuVar3 = (undefined8 ****)((long)&MACH_HEADER.magic + 1);
            local_111 = 1;
            local_110 = local_370;
          }
          else {
            local_370 = local_c8;
          }
          _objc_storeStrong(ppppuVar3,&local_d8,local_370);
          if ((local_111 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_110);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark1Opacity_026a78e0)
          ;
          ppppuVar3 = (undefined8 ****)local_50;
          local_e0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_screenshotWatermark1BlendMode_026a78e8);
          local_e8 = ppppuVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark1Scale_026a78f0);
          local_f0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark1CenterX_026a78f8)
          ;
          local_f8 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark1CenterY_026a7900)
          ;
          local_121 = 0;
          local_131 = 0;
          local_141 = 0;
          local_151 = 0;
          local_3a4 = 0;
          local_100 = dVar10;
          if ((local_b9 & 1) != 0) {
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark1NightImagePa_026a78b0);
            _objc_retainAutoreleasedReturnValue();
            local_121 = 1;
            local_120 = ppppuVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_3a4 = 0;
            if (ppppuVar3 != (undefined8 ****)0x0) {
              ppppuVar5 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark1NightImagePa_026a78b0);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 1;
              ppppuVar3 = (undefined8 ****)local_50;
              local_130 = ppppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark1ImagePath_026a78a8);
              _objc_retainAutoreleasedReturnValue();
              local_141 = 1;
              local_140 = ppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_isEqualToString__0269ccc8);
              ppppuVar3 = (undefined8 ****)local_d8;
              local_3a4 = 0;
              if (((ulong)ppppuVar5 & 1) == 0) {
                ppppuVar5 = (undefined8 ****)local_50;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_screenshotWatermark1NightImagePa_026a78b0);
                _objc_retainAutoreleasedReturnValue();
                local_151 = 1;
                local_150 = ppppuVar5;
                (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_isEqualToString__0269ccc8);
                local_3a4 = (byte)ppppuVar3;
              }
            }
          }
          local_101 = local_3a4 & 1;
          if ((local_151 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if ((local_131 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          if ((local_121 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
        }
        else if (local_cc == 2) {
          ppppuVar3 = (undefined8 ****)local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2Enabled_026a78c8)
          ;
          local_cd = (byte)ppppuVar3;
          local_161 = 0;
          local_171 = 0;
          bVar1 = false;
          if ((local_b9 & 1) != 0) {
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark2NightImagePa_026a7908);
            _objc_retainAutoreleasedReturnValue();
            local_161 = 1;
            bVar1 = false;
            local_160 = ppppuVar3;
            if (ppppuVar3 != (undefined8 ****)0x0) {
              ppppuVar3 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark2NightImagePa_026a7908);
              _objc_retainAutoreleasedReturnValue();
              local_171 = 1;
              local_170 = ppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = ppppuVar3 != (undefined8 ****)0x0;
            }
          }
          if ((local_171 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          if ((local_161 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_160);
          }
          if (bVar1) {
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark2NightImagePa_026a7908);
            _objc_retainAutoreleasedReturnValue();
            pppuVar2 = local_d8;
            local_d8 = ppppuVar3;
            (*(code *)PTR__objc_release_02578630)(pppuVar2);
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark2NightImagePa_026a7908);
            _objc_retainAutoreleasedReturnValue();
            ppppuVar5 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark2ImagePath_026a7910);
            _objc_retainAutoreleasedReturnValue();
            ppppuVar6 = ppppuVar3;
            (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_isEqualToString__0269ccc8);
            local_101 = ((byte)ppppuVar6 ^ 1) & 1;
            (*(code *)PTR__objc_release_02578630)(ppppuVar5);
            (*(code *)PTR__objc_release_02578630)(ppppuVar3);
          }
          else {
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark2ImagePath_026a7910);
            _objc_retainAutoreleasedReturnValue();
            pppuVar2 = local_d8;
            local_d8 = ppppuVar3;
            (*(code *)PTR__objc_release_02578630)(pppuVar2);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2Opacity_026a7918)
          ;
          ppppuVar3 = (undefined8 ****)local_50;
          local_e0 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_screenshotWatermark2BlendMode_026a7920);
          local_e8 = ppppuVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2Scale_026a7928);
          local_f0 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2CenterX_026a7930)
          ;
          local_f8 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark2CenterY_026a7938)
          ;
          dVar10 = dVar9;
          local_100 = dVar9;
        }
        else {
          dVar10 = local_100;
          if (local_cc == 3) {
            ppppuVar3 = (undefined8 ****)local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark3Enabled_026a78d0);
            local_cd = (byte)ppppuVar3;
            local_181 = 0;
            local_191 = 0;
            bVar1 = false;
            if ((local_b9 & 1) != 0) {
              ppppuVar3 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightImagePa_026a7940);
              _objc_retainAutoreleasedReturnValue();
              local_181 = 1;
              bVar1 = false;
              local_180 = ppppuVar3;
              if (ppppuVar3 != (undefined8 ****)0x0) {
                ppppuVar3 = (undefined8 ****)local_50;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_screenshotWatermark3NightImagePa_026a7940);
                _objc_retainAutoreleasedReturnValue();
                local_191 = 1;
                local_190 = ppppuVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar1 = ppppuVar3 != (undefined8 ****)0x0;
              }
            }
            dVar10 = dVar9;
            if ((local_191 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_190);
              dVar10 = dVar9;
            }
            if ((local_181 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_180);
            }
            if (bVar1) {
              ppppuVar3 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightImagePa_026a7940);
              _objc_retainAutoreleasedReturnValue();
              pppuVar2 = local_d8;
              local_d8 = ppppuVar3;
              (*(code *)PTR__objc_release_02578630)(pppuVar2);
              ppppuVar3 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightImagePa_026a7940);
              _objc_retainAutoreleasedReturnValue();
              ppppuVar5 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3ImagePath_026a7948);
              _objc_retainAutoreleasedReturnValue();
              ppppuVar6 = ppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)(ppppuVar3,PTR_s_isEqualToString__0269ccc8);
              local_101 = ((byte)ppppuVar6 ^ 1) & 1;
              (*(code *)PTR__objc_release_02578630)(ppppuVar5);
              (*(code *)PTR__objc_release_02578630)(ppppuVar3);
            }
            else {
              ppppuVar3 = (undefined8 ****)local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3ImagePath_026a7948);
              _objc_retainAutoreleasedReturnValue();
              pppuVar2 = local_d8;
              local_d8 = ppppuVar3;
              (*(code *)PTR__objc_release_02578630)(pppuVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark3Opacity_026a7950);
            ppppuVar3 = (undefined8 ****)local_50;
            local_e0 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark3BlendMode_026a7958);
            local_e8 = ppppuVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermark3Scale_026a7960)
            ;
            local_f0 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark3CenterX_026a7968);
            local_f8 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_screenshotWatermark3CenterY_026a7970);
            local_100 = dVar10;
          }
        }
        dVar9 = dVar8;
        if ((local_cd & 1) == 0) {
          local_44 = 4;
        }
        else if (((undefined8 ****)local_d8 == (undefined8 ****)0x0) ||
                (ppppuVar3 = (undefined8 ****)local_d8,
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), dVar9 = dVar8
                , ppppuVar3 == (undefined8 ****)0x0)) {
          local_44 = 4;
        }
        else {
          dVar9 = dVar12;
          if ((local_101 & 1) != 0) {
            if (local_cc == 1) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark1NightScale_026a7978);
              local_f0 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark1NightCenterX_026a7980);
              local_f8 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark1NightCenterY_026a7988);
              dVar9 = dVar12;
              local_100 = dVar10;
            }
            else if (local_cc == 2) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark2NightScale_026a7990);
              local_f0 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark2NightCenterX_026a7998);
              local_f8 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark2NightCenterY_026a79a0);
              dVar9 = dVar12;
              local_100 = dVar10;
            }
            else if (local_cc == 3) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightScale_026a79a8);
              local_f0 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightCenterX_026a79b0);
              local_f8 = dVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_screenshotWatermark3NightCenterY_026a79b8);
              dVar9 = dVar12;
              local_100 = dVar10;
            }
          }
          ppppuVar3 = (undefined8 ****)local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasPrefix__0269d320,&cf__);
          if (((ulong)ppppuVar3 & 1) == 0) {
            ppppuVar5 = (undefined8 ****)((long)&MACH_HEADER.cpusubtype + 1);
            _NSSearchPathForDirectoriesInDomains(9,1,1);
            _objc_retainAutoreleasedReturnValue();
            ppppuVar3 = ppppuVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = ppppuVar3;
            (*(code *)PTR__objc_release_02578630)(ppppuVar5);
            ppppuVar3 = (undefined8 ****)local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
            _objc_retainAutoreleasedReturnValue();
            pppuVar2 = local_d8;
            local_d8 = ppppuVar3;
            (*(code *)PTR__objc_release_02578630)(pppuVar2);
            _objc_storeStrong(&local_1a0,0);
          }
          puVar7 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = puVar7;
          if (puVar7 == (undefined *)0x0) {
            local_44 = 4;
            dVar12 = dVar9;
            dVar9 = dVar8;
          }
          else {
            if (local_e0 <= 0.0) {
              local_e0 = 0.15;
            }
            if (local_f0 <= 0.0) {
              puVar7 = PTR__OBJC_CLASS___UIScreen_026cdf70;
              dVar12 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar10 = dVar8;
              local_1d0 = dVar12;
              local_1c8 = dVar9;
              local_1c0 = dVar8;
              local_1b8 = dVar11;
              (*(code *)PTR__objc_release_02578630)(puVar7);
              puVar7 = PTR__OBJC_CLASS___UIScreen_026cdf70;
              local_1b0 = dVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1f8 = dVar8;
              local_1f0 = dVar10;
              local_1e8 = dVar9;
              local_1e0 = dVar12;
              (*(code *)PTR__objc_release_02578630)(puVar7);
              dVar11 = local_1b0;
              dVar10 = local_1b0;
              local_1d8 = dVar12;
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
              dVar8 = local_1d8;
              local_200 = dVar11 / dVar10;
              dVar11 = local_1d8;
              local_210 = dVar10;
              local_208 = dVar9;
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
              dVar9 = dVar8 / dVar10;
              local_230 = local_200;
              local_628 = dVar9;
              if (dVar9 <= local_200) {
                local_628 = local_200;
              }
              local_240 = local_628;
              local_f0 = local_628;
              local_238 = dVar9;
              local_228 = dVar11;
              local_220 = dVar10;
              local_218 = dVar9;
            }
            dVar11 = local_f8;
            if ((local_f8 <= 0.0) && (dVar11 = local_100, local_100 <= 0.0)) {
              dVar11 = 0.5;
              local_f8 = 0.5;
              local_100 = 0.5;
            }
            ppppuVar3 = (undefined8 ****)local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_blendModeFromValue__026a79c0,local_e8);
            pppuVar2 = local_30;
            local_244 = SUB84(ppppuVar3,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
            local_278 = dVar11;
            local_270 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
            dVar8 = local_278;
            dVar12 = local_270;
            local_288 = dVar9;
            local_280 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pppuVar2,PTR_s_calculateCustomWatermarkRect_ima_026a79c8);
            local_2b0 = dVar8;
            dStack_2a8 = dVar12;
            local_2a0 = dVar9;
            dStack_298 = dVar11;
            local_268 = dVar8;
            dStack_260 = dVar12;
            local_258 = dVar9;
            dStack_250 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar8,local_1a8,PTR_s_drawInRect_blendMode_alpha__026a79d0,local_244);
            local_44 = 0;
          }
          _objc_storeStrong(&local_1a8,0);
        }
        ppppuVar5 = &local_d8;
        _objc_storeStrong(ppppuVar5,0);
        dVar8 = dVar9;
      }
      _UIGraphicsGetImageFromCurrentImageContext(local_cc + -3);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = ppppuVar5;
      _UIGraphicsEndImageContext();
      pppuVar2 = local_2b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pppuVar2;
      local_44 = 1;
      _objc_storeStrong(&local_2b8);
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

