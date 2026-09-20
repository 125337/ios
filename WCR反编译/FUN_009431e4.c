// FUN_009431e4 @ 009431e4

void FUN_009431e4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_39 = 0;
  local_cc = 1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_cc = (uint)puVar2 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if ((local_cc & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8,
               PTR_s_assetImageGeneratorWithAsset__026aa7e0,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
    uVar5 = 0x407e000000000000;
    uVar4 = 0x407e000000000000;
    FUN_00943588();
    local_70 = uVar4;
    uStack_68 = uVar5;
    local_60 = uVar4;
    uStack_58 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,local_50,PTR_s_setMaximumSize__026aa7f0);
    puVar2 = local_50;
    local_78 = 0;
    _CMTimeMakeWithSeconds(0x3fe0000000000000,600);
    local_a0 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_98,0,&local_a0);
    _objc_storeStrong(&local_78,local_a0);
    local_80 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
      local_c0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
      local_b0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,&local_c0,0);
      local_80 = puVar2;
    }
    if (local_80 == (undefined *)0x0) {
      local_28 = (undefined *)0x0;
      local_40 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar2;
      _CGImageRelease(local_80);
      puVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_40 = 1;
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_28 = (undefined *)0x0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

