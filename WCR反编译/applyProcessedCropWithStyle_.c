// applyProcessedCropWithStyle: @ 0167c7ac

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::applyProcessedCropWithStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  undefined8 in_d1;
  double dVar5;
  double dVar6;
  double in_d3;
  double local_1c8;
  ID local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_120;
  double local_118;
  double local_100;
  double local_e8;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureCropSelection_026b24b8);
  local_40 = local_28;
  if ((param_1 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_croppedImageForTranslate_026b24c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_processedImage_style__026b27a0,IVar2,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    if ((local_40 == 0) || (IVar2 == 0)) {
      local_4c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_size_026cab00);
      local_60 = in_d0;
      local_58 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scale_026ca830);
      _UIGraphicsBeginImageContextWithOptions(local_60,local_58,0);
      dVar3 = *(double *)PTR__CGPointZero_025782e0;
      dVar5 = *(double *)(PTR__CGPointZero_025782e0 + 8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_drawAtPoint__026b22f8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageDisplayFrame_026b1f90);
      IVar2 = local_28;
      local_80 = dVar3;
      local_78 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = in_d0;
      local_b0 = dVar3;
      local_a8 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_size_026cab00);
      in_d0 = in_d0 / dVar4;
      local_b8 = dVar5;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      local_90 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar3 = in_d3;
      dVar5 = in_d3;
      local_e8 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_size_026cab00);
      in_d3 = in_d3 / dVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_1c8 = in_d3;
      if (local_90 < in_d3) {
        local_1c8 = local_90;
      }
      local_100 = local_1c8;
      local_88 = local_1c8;
      local_c8 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropRect_026b1ec0);
      local_140 = local_1c8;
      local_138 = in_d3;
      _CGRectIntersection();
      dVar4 = (local_1c8 - local_80) / local_88;
      dVar6 = (in_d3 - local_78) / local_88;
      dVar3 = dVar3 / local_88;
      dVar5 = dVar5 / local_88;
      local_120 = local_1c8;
      local_118 = in_d3;
      FUN_0163f5dc();
      IVar2 = local_40;
      local_160 = dVar4;
      local_158 = dVar6;
      local_150 = dVar3;
      local_148 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar6,dVar3,dVar5,local_40,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_168 = IVar2;
      _UIGraphicsEndImageContext();
      if (local_168 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImage__026ca978,local_168);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_invalidatePostProcessPipeline_026b2300)
        ;
        pcVar1 = &cf__S__j_;
        if (local_38 != 1) {
          pcVar1 = &cf__S_Sbx;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      }
      _objc_storeStrong(&local_168,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

