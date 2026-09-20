// applyFrameToImage:secondImage: @ 00712a60

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineScreenshotFrameProcessor::applyFrameToImage_secondImage_
          (WCRefineScreenshotFrameProcessor *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  float in_s0;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined **local_a20;
  double local_5a8;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  double local_3c0;
  double local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  double dStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  double local_380;
  double dStack_378;
  undefined *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  undefined *local_348;
  undefined8 local_340;
  undefined8 local_338;
  double local_330;
  double local_328;
  undefined *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined *local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  double local_220;
  double dStack_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined *local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  byte local_121;
  undefined *local_120;
  double local_118;
  double local_110;
  double local_108;
  byte local_fa;
  undefined1 local_f9;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 local_a1;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88 [3];
  undefined *local_70;
  undefined4 local_64;
  ulong local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  if (local_58 == (undefined *)0x0) {
    local_40 = (undefined *)0x0;
    local_64 = 1;
  }
  else {
    puVar8 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_48;
    local_70 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
    _objc_retainAutoreleasedReturnValue();
    local_88[0] = IVar1;
    if ((IVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0), IVar1 == 0)) {
      puVar8 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar8;
      local_64 = 1;
    }
    else {
      IVar1 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_hasPrefix__0269d320,&cf__);
      if ((IVar1 & 1) == 0) {
        IVar2 = 9;
        _NSSearchPathForDirectoriesInDomains(9,1,1);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_90 = IVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_stringByAppendingPathComponent__026cab30,local_88[0]);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_88[0];
        local_88[0] = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        _objc_storeStrong(&local_90,0);
      }
      IVar2 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_hasSuffix__0269d018,&cf__);
      IVar1 = local_88[0];
      if ((IVar2 & 1) != 0) {
        IVar2 = local_88[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_substringToIndex__0269d6c0,IVar2 - 1);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_88[0];
        local_88[0] = IVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      IVar2 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_88[0];
      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_98 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = IVar1;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDarkMode_0269f410);
      IVar1 = local_88[0];
      local_a1 = (undefined1)IVar2;
      local_b0 = 0;
      if ((IVar2 & 1) != 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____dark_png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = IVar1;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_fileExistsAtPath__026ca630,local_b8);
        if (((ulong)puVar8 & 1) != 0) {
          _objc_storeStrong(&local_b0,local_b8);
        }
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_b8,0);
      }
      IVar1 = local_88[0];
      if (local_b0 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_b0;
        local_b0 = IVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630,local_b0);
      puVar8 = local_58;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = puVar8;
        local_64 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_b0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_58;
        local_d0 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = puVar8;
          local_64 = 1;
        }
        else {
          puVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_fileExistsAtPath__026ca630,local_a0);
          puVar8 = local_58;
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_40 = puVar8;
            local_64 = 1;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_a0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = local_58;
            local_d8 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_40 = puVar8;
              local_64 = 1;
            }
            else {
              local_e0 = 0;
              local_f0 = 0;
              puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                         PTR_s_JSONObjectWithData_options_error_026ca480,puVar3,0,&local_f0);
              _objc_retainAutoreleasedReturnValue();
              _objc_storeStrong(&local_e0,local_f0);
              local_40 = local_58;
              local_e8 = puVar8;
              if ((puVar8 == (undefined *)0x0) || (local_e0 != 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_64 = 1;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
                _objc_retainAutoreleasedReturnValue();
                local_f8 = puVar8;
                if ((puVar8 == (undefined *)0x0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_isEqualToString__0269ccc8,&cf_single),
                   ((ulong)puVar8 & 1) != 0)) {
                  _objc_storeStrong(&local_f8,&cf_single);
                }
                puVar8 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_isEqualToString__0269ccc8,&cf_double);
                local_f9 = SUB81(puVar8,0);
                local_fa = local_60 != 0;
                if ((((ulong)puVar8 & 1) != 0) && (!(bool)local_fa)) {
                  _objc_storeStrong(&local_f8,&cf_single);
                }
                puVar8 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                dVar10 = (double)in_s0;
                (*(code *)PTR__objc_release_02578630)(puVar8);
                puVar8 = local_e8;
                local_108 = dVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
                fVar9 = SUB84(dVar10,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                local_5a8 = (double)fVar9;
                (*(code *)PTR__objc_release_02578630)(puVar8);
                local_40 = local_58;
                local_110 = local_5a8;
                if ((local_108 <= 0.0) || (local_5a8 <= 0.0)) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_64 = 1;
                }
                else {
                  local_121 = 0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_scale_026ca830);
                  if (local_5a8 <= 0.0) {
                    puVar8 = PTR__OBJC_CLASS___UIScreen_026cdf70;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
                    _objc_retainAutoreleasedReturnValue();
                    local_121 = 1;
                    local_120 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)();
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_scale_026ca830);
                  }
                  if ((local_121 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_120);
                  }
                  local_118 = local_5a8;
                  dVar10 = local_108;
                  dVar11 = local_110;
                  FUN_0071542c();
                  uVar4 = 0;
                  local_138 = dVar10;
                  local_130 = dVar11;
                  _UIGraphicsBeginImageContextWithOptions(dVar10,dVar11,local_118);
                  _UIGraphicsGetCurrentContext();
                  local_140 = uVar4;
                  _CGContextSetInterpolationQuality(uVar4,3);
                  _CGContextSetShouldAntialias(local_140,1);
                  _CGContextSetAllowsAntialiasing(local_140,1);
                  _CGContextTranslateCTM(0,local_110,local_140);
                  fVar9 = 0.0;
                  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,local_140);
                  puVar8 = PTR__OBJC_CLASS___CIContext_026ce860;
                  local_38 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_025786e8;
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_30 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_contextWithOptions__026a6da8);
                  _objc_retainAutoreleasedReturnValue();
                  local_148 = puVar8;
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  puVar8 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_150 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_158 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_160 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_168 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_170 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_178 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar10 = (double)fVar9;
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_e8;
                  local_180 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
                  fVar9 = SUB84(dVar10,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_58;
                  local_188 = (double)fVar9;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGImage_0269e0e8);
                  _CGImageGetWidth();
                  puVar3 = local_58;
                  local_190 = (double)puVar8;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGImage_0269e0e8);
                  _CGImageGetHeight();
                  puVar5 = local_58;
                  puVar8 = PTR__OBJC_CLASS___CIImage_026ce890;
                  local_198 = (double)puVar3;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGImage_0269e0e8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_imageWithCGImage__026a7280,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_1a8 = local_110 - local_158;
                  local_1b0 = local_110 - local_168;
                  local_1b8 = local_110 - local_178;
                  local_1c0 = local_110 - local_188;
                  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                  local_1a0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,local_1a8,PTR__OBJC_CLASS___CIVector_026ce8a8,
                             PTR_s_vectorWithX_Y__026a7258);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                  local_1c8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,local_1b0,PTR__OBJC_CLASS___CIVector_026ce8a8,
                             PTR_s_vectorWithX_Y__026a7258);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                  local_1d0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,local_1b8,PTR__OBJC_CLASS___CIVector_026ce8a8,
                             PTR_s_vectorWithX_Y__026a7258);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                  local_1d8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_180,local_1c0,PTR__OBJC_CLASS___CIVector_026ce8a8,
                             PTR_s_vectorWithX_Y__026a7258);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
                  local_1e0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                             &cf_CIPerspectiveTransformWithExtent);
                  _objc_retainAutoreleasedReturnValue();
                  local_1e8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_setValue_forKey__0269d300,local_1a0,
                             *(undefined8 *)PTR__kCIInputImageKey_02578700);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_setValue_forKey__0269d300,local_1c8,&cf_inputTopLeft);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_setValue_forKey__0269d300,local_1d0,&cf_inputTopRight);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_setValue_forKey__0269d300,local_1d8,&cf_inputBottomLeft
                            );
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_setValue_forKey__0269d300,local_1e0,
                             &cf_inputBottomRight);
                  puVar3 = local_1e8;
                  puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                  uVar12 = 0;
                  uVar4 = 0;
                  dVar10 = local_190;
                  dVar11 = local_198;
                  FUN_00715458();
                  local_208 = uVar4;
                  local_200 = uVar12;
                  local_1f8 = dVar10;
                  local_1f0 = dVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_vectorWithCGRect__026a7238);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_setValue_forKey__0269d300,puVar8,&cf_inputExtent);
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  puVar8 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_outputImage_026a7240);
                  _objc_retainAutoreleasedReturnValue();
                  local_210 = puVar8;
                  if (puVar8 != (undefined *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_extent_026a71f0);
                    puVar8 = local_148;
                    local_230 = uVar4;
                    uStack_228 = uVar12;
                    local_220 = dVar10;
                    dStack_218 = dVar11;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar4,uVar12,dVar10,dVar11,local_148,
                               PTR_s_createCGImage_fromRect__026a7760,local_210);
                    local_238 = puVar8;
                    if (puVar8 != (undefined *)0x0) {
                      uVar4 = local_230;
                      _CGContextDrawImage(local_230,uStack_228,local_220,dStack_218,local_140,puVar8
                                         );
                      _CGImageRelease(local_238);
                    }
                  }
                  fVar9 = (float)uVar4;
                  puVar8 = local_f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_isEqualToString__0269ccc8,&cf_double);
                  if ((((ulong)puVar8 & 1) != 0) && ((local_fa & 1) != 0)) {
                    puVar8 = local_e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_288 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_290 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x2);
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_298 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y2);
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_2a0 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x2);
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_2a8 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y2);
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_2b0 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x2)
                    ;
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    dVar10 = (double)fVar9;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_e8;
                    local_2b8 = dVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y2)
                    ;
                    fVar9 = SUB84(dVar10,0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    uVar6 = local_60;
                    local_2c0 = (double)fVar9;
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGImage_0269e0e8);
                    _CGImageGetWidth();
                    uVar7 = local_60;
                    local_2c8 = (double)uVar6;
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_CGImage_0269e0e8);
                    _CGImageGetHeight();
                    uVar6 = local_60;
                    puVar8 = PTR__OBJC_CLASS___CIImage_026ce890;
                    local_2d0 = (double)uVar7;
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGImage_0269e0e8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_imageWithCGImage__026a7280,uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    local_2e0 = local_110 - local_290;
                    local_2e8 = local_110 - local_2a0;
                    local_2f0 = local_110 - local_2b0;
                    local_2f8 = local_110 - local_2c0;
                    puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                    local_2d8 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_288,local_2e0,PTR__OBJC_CLASS___CIVector_026ce8a8,
                               PTR_s_vectorWithX_Y__026a7258);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                    local_300 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_298,local_2e8,PTR__OBJC_CLASS___CIVector_026ce8a8,
                               PTR_s_vectorWithX_Y__026a7258);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                    local_308 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2a8,local_2f0,PTR__OBJC_CLASS___CIVector_026ce8a8,
                               PTR_s_vectorWithX_Y__026a7258);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                    local_310 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2b8,local_2f8,PTR__OBJC_CLASS___CIVector_026ce8a8,
                               PTR_s_vectorWithX_Y__026a7258);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
                    local_318 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                               &cf_CIPerspectiveTransformWithExtent);
                    _objc_retainAutoreleasedReturnValue();
                    local_320 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_setValue_forKey__0269d300,local_2d8,
                               *(undefined8 *)PTR__kCIInputImageKey_02578700);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_320,PTR_s_setValue_forKey__0269d300,local_300,&cf_inputTopLeft)
                    ;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_320,PTR_s_setValue_forKey__0269d300,local_308,&cf_inputTopRight
                              );
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_320,PTR_s_setValue_forKey__0269d300,local_310,
                               &cf_inputBottomLeft);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_320,PTR_s_setValue_forKey__0269d300,local_318,
                               &cf_inputBottomRight);
                    puVar3 = local_320;
                    puVar8 = PTR__OBJC_CLASS___CIVector_026ce8a8;
                    uVar12 = 0;
                    uVar4 = 0;
                    dVar10 = local_2c8;
                    dVar11 = local_2d0;
                    FUN_00715458();
                    local_340 = uVar4;
                    local_338 = uVar12;
                    local_330 = dVar10;
                    local_328 = dVar11;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_vectorWithCGRect__026a7238);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_setValue_forKey__0269d300,puVar8,&cf_inputExtent);
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    puVar8 = local_320;
                    (*(code *)PTR__objc_msgSend_02578628)(local_320,PTR_s_outputImage_026a7240);
                    _objc_retainAutoreleasedReturnValue();
                    local_348 = puVar8;
                    if (puVar8 != (undefined *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_extent_026a71f0);
                      puVar8 = local_148;
                      local_390 = uVar4;
                      uStack_388 = uVar12;
                      local_380 = dVar10;
                      dStack_378 = dVar11;
                      local_368 = uVar4;
                      uStack_360 = uVar12;
                      local_358 = dVar10;
                      dStack_350 = dVar11;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar4,uVar12,dVar10,dVar11,local_148,
                                 PTR_s_createCGImage_fromRect__026a7760,local_348);
                      local_370 = puVar8;
                      if (puVar8 != (undefined *)0x0) {
                        uStack_3a8 = uStack_360;
                        local_3b0 = local_368;
                        dStack_398 = dStack_350;
                        local_3a0 = local_358;
                        _CGContextDrawImage(local_368,uStack_360,local_358,dStack_350,local_140,
                                            puVar8);
                        _CGImageRelease(local_370);
                      }
                    }
                    _objc_storeStrong(&local_348);
                    _objc_storeStrong(&local_320,0);
                    _objc_storeStrong(&local_318,0);
                    _objc_storeStrong(&local_310,0);
                    _objc_storeStrong(&local_308,0);
                    _objc_storeStrong(&local_300,0);
                    _objc_storeStrong(&local_2d8,0);
                  }
                  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,local_140);
                  _CGContextTranslateCTM(0,-local_110,local_140);
                  puVar8 = local_d0;
                  uVar12 = 0;
                  uVar4 = 0;
                  dVar10 = local_108;
                  dVar11 = local_110;
                  FUN_00715458();
                  local_3d0 = uVar4;
                  local_3c8 = uVar12;
                  local_3c0 = dVar10;
                  local_3b8 = dVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar4,uVar12,dVar10,dVar11,puVar8,PTR_s_drawInRect__026ca610);
                  _UIGraphicsGetImageFromCurrentImageContext();
                  _objc_retainAutoreleasedReturnValue();
                  local_3d8 = puVar8;
                  _UIGraphicsEndImageContext();
                  if (local_3d8 == (undefined *)0x0) {
                    local_a20 = &local_58;
                  }
                  else {
                    local_a20 = &local_3d8;
                  }
                  puVar8 = *local_a20;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_64 = 1;
                  local_40 = puVar8;
                  _objc_storeStrong(&local_3d8);
                  _objc_storeStrong(&local_210,0);
                  _objc_storeStrong(&local_1e8,0);
                  _objc_storeStrong(&local_1e0,0);
                  _objc_storeStrong(&local_1d8,0);
                  _objc_storeStrong(&local_1d0,0);
                  _objc_storeStrong(&local_1c8,0);
                  _objc_storeStrong(&local_1a0,0);
                  _objc_storeStrong(&local_148,0);
                }
                _objc_storeStrong(&local_f8,0);
              }
              _objc_storeStrong(&local_e8);
              _objc_storeStrong(&local_e0,0);
            }
            _objc_storeStrong(&local_d8,0);
          }
        }
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(local_88);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

