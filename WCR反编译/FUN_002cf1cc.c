// FUN_002cf1cc @ 002cf1cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002cf1cc(undefined8 param_1)

{
  bool bVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *local_1e0;
  double local_1d0;
  double local_168;
  undefined1 *local_148;
  undefined *local_d8;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  double local_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
  if (puVar4 == (undefined1 *)0x0) {
    local_28 = (undefined *)0x0;
    local_48 = 1;
  }
  else {
    puVar5 = local_38;
    _CGImageSourceCreateWithData(local_38,0);
    local_50 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_28 = (undefined *)0x0;
      local_48 = 1;
    }
    else {
      _CGImageSourceGetCount();
      local_58 = puVar5;
      if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar5) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,
                   puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_68 = 0.0;
        local_60 = puVar4;
        for (local_70 = (undefined1 *)0x0; local_70 < local_58; local_70 = local_70 + 1) {
          puVar5 = local_50;
          _CGImageSourceCreateImageAtIndex(local_50,local_70,0);
          local_78 = puVar5;
          if (puVar5 != (undefined1 *)0x0) {
            puVar5 = local_50;
            _CGImageSourceCopyPropertiesAtIndex(local_50,local_70,0);
            local_80 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
            _objc_retainAutoreleasedReturnValue();
            local_88 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458);
            _objc_retainAutoreleasedReturnValue();
            local_148 = puVar5;
            if (puVar5 == (undefined1 *)0x0) {
              local_98 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_objectForKeyedSubscript__0269d098,
                         *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440);
              _objc_retainAutoreleasedReturnValue();
              local_148 = local_98;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_90 = local_148;
            if (puVar5 == (undefined1 *)0x0) {
              (*(code *)PTR__objc_release_02578630)(local_98);
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            dVar2 = DAT_02323f00;
            local_168 = DAT_02323f00;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_doubleValue_026ca608);
            puVar3 = local_60;
            puVar5 = local_78;
            puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            if (local_168 <= dVar2) {
              local_168 = dVar2;
            }
            local_168 = local_68 + local_168;
            puVar6 = PTR__OBJC_CLASS___UIScreen_026cdf70;
            local_68 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,puVar4,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar5,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _CGImageRelease(local_78);
            _objc_storeStrong(&local_90);
            _objc_storeStrong(&local_88,0);
            _objc_storeStrong(&local_80,0);
          }
        }
        _CFRelease(local_50);
        bVar1 = false;
        puVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        if (puVar4 == (undefined *)0x0) {
          local_1e0 = (undefined *)0x0;
        }
        else {
          if (DAT_02323c68 <= local_68) {
            local_1d0 = local_68;
          }
          else {
            local_1d0 = DAT_02323c68;
          }
          local_1e0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR__OBJC_CLASS___UIImage_026cdfd0,
                     PTR_s_animatedImageWithImages_duration_026ca500,local_60);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_d8 = local_1e0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_1e0;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        _CFRelease(local_50);
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_48 = 1;
        local_28 = puVar4;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

