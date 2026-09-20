// animatedImageWithGIFData: @ 01e7f434

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoCardView::animatedImageWithGIFData_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_198;
  double local_188;
  ulong local_178;
  undefined *local_108;
  bool local_f1;
  undefined *local_f0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  double local_98;
  undefined *local_90;
  bool local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_28 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    uVar3 = local_40;
    _CGImageSourceCreateWithData(local_40,0);
    local_50 = uVar3;
    if (uVar3 == 0) {
      local_28 = (undefined *)0x0;
      local_44 = 1;
    }
    else {
      _CGImageSourceGetCount();
      local_58 = uVar3;
      if (uVar3 < 2) {
        uVar3 = local_50;
        _CGImageSourceCreateImageAtIndex(local_50,0,0);
        local_108 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_71 = 0;
        local_81 = false;
        local_60 = uVar3;
        if (uVar3 == 0) {
          local_108 = (undefined *)0x0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,uVar3,0);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_108;
        }
        local_81 = uVar3 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_108;
        if ((local_81 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        if (local_60 != 0) {
          _CGImageRelease(local_60);
        }
        _CFRelease(local_50);
        puVar4 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar4;
        local_44 = 1;
        _objc_storeStrong(&local_68,0);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,uVar3
                  );
        _objc_retainAutoreleasedReturnValue();
        local_98 = 0.0;
        local_90 = puVar4;
        for (local_a0 = 0; local_a0 < local_58; local_a0 = local_a0 + 1) {
          uVar3 = local_50;
          _CGImageSourceCreateImageAtIndex(local_50,local_a0,0);
          puVar2 = local_90;
          puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          local_a8 = uVar3;
          if (uVar3 != 0) {
            puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,uVar3,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _CGImageRelease(local_a8);
            uVar3 = local_50;
            _CGImageSourceCopyPropertiesAtIndex(local_50,local_a0,0);
            local_b0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458);
            _objc_retainAutoreleasedReturnValue();
            local_178 = uVar3;
            if (uVar3 == 0) {
              local_c8 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_objectForKeyedSubscript__0269d098,
                         *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440);
              _objc_retainAutoreleasedReturnValue();
              local_178 = local_c8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = local_178;
            if (uVar3 == 0) {
              (*(code *)PTR__objc_release_02578630)(local_c8);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            dVar1 = DAT_02323f00;
            local_188 = DAT_02323f00;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_doubleValue_026ca608);
            if (local_188 <= dVar1) {
              local_188 = dVar1;
            }
            local_98 = local_98 + local_188;
            _objc_storeStrong(&local_c0);
            _objc_storeStrong(&local_b8,0);
            _objc_storeStrong(&local_b0,0);
          }
        }
        _CFRelease(local_50);
        puVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
        if (puVar4 == (undefined *)0x0) {
          local_198 = (undefined *)0x0;
        }
        else {
          local_198 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR__OBJC_CLASS___UIImage_026cdfd0,
                     PTR_s_animatedImageWithImages_duration_026ca500,local_90);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = local_198;
        }
        local_f1 = puVar4 != (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_198;
        if (local_f1) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        local_44 = 1;
        _objc_storeStrong(&local_90,0);
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

