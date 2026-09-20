// processedImage:style: @ 0167c354

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRSuperFloatCropViewController::processedImage_style_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3,long_long param_4
          )

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  ID local_158;
  double local_148;
  double local_140;
  ID local_128;
  double local_118;
  double local_100;
  double local_e8;
  ID local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined4 local_8c;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  ID local_58;
  double local_50;
  long_long local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mosaicBrushSize_026b2780);
  if (in_d0 <= 0.0) {
    local_e8 = 32.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mosaicBrushSize_026b2780);
    local_e8 = in_d0;
  }
  local_50 = local_e8;
  local_58 = 0;
  if (local_48 == 1) {
    local_60 = 0x4000000000000000;
    local_68 = local_e8 / 2.0;
    local_100 = local_68;
    if (local_68 <= 2.0) {
      local_100 = 2.0;
    }
    local_70 = local_100;
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_blurImage_radius__026b2788,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    local_58 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    local_78 = 0x4018000000000000;
    local_80 = local_e8 / 1.5;
    local_118 = local_80;
    if (local_80 <= 6.0) {
      local_118 = 6.0;
    }
    local_88 = local_118;
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pixelateImage_scale__026b2790,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    local_58 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_100 = local_118;
  }
  if ((local_58 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mosaicBrushOpacity_026b2798),
     DAT_02324348 <= local_100)) {
    if (local_58 == 0) {
      local_128 = local_40;
    }
    else {
      local_128 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_128;
    local_8c = 1;
  }
  else {
    dVar3 = DAT_02324348;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_a0 = local_100;
    local_98 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
    _UIGraphicsBeginImageContextWithOptions(local_a0,local_98,local_100,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGPointZero_025782e0,
               *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_40,PTR_s_drawAtPoint__026b22f8);
    IVar2 = local_58;
    local_a8 = 0.0;
    dVar3 = 1.0;
    local_b8 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mosaicBrushOpacity_026b2798);
    local_140 = dVar3;
    if (local_b8 < dVar3) {
      local_140 = local_b8;
    }
    local_c8 = local_140;
    local_b0 = local_140;
    if (local_140 <= local_a8) {
      local_148 = local_a8;
    }
    else {
      local_148 = local_140;
    }
    local_d0 = local_148;
    local_c0 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGPointZero_025782e0,
               *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_148,IVar2,
               PTR_s_drawAtPoint_blendMode_alpha__026a8c98,0);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = IVar2;
    _UIGraphicsEndImageContext();
    if (local_d8 == 0) {
      local_158 = local_58;
    }
    else {
      local_158 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_158;
    local_8c = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

