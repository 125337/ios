// wcr_videoWatermarkLayers @ 00707174

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_videoWatermarkLayers(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double local_268;
  undefined *local_208;
  undefined *local_f0;
  undefined4 local_e8;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  ID local_d0;
  ID local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  byte local_61;
  long local_60;
  undefined *local_58 [3];
  byte local_39;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isDarkMode_026a7438);
  local_39 = (byte)IVar3;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_60 = 1;
  local_58[0] = puVar2;
  do {
    puVar2 = local_58[0];
    if (3 < local_60) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = 1;
      _objc_storeStrong(local_58);
      _objc_storeStrong(&local_38,0);
      _objc_autoreleaseReturnValue();
      return (ID)puVar2;
    }
    local_61 = 0;
    local_70 = 0.15;
    local_78 = 0.0;
    dVar7 = 0.5;
    local_80 = 0.5;
    local_88 = 0.5;
    local_90 = (undefined *)0x0;
    if (local_60 == 1) {
      local_99 = 0;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1Enabled_026a74b0);
      bVar1 = false;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1ImagePath_026a74b8);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar2 != (undefined *)0x0;
      }
      local_61 = bVar1;
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1Opacity_026a74c0);
      local_70 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1Scale_026a74c8);
      local_78 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1CenterX_026a74d0);
      local_80 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1CenterY_026a74d8);
      puVar2 = local_38;
      local_88 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark1BlendMode_026a74e0);
      local_90 = puVar2;
    }
    else if (local_60 == 2) {
      local_a9 = 0;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2Enabled_026a74e8);
      bVar1 = false;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2ImagePath_026a74f0);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar2 != (undefined *)0x0;
      }
      local_61 = bVar1;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2Opacity_026a74f8);
      local_70 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2Scale_026a7500);
      local_78 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2CenterX_026a7508);
      local_80 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2CenterY_026a7510);
      puVar2 = local_38;
      local_88 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark2BlendMode_026a7518);
      local_90 = puVar2;
    }
    else if (local_60 == 3) {
      local_b9 = 0;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3Enabled_026a7520);
      bVar1 = false;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3ImagePath_026a7528);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar2 != (undefined *)0x0;
      }
      local_61 = bVar1;
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3Opacity_026a7530);
      local_70 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3Scale_026a7538);
      local_78 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3CenterX_026a7540);
      local_80 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3CenterY_026a7548);
      puVar2 = local_38;
      local_88 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoWatermark3BlendMode_026a7550);
      local_90 = puVar2;
    }
    if ((local_61 & 1) != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_effectiveVideoWatermarkPathF_026a7558,local_60,local_39 & 1);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      local_c8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_absolutePathForDocumentsRela_026a7560,IVar3);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 0;
      local_d0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
      if (IVar4 == 0) {
        local_208 = (undefined *)0x0;
      }
      else {
        local_208 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_d0);
        _objc_retainAutoreleasedReturnValue();
        local_e1 = 1;
        local_e0 = local_208;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_208;
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      puVar2 = local_d8;
      if (local_d8 == (undefined *)0x0) {
LAB_007079fc:
        local_e8 = 4;
      }
      else {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
        if (puVar2 == (undefined *)0x0) goto LAB_007079fc;
        puVar5 = PTR_WCRefineScreenRecordingVideoWatermarkLayer_026ce8d0;
        _objc_alloc_init();
        puVar6 = local_d8;
        puVar2 = PTR__OBJC_CLASS___CIImage_026ce890;
        local_f0 = puVar5;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGImage_0269e0e8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithCGImage__026a7280,puVar6);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setImage__026ca978);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_size_026cab00);
        (*(code *)PTR__objc_msgSend_02578628)(dVar7,local_f0,PTR_s_setImageSize__026a7568);
        if (0.0 < local_70) {
          local_268 = local_70;
        }
        else {
          local_268 = 0.15;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_268,local_f0,PTR_s_setOpacity__026ca9f0);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,local_f0,PTR_s_setScale__026caa28);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,local_f0,PTR_s_setCenterX__026a10e0);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,local_f0,PTR_s_setCenterY__026a7570);
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBlendMode__026a7578,local_90);
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_addObject__0269d180,local_f0);
        _objc_storeStrong(&local_f0,0);
        local_e8 = 0;
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
    }
    local_60 = local_60 + 1;
  } while( true );
}

