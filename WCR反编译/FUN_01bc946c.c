// FUN_01bc946c @ 01bc946c

void FUN_01bc946c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_2);
  lVar1 = local_88;
  local_90 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_80 = (undefined *)0x0;
    local_94 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
    local_38 = *(undefined8 *)PTR__kCGImageSourceShouldCache_02578480;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _CGImageSourceCreateWithURL(puVar2,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_a0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_88
                );
      _objc_retainAutoreleasedReturnValue();
      local_94 = 1;
      local_80 = puVar2;
    }
    else {
      local_78 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_68 = *(undefined8 *)PTR__kCGImageSourceShouldCacheImmediately_02578488;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_60 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_78,4);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_a0;
      _CGImageSourceCreateThumbnailAtIndex(local_a0,0,local_a8);
      local_b0 = puVar2;
      _CFRelease(local_a0);
      if (local_b0 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_88);
        _objc_retainAutoreleasedReturnValue();
        local_94 = 1;
        local_80 = puVar2;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_b0);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar2;
        _CGImageRelease(local_b0);
        puVar2 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = puVar2;
        local_94 = 1;
        _objc_storeStrong(&local_b8,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
  }
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_80);
  return;
}

