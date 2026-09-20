// wcr_compositedFrameImageForSourceImage:templateInfo: @ 006f7f8c

/* Function Stack Size: 0x20 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_compositedFrameImageForSourceImage_templateInfo_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  double dVar5;
  double in_d1;
  double in_d2;
  double in_d3;
  undefined *local_4b0;
  undefined *local_480;
  undefined *local_460;
  undefined *local_330;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  undefined *local_220;
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [48];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined *local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  byte local_139;
  undefined *local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8 [5];
  double local_c0;
  double dStack_b8;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined4 local_58;
  undefined *local_48;
  undefined *local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedOutputRect_026a71d0);
    uVar1 = (uint)puVar2;
    local_80 = in_d0;
    dStack_78 = in_d1;
    local_70 = in_d2;
    dStack_68 = in_d3;
    _CGRectIsEmpty();
    if ((((uVar1 & 1) != 0) || (in_d0 = local_70, local_70 <= 0.0)) ||
       (in_d0 = dStack_68, dStack_68 <= 0.0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
      dVar5 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
      in_d2 = 0.0;
      in_d3 = 0.0;
      FUN_006f8f30();
      in_d1 = in_d0;
      local_c0 = in_d3;
      dStack_b8 = in_d2;
      local_80 = in_d3;
      dStack_78 = in_d2;
      local_70 = in_d0;
      dStack_68 = dVar5;
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedBackgroundImage_026a71d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CIImage_026ce890;
    local_f1 = 0;
    local_101 = 0;
    local_139 = 0;
    local_330 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___CIColor_026ce898;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIColor_026ce898,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithColor__026a71e0);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      dStack_128 = dStack_78;
      local_130 = local_80;
      dStack_118 = dStack_68;
      local_120 = local_70;
      in_d0 = local_80;
      in_d1 = dStack_78;
      in_d2 = local_70;
      in_d3 = dStack_68;
      local_100 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_330 = puVar2;
      local_138 = puVar2;
    }
    local_139 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8[0] = local_330;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_extent_026a71f0);
    local_180 = in_d0;
    dStack_178 = in_d1;
    local_170 = in_d2;
    dStack_168 = in_d3;
    local_160 = in_d0;
    dStack_158 = in_d1;
    local_150 = in_d2;
    dStack_148 = in_d3;
    _CGRectIsEmpty(in_d0);
    if (((((ulong)puVar2 & 1) == 0) && (FUN_00224fa4(local_150), ((ulong)puVar2 & 1) != 0)) &&
       (dVar5 = dStack_148, FUN_00224fa4(), ((ulong)puVar2 & 1) != 0)) {
      local_188 = (undefined *)0x0;
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedUseAffineVideoRect_026a71f8);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedAffineVideoRect_026a7200);
        local_1b0 = in_d2 / local_150;
        local_1b8 = in_d3 / dStack_148;
        local_1a8 = dVar5;
        local_1a0 = in_d1;
        local_198 = in_d2;
        local_190 = in_d3;
        FUN_00224fa4(local_1b0);
        if (((((ulong)puVar2 & 1) != 0) && (FUN_00224fa4(local_1b8), ((ulong)puVar2 & 1) != 0)) &&
           ((0.0 < local_1b0 && (0.0 < local_1b8)))) {
          FUN_006f8f7c(auStack_1e8,local_1b0,0,0,local_1b8,local_1a8 - local_160 * local_1b0,
                       local_1a0 - dStack_158 * local_1b8);
          puVar3 = local_40;
          _memcpy(auStack_218,auStack_1e8,0x30);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_imageByApplyingTransform__026a7208,auStack_218);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_188;
          local_188 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      if (local_188 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                   &cf_CIPerspectiveTransformWithExtent);
        _objc_retainAutoreleasedReturnValue();
        local_220 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,local_40,
                   *(undefined8 *)PTR__kCIInputImageKey_02578700);
        puVar2 = local_220;
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedTopLeft_026a7218);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputTopLeft);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_220;
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedTopRight_026a7220);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputTopRight);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_220;
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedBottomLeft_026a7228);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputBottomLeft);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_220;
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedBottomRight_026a7230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputBottomRight);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_220;
        dStack_238 = dStack_158;
        local_240 = local_160;
        dStack_228 = dStack_148;
        local_230 = local_150;
        puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,dStack_158,local_150,dStack_148,PTR__OBJC_CLASS___CIVector_026ce8a8,
                   PTR_s_vectorWithCGRect__026a7238);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputExtent);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_outputImage_026a7240);
        _objc_retainAutoreleasedReturnValue();
        local_460 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_460 = local_40;
        }
        _objc_storeStrong(&local_188,local_460);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_220,0);
      }
      puVar2 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                 &cf_CISourceOverCompositing);
      _objc_retainAutoreleasedReturnValue();
      local_248 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forKey__0269d300,local_188,
                 *(undefined8 *)PTR__kCIInputImageKey_02578700);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_setValue_forKey__0269d300,local_e8[0],
                 *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
      puVar2 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_outputImage_026a7240);
      _objc_retainAutoreleasedReturnValue();
      local_480 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_480 = local_e8[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = local_480;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_preparedFrameImage_026a7248);
      _objc_retainAutoreleasedReturnValue();
      local_258 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                   &cf_CISourceOverCompositing);
        _objc_retainAutoreleasedReturnValue();
        local_260 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setValue_forKey__0269d300,local_258,
                   *(undefined8 *)PTR__kCIInputImageKey_02578700);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_260,PTR_s_setValue_forKey__0269d300,local_250,
                   *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
        puVar2 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_outputImage_026a7240);
        _objc_retainAutoreleasedReturnValue();
        local_4b0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_4b0 = local_250;
        }
        _objc_storeStrong(&local_250,local_4b0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_260,0);
      }
      puVar2 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,dStack_78,local_70,dStack_68,local_250,
                 PTR_s_imageByCroppingToRect__026a71e8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = puVar2;
      _objc_storeStrong(&local_258);
      _objc_storeStrong(&local_250,0);
      _objc_storeStrong(&local_248,0);
      _objc_storeStrong(&local_188,0);
    }
    else {
      puVar2 = local_e8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_58 = 1;
    }
    _objc_storeStrong(local_e8,0);
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcr_legacyCompositedFrameImageFo_026a71b8,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 1;
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

