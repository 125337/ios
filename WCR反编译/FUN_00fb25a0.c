// FUN_00fb25a0 @ 00fb25a0

void FUN_00fb25a0(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_34;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_SightUtils;
    _NSClassFromString();
    pcVar3 = &cf_newThumbForVideoWithPath_;
    local_40 = pcVar2;
    _NSSelectorFromString();
    local_48 = pcVar3;
    if ((local_40 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_34 = (uint)(pcVar2 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_50,0);
      if (local_34 != 0) goto LAB_00fb2964;
    }
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLAssetWithURL_options__026a1748);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
    uVar6 = 0x4086800000000000;
    uVar7 = uVar6;
    FUN_00f97ac4();
    local_80 = uVar6;
    uStack_78 = uVar7;
    local_70 = uVar6;
    uStack_68 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,local_60,PTR_s_setMaximumSize__026aa7f0);
    puVar5 = local_60;
    local_88 = 0;
    _CMTimeMake(1,2);
    local_b0 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_a8,0,&local_b0);
    _objc_storeStrong(&local_88,local_b0);
    local_90 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_b8 = local_88;
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
      local_d0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
      local_c0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
      puVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,&local_d0,0,&local_b8);
      _objc_storeStrong(&local_88,local_b8);
      local_90 = puVar5;
    }
    if (local_90 == (undefined *)0x0) {
      local_28 = (cfstringStruct *)0x0;
      local_34 = 1;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar2;
      _CGImageRelease(local_90);
      pcVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_34 = 1;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
LAB_00fb2964:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

