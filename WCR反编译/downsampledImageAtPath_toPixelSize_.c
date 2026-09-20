// downsampledImageAtPath:toPixelSize: @ 0197ac88

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRFileThumbnailManager::downsampledImageAtPath_toPixelSize_
          (WCRFileThumbnailManager *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  double in_d1;
  double local_108;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_98;
  SEL local_90;
  ID local_88;
  double local_80;
  double local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = in_d0;
  local_78 = in_d1;
  _objc_storeStrong(&local_98,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_b0 = local_80;
  local_b8 = local_78;
  if (local_78 <= local_80) {
    local_108 = local_80;
  }
  else {
    local_108 = local_78;
  }
  local_c0 = local_108;
  local_a8 = local_108 * in_d0;
  if (local_a8 < 1.0) {
    local_a8 = 200.0;
  }
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_98);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _CGImageSourceCreateWithURL(puVar1,0);
  local_d0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_70 = (undefined *)0x0;
    local_d4 = 1;
  }
  else {
    local_68 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_60 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = *(undefined8 *)PTR__kCGImageSourceShouldCacheImmediately_02578488;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d0;
    _CGImageSourceCreateThumbnailAtIndex(local_d0,0,local_e0);
    local_e8 = puVar1;
    _CFRelease(local_d0);
    if (local_e8 == (undefined *)0x0) {
      local_70 = (undefined *)0x0;
      local_d4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      _CGImageRelease(local_e8);
      puVar1 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = puVar1;
      local_d4 = 1;
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_70;
}

