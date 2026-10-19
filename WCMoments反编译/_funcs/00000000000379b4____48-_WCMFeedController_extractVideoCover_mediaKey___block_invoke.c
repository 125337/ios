// ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke @0x379b4

void ___48__WCMFeedController_extractVideoCover_mediaKey___block_invoke(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_f8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [15];
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  bool local_71;
  undefined8 local_70;
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  uVar3 = _objc_autoreleasePoolPush();
  _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_f8,*(undefined8 *)(param_1 + 0x20));
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_URLAssetWithURL_options_(&_OBJC_CLASS___AVURLAsset,local_f8);
  local_38 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar4 = _objc_alloc(&_OBJC_CLASS___AVAssetImageGenerator);
  local_40 = _objc_msgSend_initWithAsset_(uVar4,local_f8,local_38);
  _objc_msgSend_setAppliesPreferredTrackTransform_(local_40,local_f8,1);
  uVar4 = local_40;
  _CMTimeMakeWithSeconds(0x3fb999999999999a,600);
  local_48 = _objc_msgSend_copyCGImageAtTime_actualTime_error_(uVar4,local_f8,auStack_60,0);
  local_71 = false;
  bVar1 = local_48 == 0;
  if (bVar1) {
    local_128 = 0;
  }
  else {
    _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_f8,local_48);
    local_128 = _objc_retainAutoreleasedReturnValue();
    local_70 = local_128;
  }
  local_71 = !bVar1;
  local_68 = (*(code *)PTR__objc_retain_00110460)(local_128);
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_70);
  }
  if (local_48 != 0) {
    _CGImageRelease(local_48);
  }
  local_80 = 0;
  if (local_68 != 0) {
    _objc_msgSend_stringByAppendingString_(&cf_video_,local_f8,*(undefined8 *)(param_1 + 0x28));
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _Digest();
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringByAppendingPathExtension_(uVar5,local_f8,&cf_jpg);
    local_88 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_stringByAppendingPathComponent_(*(undefined8 *)(param_1 + 0x30),local_f8,local_88)
    ;
    local_90 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_f8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_fileExistsAtPath_(uVar4,local_f8,local_90);
    local_99 = 0;
    local_12c = 1;
    if ((uVar6 & 1) == 0) {
      _UIImageJPEGRepresentation(0x3fef5c28f5c28f5c,local_68);
      local_98 = _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_12c = _objc_msgSend_writeToFile_options_error_(local_98,local_f8,local_90,0x40000001,0);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_98);
    }
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((local_12c & 1) != 0) {
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_f8,&cf_wcm_cache________);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar4 = local_80;
      local_80 = uVar5;
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  puVar2 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar4 = _objc_retainAutoreleasedReturnValue(puVar2);
  local_e0 = PTR___NSConcreteStackBlock_001104f0;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = ___48__WCMFeedController_extractVideoCover_mediaKey___block_invoke_2;
  local_c8 = &___block_descriptor_64_e8_32s40s48s56w_e5_v8__0l;
  local_c0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x40));
  _objc_copyWeak(auStack_a8,param_1 + 0x48);
  local_b8 = (*(code *)PTR__objc_retain_00110460)(local_80);
  local_b0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  _dispatch_async(uVar4,&local_e0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_b8,0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

