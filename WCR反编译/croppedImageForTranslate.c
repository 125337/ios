// croppedImageForTranslate @ 016779b4

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::croppedImageForTranslate(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  double in_d2;
  double dVar7;
  double in_d3;
  double local_228;
  double local_200;
  double local_1e8;
  undefined *local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined *local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double local_60;
  double dStack_58;
  byte local_41;
  undefined *local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_image_026ca678);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar1 = true;
  if (param_1 != 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
    bVar1 = puVar2 == (undefined *)0x0;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    local_28 = (undefined *)0x0;
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar5 = in_d2;
    local_60 = in_d2;
    dStack_58 = in_d3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = in_d2;
    local_88 = in_d1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((local_60 <= 0.0) || (dStack_58 <= 0.0)) || (local_90 <= 0.0)) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
    }
    else {
      dVar6 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageDisplayFrame_026b1f90);
      puVar2 = local_30;
      local_b0 = dVar6;
      dStack_a8 = in_d1;
      local_a0 = dVar5;
      dStack_98 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropRect_026b1ec0);
      _CGRectIsEmpty();
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropRect_026b1ec0);
        _CGRectIntersection();
        local_d0 = dVar6;
        dStack_c8 = in_d1;
        local_c0 = dVar5;
        dStack_b8 = in_d3;
      }
      else {
        dStack_c8 = dStack_a8;
        local_d0 = local_b0;
        dStack_b8 = dStack_98;
        local_c0 = local_a0;
      }
      _CGRectIsEmpty(local_d0,dStack_c8,local_c0,dStack_b8);
      if (((((ulong)puVar2 & 1) != 0) || (local_c0 < 2.0)) || (dStack_b8 < 2.0)) {
        local_28 = (undefined *)0x0;
      }
      else {
        local_120 = local_60 / local_90;
        local_128 = dStack_58 / local_88;
        local_1e8 = local_128;
        if (local_120 < local_128) {
          local_1e8 = local_120;
        }
        local_130 = local_1e8;
        local_118 = local_1e8;
        if (0.0 < local_1e8) {
          local_138 = (local_d0 - local_b0) / local_1e8;
          local_1e8 = (dStack_c8 - dStack_a8) / local_1e8;
          puVar2 = local_30;
          local_140 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_158 = 0x3ff0000000000000;
          local_200 = local_1e8;
          if (local_1e8 < 1.0) {
            local_200 = 1.0;
          }
          local_160 = local_200;
          local_148 = local_200;
          dVar5 = local_138 * local_200;
          dVar6 = local_140 * local_200;
          dVar7 = (local_c0 / local_118) * local_200;
          local_200 = (dStack_b8 / local_118) * local_200;
          local_150 = local_1e8;
          FUN_0163f5dc();
          puVar2 = local_30;
          local_180 = dVar5;
          local_178 = dVar6;
          local_170 = dVar7;
          local_168 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
          _CGImageCreateWithImageInRect(local_180,local_178,local_170,local_168);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_188 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_28 = (undefined *)0x0;
          }
          else {
            local_198 = local_148;
            puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
            dVar5 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_188;
            local_1b0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            local_228 = dVar5;
            if (dVar5 <= local_198) {
              local_228 = local_198;
            }
            local_1a8 = local_228;
            local_190 = local_228;
            puVar3 = local_30;
            local_1a0 = dVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_228,local_1b0,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar2,
                       puVar4);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _CGImageRelease(local_188);
            puVar2 = local_1b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = puVar2;
            _objc_storeStrong(&local_1b0,0);
          }
        }
        else {
          local_28 = (undefined *)0x0;
        }
      }
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

