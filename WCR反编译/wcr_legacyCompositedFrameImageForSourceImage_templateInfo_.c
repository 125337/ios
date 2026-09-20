// wcr_legacyCompositedFrameImageForSourceImage:templateInfo: @ 006f8fd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_legacyCompositedFrameImageForSourceImage_templateInfo_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d0;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *local_5b8;
  undefined *local_508;
  undefined *local_4e0;
  undefined *local_2b8;
  undefined1 auStack_2b0 [48];
  double local_280;
  double local_270;
  double local_260;
  double local_258;
  undefined8 local_250;
  double dStack_248;
  undefined8 local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
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
  undefined *local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined *local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined *local_128 [2];
  double local_118;
  double local_110;
  undefined4 local_104;
  undefined8 local_100;
  double dStack_f8;
  undefined8 local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  undefined *local_a0 [7];
  undefined8 local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
  dVar8 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
  dVar10 = 0.0;
  uVar7 = 0;
  FUN_006f8f30();
  puVar3 = PTR__OBJC_CLASS___CIImage_026ce890;
  puVar2 = PTR__OBJC_CLASS___CIColor_026ce898;
  local_68 = uVar7;
  dStack_60 = dVar10;
  local_58 = in_d0;
  dStack_50 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIColor_026ce898,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_imageWithColor__026a71e0);
  _objc_retainAutoreleasedReturnValue();
  dStack_b8 = dStack_60;
  local_c0 = local_68;
  puVar4 = puVar3;
  uVar7 = local_68;
  dVar8 = dStack_60;
  dVar10 = local_58;
  dVar12 = dStack_50;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0[0] = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_extent_026a71f0);
  local_100 = uVar7;
  dStack_f8 = dVar8;
  local_e0 = uVar7;
  dStack_d8 = dVar8;
  local_d0 = dVar10;
  dStack_c8 = dVar12;
  _CGRectIsEmpty(uVar7,dVar8,dVar10,dVar12);
  if (((((ulong)puVar3 & 1) == 0) && (FUN_00224fa4(local_d0), ((ulong)puVar3 & 1) != 0)) &&
     (FUN_00224fa4(), ((ulong)puVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
    puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    local_118 = dVar8;
    local_110 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_leftTop_026a7250);
    dVar10 = local_110;
    dVar12 = local_110;
    dVar9 = dVar8;
    local_138 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_leftTop_026a7250);
    dVar10 = dVar10 - dVar9;
    local_148 = dVar12;
    local_140 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    local_128[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rightTop_026a7260);
    dVar12 = local_110;
    dVar9 = local_110;
    dVar11 = dVar8;
    local_160 = dVar8;
    local_158 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rightTop_026a7260);
    dVar12 = dVar12 - dVar11;
    local_170 = dVar9;
    local_168 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_leftBottom_026a7268);
    dVar10 = local_110;
    dVar9 = local_110;
    dVar11 = dVar8;
    local_188 = dVar8;
    local_180 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_leftBottom_026a7268);
    dVar10 = dVar10 - dVar11;
    local_198 = dVar9;
    local_190 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    local_178 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rightBottom_026a7270);
    dVar12 = local_110;
    dVar9 = local_110;
    dVar11 = dVar8;
    local_1b0 = dVar8;
    local_1a8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rightBottom_026a7270);
    local_1c0 = dVar9;
    local_1b8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar8,dVar12 - dVar11,puVar2,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
    local_1a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
               &cf_CIPerspectiveTransformWithExtent);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setValue_forKey__0269d300,local_40,
               *(undefined8 *)PTR__kCIInputImageKey_02578700);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_setValue_forKey__0269d300,local_128[0],&cf_inputTopLeft);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_setValue_forKey__0269d300,local_150,&cf_inputTopRight);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_setValue_forKey__0269d300,local_178,&cf_inputBottomLeft);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_setValue_forKey__0269d300,local_1a0,&cf_inputBottomRight);
    puVar3 = local_1c8;
    dStack_1e8 = dStack_d8;
    local_1f0 = local_e0;
    dStack_1d8 = dStack_c8;
    local_1e0 = local_d0;
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    uVar7 = local_e0;
    dVar8 = dStack_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CIVector_026ce8a8,PTR_s_vectorWithCGRect__026a7238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputExtent);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_outputImage_026a7240);
    _objc_retainAutoreleasedReturnValue();
    local_4e0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_4e0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = local_4e0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
               &cf_CISourceOverCompositing);
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setValue_forKey__0269d300,local_1f8,
               *(undefined8 *)PTR__kCIInputImageKey_02578700);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_200,PTR_s_setValue_forKey__0269d300,local_a0[0],
               *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
    puVar3 = local_200;
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_outputImage_026a7240);
    _objc_retainAutoreleasedReturnValue();
    local_508 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_508 = local_a0[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = local_508;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___CIImage_026ce890;
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frameImage_026a7278);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGImage_0269e0e8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_imageWithCGImage__026a7280,uVar6);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_210 != (undefined *)0x0) {
      puVar3 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_extent_026a71f0);
      uVar1 = (uint)puVar3;
      local_250 = uVar7;
      dStack_248 = dVar8;
      local_230 = uVar7;
      dStack_228 = dVar8;
      local_220 = local_d0;
      dStack_218 = dStack_c8;
      _CGRectIsEmpty(uVar7,dVar8,local_d0,dStack_c8);
      if ((((uVar1 & 1) == 0) && (0.0 < local_220)) && (0.0 < dStack_218)) {
        dVar10 = dStack_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
        dVar10 = dVar10 / local_220;
        local_260 = dVar8;
        local_258 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
        puVar3 = local_210;
        local_270 = local_220 / dStack_218;
        local_280 = dVar10;
        _CGAffineTransformMakeScale(local_258,local_270);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_imageByApplyingTransform__026a7208,auStack_2b0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_210;
        local_210 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                 &cf_CISourceOverCompositing);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setValue_forKey__0269d300,local_210,
                 *(undefined8 *)PTR__kCIInputImageKey_02578700);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2b8,PTR_s_setValue_forKey__0269d300,local_208,
                 *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
      puVar3 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_outputImage_026a7240);
      _objc_retainAutoreleasedReturnValue();
      local_5b8 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_5b8 = local_208;
      }
      _objc_storeStrong(&local_208,local_5b8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_2b8,0);
    }
    puVar3 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,dStack_60,local_58,dStack_50,local_208,PTR_s_imageByCroppingToRect__026a71e8
              );
    _objc_retainAutoreleasedReturnValue();
    local_104 = 1;
    local_28 = puVar3;
    _objc_storeStrong(&local_210);
    _objc_storeStrong(&local_208,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(local_128,0);
  }
  else {
    puVar3 = local_a0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_104 = 1;
  }
  _objc_storeStrong(local_a0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

