// thumbnailForVideoAtPath: @ 01003604

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::thumbnailForVideoAtPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if (lVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
    uVar5 = 0x407e000000000000;
    uVar4 = 0x407e000000000000;
    FUN_010038b0();
    local_80 = uVar4;
    uStack_78 = uVar5;
    local_68 = uVar4;
    uStack_60 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,local_58,PTR_s_setMaximumSize__026aa7f0);
    puVar3 = local_58;
    local_88 = 0;
    _CMTimeMake(0,1);
    local_b0 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_a8,0,&local_b0);
    _objc_storeStrong(&local_88,local_b0);
    local_90 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_28 = (undefined *)0x0;
      local_44 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar2;
      _CGImageRelease(local_90);
      puVar3 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
      local_44 = 1;
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

