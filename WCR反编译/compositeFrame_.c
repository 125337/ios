// compositeFrame: @ 010f3c64

/* Function Stack Size: 0x18 bytes */

__CVBuffer *
WCRefinePerspectiveVideoCompositor::compositeFrame_(ID param_1,SEL param_2,__CVBuffer *param_3)

{
  __CVBuffer *p_Var1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  int local_74;
  __CVBuffer *local_70;
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
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = param_3;
  if (*(long *)(param_1 + 0x60) != 0) {
    local_70 = (__CVBuffer *)0x0;
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_02578298;
    dVar6 = *(double *)(param_1 + 0x50);
    dVar7 = *(double *)(param_1 + 0x58);
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
    _CVPixelBufferCreate(uVar5,(long)dVar6,(long)dVar7,0x42475241,puVar3,&local_70);
    iVar4 = (int)uVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_74 = iVar4;
    if ((iVar4 == 0) && (local_70 != (__CVBuffer *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___CIImage_026ce890;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIImage_026ce890,PTR_s_imageWithCVPixelBuffer__026aecb0,local_68)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___CIImage_026ce890;
      uVar5 = *(undefined8 *)(local_58 + 0x60);
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGImage_0269e0e8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithCGImage__026a7280,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                 &cf_CISourceOverCompositing);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setValue_forKey__0269d300,local_80,
                 *(undefined8 *)PTR__kCIInputImageKey_02578700);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_setValue_forKey__0269d300,local_88,
                 *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
      puVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_outputImage_026a7240);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        _CVPixelBufferRelease(local_70);
        local_50 = local_68;
      }
      else {
        uVar10 = *(undefined8 *)(local_58 + 0x50);
        uVar11 = *(undefined8 *)(local_58 + 0x58);
        uVar9 = 0;
        uVar8 = 0;
        FUN_010f3c18();
        p_Var1 = local_70;
        puVar3 = local_98;
        uVar5 = *(undefined8 *)(local_58 + 0x90);
        _CGColorSpaceCreateDeviceRGB();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,uVar9,uVar10,uVar11,uVar5,PTR_s_render_toCVPixelBuffer_bounds_co_026aecb8,
                   puVar3,p_Var1,puVar2);
        local_50 = local_70;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
    else {
      local_50 = local_68;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

