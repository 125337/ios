// FUN_002ce998 @ 002ce998

void FUN_002ce998(double param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long local_228;
  cfstringStruct *local_1b8;
  cfstringStruct *local_180;
  cfstringStruct *local_138;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  double local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar2 = local_30;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_48 = 1;
  }
  else {
    local_59 = 0;
    local_69 = 0;
    if ((local_31 & 1) == 0) {
      local_138 = &cf_img_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_img_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_138;
    }
    else {
      local_138 = &cf_gif_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_gif_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_138;
    }
    pcVar2 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_138;
    if ((local_69 & 1) != 0) {
      pcVar2 = local_68;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_59 & 1) != 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_release_02578630)();
    }
    FUN_002cf158();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_78;
    if (local_78 == (cfstringStruct *)0x0) {
      _CFAbsoluteTimeGetCurrent();
      bVar1 = (local_31 & 1) == 0;
      local_80 = param_1;
      if (bVar1) {
        local_180 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_30);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_180;
      }
      else {
        local_180 = local_30;
        FUN_002cf1cc();
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_180;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_180;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      _CFAbsoluteTimeGetCurrent();
      dVar4 = (param_1 - local_80) * 1000.0;
      if (local_88 != (cfstringStruct *)0x0) {
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_images_026ca698);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_1b8 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
          local_1b8 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_size_026cab00);
        dVar6 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_size_026cab00);
        dVar5 = dVar4 * dVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_scale_026ca830);
        dVar5 = dVar4 * dVar6 * dVar5;
        pcVar2 = local_88;
        dVar4 = dVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_scale_026ca830);
        dVar6 = (double)NEON_ucvtf(local_1b8);
        local_228 = (long)(dVar5 * dVar4 * 4.0 * dVar6);
        FUN_002cf158();
        _objc_retainAutoreleasedReturnValue();
        if (local_228 == 0) {
          local_228 = 1;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_setObject_forKey_cost__0269e0c0,local_88,local_50,local_228);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_48 = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_48 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

