// ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke @0x4968

void ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke(long param_1)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  long local_2e8;
  cfstringStruct *local_2b8;
  undefined8 local_238;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  byte local_1b1;
  long local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined4 local_164;
  double local_160;
  undefined4 local_154;
  double local_150;
  undefined4 local_144;
  double local_140;
  undefined4 local_134;
  double local_130;
  double local_128;
  long local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  long local_100;
  byte local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  uint local_d0;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = param_1;
  local_b8 = param_1;
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  _objc_sync_enter();
  uVar5 = _objc_msgSend_activeTasks(*(undefined8 *)(param_1 + 0x20),local_238);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar2 = _objc_msgSend_containsObject_(uVar5,local_238,*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_00110458)(uVar5);
  local_d0 = (uint)((uVar2 & 1) == 0);
  _objc_sync_exit(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if (local_d0 == 0) {
    uVar4 = _objc_msgSend_displayCache(*(undefined8 *)(param_1 + 0x20),local_238);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _objc_msgSend_objectForKey_(uVar4,local_238,*(undefined8 *)(param_1 + 0x30));
    local_d8 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_objectForKeyedSubscript_(local_d8,local_238,&cf_data);
    local_e0 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = _objc_msgSend_objectForKeyedSubscript_(local_d8,local_238,&cf_mime);
    local_e8 = _objc_retainAutoreleasedReturnValue(uVar4);
    if (local_e0 == 0) {
      uVar4 = _objc_msgSend_stringByAppendingPathComponent_
                        (*(undefined8 *)(param_1 + 0x38),local_238,*(undefined8 *)(param_1 + 0x40));
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar5 = _objc_msgSend_dataWithContentsOfFile_options_error_
                        (&_OBJC_CLASS___NSData,local_238,uVar4,1,0);
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar7 = local_e0;
      local_e0 = lVar6;
      (*(code *)PTR__objc_release_00110458)(lVar7);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar4 = _objc_msgSend_pathExtension(*(undefined8 *)(param_1 + 0x40),local_238);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar2 = _objc_msgSend_isEqualToString_(uVar4,local_238,&cf_png);
      local_f1 = 0;
      if ((uVar2 & 1) == 0) {
        uVar5 = _objc_msgSend_pathExtension(*(undefined8 *)(param_1 + 0x40),local_238);
        local_f0 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_f1 = 1;
        uVar2 = _objc_msgSend_isEqualToString_(local_f0,local_238,&cf_heic);
        local_2b8 = &cf_image_heic;
        if ((uVar2 & 1) == 0) {
          local_2b8 = &cf_image_jpeg;
        }
      }
      else {
        local_2b8 = &cf_image_png;
      }
      _objc_storeStrong(&local_e8,local_2b8);
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_f0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar4);
      lVar7 = local_e0;
      if (local_e0 == 0) {
        local_2e8 = 0;
      }
      else {
        local_38 = *(undefined8 *)PTR__kCGImageSourceShouldCache_001102d8;
        local_30 = PTR____kCFBooleanFalse_00110728;
        uVar4 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                          (&_OBJC_CLASS___NSDictionary,local_238,&local_30,&local_38,1);
        local_2e8 = _CGImageSourceCreateWithData(lVar7,uVar4);
      }
      local_100 = local_2e8;
      if (local_2e8 != 0) {
        uVar4 = _CGImageSourceCopyPropertiesAtIndex(local_2e8,0,0);
        local_b0 = uVar4;
        _objc_autoreleaseReturnValue();
        local_108 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = _objc_msgSend_objectForKeyedSubscript_
                          (local_108,local_238,
                           *(undefined8 *)PTR__kCGImagePropertyPixelWidth_001102c0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        dVar10 = (double)_objc_msgSend_doubleValue(uVar4,local_238);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_110 = dVar10;
        uVar4 = _objc_msgSend_objectForKeyedSubscript_
                          (local_108,local_238,
                           *(undefined8 *)PTR__kCGImagePropertyPixelHeight_001102b8);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        dVar10 = (double)_objc_msgSend_doubleValue(uVar4,local_238);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_118 = dVar10;
        uVar4 = _objc_msgSend_objectForKeyedSubscript_
                          (local_108,local_238,
                           *(undefined8 *)PTR__kCGImagePropertyOrientation_001102b0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        lVar6 = _objc_msgSend_integerValue(uVar4,local_238);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        lVar7 = local_100;
        dVar10 = local_110;
        if ((4 < lVar6) && (lVar6 < 9)) {
          local_128 = local_110;
          local_110 = local_118;
          local_118 = dVar10;
        }
        local_134 = 0x800;
        local_144 = 0x400;
        local_154 = 1;
        local_164 = 1;
        local_170 = local_110;
        if (local_110 <= 1.0) {
          local_358 = 1.0;
        }
        else {
          local_358 = local_110;
        }
        local_178 = local_358;
        local_160 = local_118 / local_358;
        local_360 = local_160;
        if (local_160 <= 1.0) {
          local_360 = 1.0;
        }
        local_180 = local_360;
        local_150 = (double)(long)(*(double *)(param_1 + 0x58) * local_360);
        local_368 = local_150;
        if (local_150 <= 1024.0) {
          local_368 = 1024.0;
        }
        local_188 = local_368;
        local_140 = local_368;
        if (local_368 <= 2048.0) {
          local_370 = local_368;
        }
        else {
          local_370 = 2048.0;
        }
        local_190 = local_370;
        local_130 = local_370;
        local_198 = local_110;
        local_1a0 = local_118;
        if (local_118 <= local_110) {
          local_378 = local_110;
        }
        else {
          local_378 = local_118;
        }
        local_1a8 = local_378;
        local_120 = lVar6;
        if (local_370 < local_378) {
          local_78 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_001102c8;
          local_58 = PTR____kCFBooleanTrue_00110730;
          local_70 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_001102d0;
          local_50 = PTR____kCFBooleanTrue_00110730;
          local_68 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_001102e8;
          uVar4 = _objc_msgSend_numberWithDouble_(local_370,&_OBJC_CLASS___NSNumber,local_238);
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          local_60 = *(undefined8 *)PTR__kCGImageSourceShouldCacheImmediately_001102e0;
          local_40 = PTR____kCFBooleanTrue_00110730;
          local_48 = uVar4;
          uVar5 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                            (&_OBJC_CLASS___NSDictionary,local_238,&local_58,&local_78,4);
          lVar7 = _CGImageSourceCreateThumbnailAtIndex(lVar7,0,uVar5);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          local_1b0 = lVar7;
          if (lVar7 != 0) {
            local_1b1 = _objc_msgSend_isEqual_(local_e8,local_238,&cf_image_png);
            local_1c0 = _objc_opt_new(&_OBJC_CLASS___NSMutableData);
            pcVar1 = &cf_public_png;
            if ((local_1b1 & 1) == 0) {
              pcVar1 = &cf_public_jpeg;
            }
            lVar6 = _CGImageDestinationCreateWithData(local_1c0,pcVar1,1,0);
            lVar7 = local_1b0;
            local_1c8 = lVar6;
            if (lVar6 != 0) {
              local_88 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_00110288;
              local_80 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f428;
              uVar4 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                                (&_OBJC_CLASS___NSDictionary,local_238,&local_80,&local_88,1);
              _CGImageDestinationAddImage(lVar6,lVar7,uVar4);
              uVar2 = _CGImageDestinationFinalize(local_1c8);
              if ((uVar2 & 1) != 0) {
                _objc_storeStrong(&local_e0,local_1c0);
                pcVar1 = &cf_image_png;
                if ((local_1b1 & 1) == 0) {
                  pcVar1 = &cf_image_jpeg;
                }
                _objc_storeStrong(&local_e8,pcVar1);
              }
              _CFRelease(local_1c8);
            }
            _CGImageRelease(local_1b0);
            _objc_storeStrong(&local_1c0,0);
          }
        }
        _CFRelease(local_100);
        _objc_storeStrong(&local_108,0);
      }
      if (local_e0 != 0) {
        uVar4 = _objc_msgSend_displayCache(*(undefined8 *)(param_1 + 0x20),local_238);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_a8 = &cf_data;
        local_98 = local_e0;
        local_a0 = &cf_mime;
        local_90 = local_e8;
        uVar5 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                          (&_OBJC_CLASS___NSDictionary,local_238,&local_98,&local_a8,2);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar8 = _objc_msgSend_length(local_e0,local_238);
        _objc_msgSend_setObject_forKey_cost_(uVar4,local_238,uVar5,uVar9,uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
    }
    _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);
    uVar4 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);
    local_218 = PTR___NSConcreteStackBlock_001104f0;
    local_210 = 0xc2000000;
    local_20c = 0;
    local_208 = ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke_47;
    local_200 = &___block_descriptor_80_e8_32s40s48s56s64s72s_e5_v8__0l;
    local_1f8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
    local_1f0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
    local_1e8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x48));
    local_1e0 = (*(code *)PTR__objc_retain_00110460)(local_e0);
    local_1d8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x50));
    local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_e8);
    _dispatch_async(uVar4,&local_218);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    local_d0 = 0;
  }
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

