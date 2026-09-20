// applyPerspectiveTransform: @ 010f3620

/* Function Stack Size: 0x18 bytes */

__CVBuffer *
WCRefinePerspectiveVideoCompositor::applyPerspectiveTransform_
          (ID param_1,SEL param_2,__CVBuffer *param_3)

{
  __CVBuffer *p_Var1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __CVBuffer *local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined *local_70;
  __CVBuffer *local_68;
  SEL local_60;
  ID local_58;
  __CVBuffer *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___CIImage_026ce890;
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CIImage_026ce890,PTR_s_imageWithCVPixelBuffer__026aecb0,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_78 = *(double *)(local_58 + 0x58) - *(double *)(local_58 + 0x18);
  local_80 = *(double *)(local_58 + 0x58) - *(double *)(local_58 + 0x28);
  local_88 = *(double *)(local_58 + 0x58) - *(double *)(local_58 + 0x38);
  local_90 = *(double *)(local_58 + 0x58) - *(double *)(local_58 + 0x48);
  puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
             &cf_CIPerspectiveTransformWithExtent);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setValue_forKey__0269d300,local_70,
             *(undefined8 *)PTR__kCIInputImageKey_02578700);
  puVar2 = local_98;
  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_58 + 0x10),local_78,PTR__OBJC_CLASS___CIVector_026ce8a8,
             PTR_s_vectorWithX_Y__026a7258);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputTopLeft);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_98;
  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_58 + 0x20),local_80,PTR__OBJC_CLASS___CIVector_026ce8a8,
             PTR_s_vectorWithX_Y__026a7258);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputTopRight);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_98;
  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_58 + 0x30),local_88,PTR__OBJC_CLASS___CIVector_026ce8a8,
             PTR_s_vectorWithX_Y__026a7258);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputBottomLeft);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_98;
  puVar3 = PTR__OBJC_CLASS___CIVector_026ce8a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_58 + 0x40),local_90,PTR__OBJC_CLASS___CIVector_026ce8a8,
             PTR_s_vectorWithX_Y__026a7258);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputBottomRight);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_98;
  puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
  uVar9 = *(undefined8 *)(local_58 + 0x98);
  uVar10 = *(undefined8 *)(local_58 + 0xa0);
  uVar8 = 0;
  uVar5 = 0;
  FUN_010f3c18();
  local_b8 = uVar5;
  local_b0 = uVar8;
  local_a8 = uVar9;
  local_a0 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,puVar2,PTR_s_vectorWithCGRect__026a7238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputExtent);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_outputImage_026a7240);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_50 = (__CVBuffer *)0x0;
  }
  else {
    local_d0 = (__CVBuffer *)0x0;
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_02578298;
    dVar6 = *(double *)(local_58 + 0x50);
    dVar7 = *(double *)(local_58 + 0x58);
    lVar4 = (long)dVar7;
    local_48 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_02578738;
    local_38 = *(undefined8 *)PTR____NSDictionary0___02578288;
    local_40 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_02578740;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _CVPixelBufferCreate(uVar5,(long)dVar6,lVar4,0x42475241,puVar3,&local_d0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((int)uVar5 == 0) && (local_d0 != (__CVBuffer *)0x0)) {
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_extent_026a71f0);
      puVar2 = local_c0;
      p_Var1 = local_d0;
      uVar5 = *(undefined8 *)(local_58 + 0x90);
      _CGColorSpaceCreateDeviceRGB();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar7,uVar8,uVar9,uVar10,uVar5,PTR_s_render_toCVPixelBuffer_bounds_co_026aecb8,
                 puVar2,p_Var1,puVar3);
      local_50 = local_d0;
    }
    else {
      local_50 = (__CVBuffer *)0x0;
    }
  }
  local_c4 = 1;
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

