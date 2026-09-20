// stampMosaicAtViewPoint: @ 0167f190

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatCropViewController::stampMosaicAtViewPoint_
               (ID param_1,SEL param_2,CGPoint param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double in_d1;
  double dVar12;
  undefined8 uVar13;
  double in_d2;
  double in_d3;
  double local_438;
  double local_430;
  double local_400;
  double local_3e8;
  double local_300;
  double local_2f8;
  ID local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined *local_238;
  double local_230;
  double local_228;
  undefined4 local_21c;
  double local_218;
  double local_210;
  undefined8 local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  ID local_1e8;
  undefined *local_1e0;
  ID local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_e8;
  double local_c8;
  double local_90;
  double local_88;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_image_026ca678,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageDisplayFrame_026b1f90);
    _CGRectInset();
    _CGRectContainsPoint();
    if ((IVar2 & 1) != 0) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar3 = local_38;
      dVar7 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      in_d2 = in_d2 / dVar7;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_38;
      local_90 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar3 = local_38;
      local_e8 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      in_d3 = in_d3 / dVar7;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_2f8 = in_d3;
      if (local_90 < in_d3) {
        local_2f8 = local_90;
      }
      local_100 = local_2f8;
      local_88 = local_2f8;
      if (0.0 < local_2f8) {
        dVar7 = 10.0;
        local_110 = 10.0;
        local_c8 = in_d3;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mosaicBrushSize_026b2780);
        local_118 = dVar7 / local_88;
        local_300 = local_118;
        if (local_118 <= local_110) {
          local_300 = local_110;
        }
        local_120 = local_300;
        local_108 = local_300;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imagePointFromViewPoint__026b2830);
        dVar8 = local_30 - local_108 * 0.5;
        dVar12 = local_28 - local_108 * 0.5;
        dVar7 = local_108;
        dVar10 = local_108;
        FUN_0163f5dc();
        IVar2 = local_38;
        local_150 = dVar8;
        dStack_148 = dVar12;
        local_140 = dVar7;
        dStack_138 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar3 = local_38;
        dVar7 = dVar8;
        local_1a0 = dVar8;
        local_198 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar13 = 0;
        uVar9 = 0;
        local_1b0 = dVar7;
        local_1a8 = dVar12;
        FUN_0163f5dc();
        local_190 = uVar9;
        local_188 = uVar13;
        local_180 = dVar8;
        local_178 = dVar12;
        _CGRectIntersection();
        local_170 = local_150;
        dStack_168 = dStack_148;
        local_160 = local_140;
        dStack_158 = dStack_138;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)();
        _CGRectIsEmpty(local_150,dStack_148,local_140,dStack_138);
        dVar7 = local_150;
        if ((((IVar2 & 1) == 0) && (2.0 <= local_140)) && (2.0 <= dStack_138)) {
          IVar2 = local_38;
          dVar8 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar10 = dStack_148;
          dVar7 = dVar7 * dVar8;
          IVar3 = local_38;
          dVar12 = dStack_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar8 = local_140;
          dVar10 = dVar10 * dVar12;
          IVar4 = local_38;
          dVar11 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = dStack_138;
          dVar8 = dVar8 * dVar11;
          IVar5 = local_38;
          dVar11 = dStack_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = dVar12 * dVar11;
          FUN_0163f5dc();
          local_1d0 = dVar7;
          local_1c8 = dVar10;
          local_1c0 = dVar8;
          local_1b8 = dVar12;
          (*(code *)PTR__objc_release_02578630)(IVar5);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          IVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          IVar3 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_CGImage_0269e0e8);
          dVar7 = local_1d0;
          _CGImageCreateWithImageInRect(local_1d0,local_1c8,local_1c0,local_1b8);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          local_1e0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          if (IVar3 != 0) {
            IVar2 = local_38;
            local_1d8 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            IVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar7,local_1e0,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,IVar3,IVar5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(IVar4);
            (*(code *)PTR__objc_release_02578630)(IVar2);
            _CGImageRelease(local_1d8);
            local_1e8 = 0;
            IVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mosaicBrushStyle_026b27a8);
            if (IVar2 == 1) {
              local_1f0 = 0x4010000000000000;
              dVar7 = local_108 / 3.5;
              local_3e8 = dVar7;
              if (dVar7 <= 4.0) {
                local_3e8 = 4.0;
              }
              local_200 = local_3e8;
              IVar3 = local_38;
              local_1f8 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_blurImage_radius__026b2788,local_1e0);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = local_1e8;
              local_1e8 = IVar3;
              (*(code *)PTR__objc_release_02578630)(IVar2);
            }
            else {
              local_208 = 0x4018000000000000;
              dVar7 = local_108 / 4.5;
              local_400 = dVar7;
              if (dVar7 <= 6.0) {
                local_400 = 6.0;
              }
              local_218 = local_400;
              IVar3 = local_38;
              local_210 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_pixelateImage_scale__026b2790,local_1e0);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = local_1e8;
              local_1e8 = IVar3;
              (*(code *)PTR__objc_release_02578630)(IVar2);
              local_3e8 = local_400;
            }
            if (local_1e8 == 0) {
              local_21c = 1;
            }
            else {
              IVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              IVar3 = local_38;
              local_230 = local_3e8;
              local_228 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              _UIGraphicsBeginImageContextWithOptions(local_230,local_228,local_3e8,0);
              (*(code *)PTR__objc_release_02578630)(IVar3);
              (*(code *)PTR__objc_release_02578630)(IVar2);
              IVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)PTR__CGPointZero_025782e0,
                         *(undefined8 *)(PTR__CGPointZero_025782e0 + 8));
              (*(code *)PTR__objc_release_02578630)(IVar2);
              puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,dStack_148,local_140,dStack_138,
                         PTR__OBJC_CLASS___UIBezierPath_026ce268,
                         PTR_s_bezierPathWithOvalInRect__026ca528);
              _objc_retainAutoreleasedReturnValue();
              local_238 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addClip_026ca4a0);
              IVar2 = local_1e8;
              local_240 = DAT_02323c68;
              dVar7 = 1.0;
              local_250 = 1.0;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mosaicBrushOpacity_026b2798);
              local_430 = dVar7;
              if (local_250 < dVar7) {
                local_430 = local_250;
              }
              local_260 = local_430;
              local_248 = local_430;
              if (local_430 <= local_240) {
                local_438 = local_240;
              }
              else {
                local_438 = local_430;
              }
              local_268 = local_438;
              local_258 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,dStack_148,local_140,dStack_138,local_438,IVar2,
                         PTR_s_drawInRect_blendMode_alpha__026a79d0,0);
              _UIGraphicsGetImageFromCurrentImageContext();
              _objc_retainAutoreleasedReturnValue();
              local_270 = IVar2;
              _UIGraphicsEndImageContext();
              if (local_270 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImage__026ca978,local_270);
                IVar2 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageView_0269f230);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar2);
                IVar2 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_postProcessBaseImage_026b2518);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                if (IVar2 == 0) {
                  IVar3 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_postProcessEffects_026b2508);
                  _objc_retainAutoreleasedReturnValue();
                  IVar4 = IVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = IVar4 != 0;
                  (*(code *)PTR__objc_release_02578630)(IVar3);
                }
                (*(code *)PTR__objc_release_02578630)(IVar2);
                if (bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_38,PTR_s_invalidatePostProcessPipeline_026b2300);
                }
              }
              _objc_storeStrong(&local_270);
              _objc_storeStrong(&local_238,0);
              local_21c = 0;
            }
            _objc_storeStrong(&local_1e8);
            _objc_storeStrong(&local_1e0,0);
          }
        }
      }
    }
  }
  return;
}

