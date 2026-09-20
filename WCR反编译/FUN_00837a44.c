// FUN_00837a44 @ 00837a44

void FUN_00837a44(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  ulong local_2a0;
  undefined *local_288;
  undefined *local_238;
  undefined *local_220;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  bool local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  double local_118;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  bool local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_a8;
  double local_a0;
  ulong local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  _objc_storeStrong(&local_98,param_2);
  uVar2 = local_98;
  local_a0 = param_1;
  _CGImageSourceCreateWithData(local_98,0);
  local_a8 = uVar2;
  if (uVar2 == 0) {
    local_90 = (undefined *)0x0;
    local_b8 = 1;
  }
  else {
    _CGImageSourceGetCount();
    local_c0 = uVar2;
    if (uVar2 == 0 || uVar2 - 1 == 0) {
      if (local_a0 <= 0.0) {
        _CFRelease(uVar2 - 1,local_a8);
        puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_98);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = 1;
        local_90 = puVar5;
      }
      else {
        local_58 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_40 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_48 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        dVar8 = local_a0;
        local_38 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar2 = local_a8;
        _CGImageSourceCreateThumbnailAtIndex(local_a8,0,local_c8);
        local_220 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_e1 = 0;
        local_f1 = false;
        local_d0 = uVar2;
        if (uVar2 == 0) {
          local_220 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          local_e1 = 1;
          local_e0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,local_220,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,uVar2,0);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = local_220;
        }
        local_f1 = uVar2 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_220;
        if ((local_f1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        if ((local_e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        if (local_d0 != 0) {
          _CGImageRelease(local_d0);
        }
        _CFRelease(local_a8);
        local_101 = 0;
        bVar1 = local_d8 == (undefined *)0x0;
        if (bVar1) {
          local_238 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_98);
          _objc_retainAutoreleasedReturnValue();
          local_100 = local_238;
        }
        else {
          local_238 = local_d8;
        }
        local_101 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_238;
        if ((local_101 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_100);
        }
        local_b8 = 1;
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_c8,0);
      }
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_118 = 0.0;
      local_129 = 0;
      local_139 = 0;
      local_149 = 0;
      local_159 = false;
      bVar1 = local_a0 <= 0.0;
      local_110 = puVar5;
      if (bVar1) {
        local_288 = (undefined *)0x0;
        dVar8 = local_a0;
      }
      else {
        local_88 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_80 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_128 = puVar5;
        local_70 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_78 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        dVar8 = local_a0;
        local_138 = puVar6;
        local_68 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_149 = 1;
        local_288 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_148 = puVar5;
        local_60 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_88,3);
        _objc_retainAutoreleasedReturnValue();
        local_158 = local_288;
      }
      local_159 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = local_288;
      if ((local_159 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if ((local_149 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if ((local_129 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      for (local_168 = 0; local_168 < local_c0; local_168 = local_168 + 1) {
        local_2a0 = local_a8;
        if (local_120 == (undefined *)0x0) {
          _CGImageSourceCreateImageAtIndex(local_a8,local_168,0);
        }
        else {
          _CGImageSourceCreateThumbnailAtIndex(local_a8,local_168,local_120);
        }
        puVar5 = local_110;
        local_170 = local_2a0;
        if (local_2a0 != 0) {
          puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_2a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _CFRelease(local_170);
          uVar2 = local_a8;
          _CGImageSourceCopyPropertiesAtIndex(local_a8,local_168,0);
          local_178 = uVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
          _objc_retainAutoreleasedReturnValue();
          local_188 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458);
          _objc_retainAutoreleasedReturnValue();
          local_190 = uVar2;
          if (uVar2 == 0) {
            uVar7 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_190;
            local_190 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_doubleValue_026ca608);
          dVar8 = local_118 + dVar8;
          local_118 = dVar8;
          if (local_178 != 0) {
            _CFRelease(local_178);
          }
          _objc_storeStrong(&local_190);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_180,0);
        }
      }
      _CFRelease(local_168 - local_c0,local_a8);
      if (local_118 == 0.0) {
        puVar5 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
        local_118 = DAT_02323c68 * (double)puVar5;
      }
      puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR__OBJC_CLASS___UIImage_026cdfd0,
                 PTR_s_animatedImageWithImages_duration_026ca500,local_110);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = 1;
      local_90 = puVar5;
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_110,0);
    }
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_90);
  return;
}

