// blurImage:radius: @ 0167bedc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRSuperFloatCropViewController::blurImage_radius_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_150;
  undefined *local_120;
  double local_100;
  bool local_c1;
  undefined *local_c0;
  undefined *local_b8;
  double local_b0;
  double local_a8;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  double local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar1 = local_40;
  local_48 = param_4;
  if (local_40 != (undefined *)0x0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGImage_0269e0e8);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___CIImage_026ce890;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                 &cf_CIGaussianBlur);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forKey__0269d300,local_58,
                 *(undefined8 *)PTR__kCIInputImageKey_02578700);
      puVar1 = local_60;
      local_68 = 0x4000000000000000;
      local_70 = local_48;
      if (local_48 <= 2.0) {
        local_100 = 2.0;
      }
      else {
        local_100 = local_48;
      }
      local_78 = local_100;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      dVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_setValue_forKey__0269d300,puVar2,
                 *(undefined8 *)PTR__kCIInputRadiusKey_02578708);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_outputImage_026a7240);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___CIContext_026ce860;
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIContext_026ce860,PTR_s_contextWithOptions__026a6da8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_80;
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_extent_026a71f0);
      local_b0 = local_100;
      local_a8 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,dVar3,in_d2,in_d3,puVar2,PTR_s_createCGImage_fromRect__026a7760,puVar1);
      local_120 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_90 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_120 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
        puVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_imageOrientation_0269f430);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,local_120,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar2,puVar1
                  );
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_120;
      }
      local_c1 = puVar2 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_120;
      if (local_c1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if (local_90 != (undefined *)0x0) {
        _CGImageRelease(local_90);
      }
      if (local_b8 == (undefined *)0x0) {
        local_150 = local_40;
      }
      else {
        local_150 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_150;
      local_4c = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      goto LAB_0167c330;
    }
  }
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar1;
  local_4c = 1;
LAB_0167c330:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

