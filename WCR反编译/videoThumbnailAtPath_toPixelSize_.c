// videoThumbnailAtPath:toPixelSize: @ 0197b0a4

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRFileThumbnailManager::videoThumbnailAtPath_toPixelSize_
          (WCRFileThumbnailManager *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  double dVar4;
  undefined *local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_78;
  double dStack_70;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  double local_38;
  double local_30;
  undefined *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  local_38 = in_d0;
  local_30 = in_d1;
  _objc_storeStrong(&local_50,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8,
             PTR_s_assetImageGeneratorWithAsset__026aa7e0,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar3 = local_38 * in_d0;
  dVar4 = local_30 * in_d0;
  FUN_0197b3e0();
  local_90 = dVar3;
  dStack_88 = dVar4;
  local_78 = dVar3;
  dStack_70 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar4,local_60,PTR_s_setMaximumSize__026aa7f0);
  _CMTimeMakeWithSeconds(&local_a8,0x3fe0000000000000,600);
  local_b0 = 0;
  local_c0 = 0;
  uStack_d8 = uStack_a0;
  local_e0 = local_a8;
  local_d0 = local_98;
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,&local_e0,0,&local_c0);
  _objc_storeStrong(&local_b0,local_c0);
  local_b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
    local_100 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
    local_f0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,&local_100,0);
    local_b8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_28 = (undefined *)0x0;
      local_104 = 1;
      goto LAB_0197b398;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,local_b8);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  _CGImageRelease(local_b8);
  puVar2 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar2;
  local_104 = 1;
  _objc_storeStrong(&local_110,0);
LAB_0197b398:
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

