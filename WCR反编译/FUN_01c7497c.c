// FUN_01c7497c @ 01c7497c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c7497c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_1e0;
  undefined *local_178;
  bool local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  bool local_e1;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  local_40 = &cf_mp4;
  local_38 = &cf_mov;
  local_30 = &cf_m4v;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_80);
    _CGImageSourceCreateWithURL();
    local_f0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_78 = (undefined *)0x0;
      local_e8 = 1;
    }
    else {
      local_70 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_68 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_60 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,500);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_70,3);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_f0;
      _CGImageSourceCreateThumbnailAtIndex(local_f0,0,local_f8);
      local_100 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_1e0 = (undefined *)0x0;
      }
      else {
        local_1e0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,puVar1);
        _objc_retainAutoreleasedReturnValue();
        local_110 = local_1e0;
      }
      local_111 = puVar1 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = local_1e0;
      if (local_111) {
        (*(code *)PTR__objc_release_02578630)(local_110);
      }
      if (local_100 != (undefined *)0x0) {
        _CGImageRelease(local_100);
      }
      _CFRelease(local_f0);
      puVar1 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar1;
      local_e8 = 1;
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_f8,0);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_URLAssetWithURL_options__026a1748);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithAsset__026ac268);
    local_88 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
    uVar6 = 0x407f400000000000;
    uVar2 = uVar6;
    FUN_01c70908();
    local_b0 = uVar6;
    uStack_a8 = uVar2;
    local_98 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar2,local_88,PTR_s_setMaximumSize__026aa7f0);
    puVar1 = local_88;
    _CMTimeMakeWithSeconds(DAT_02323c68,600);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_d0,0);
    local_e1 = false;
    local_b8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_178 = (undefined *)0x0;
    }
    else {
      local_178 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_178;
    }
    local_e1 = puVar1 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_178;
    if ((local_e1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if (local_b8 != (undefined *)0x0) {
      _CGImageRelease(local_b8);
    }
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
    local_e8 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_78);
  return;
}

