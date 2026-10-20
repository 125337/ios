// ============================================================
// WCMoments 数据链反编译 · 03_媒体管线
// 后台导出队列（读源-JPEG0.999-自有存储）+ scheme 资源服务
// 函数数: 7
// ============================================================

// ---- webView:startURLSchemeTask: @0x41e0 ----


/* Function Stack Size: 0x20 bytes */



void WCMAssetHandler::webView_startURLSchemeTask_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  double dVar6;

  double in_d2;

  double local_1e8;

  undefined8 local_178;

  undefined *local_160;

  undefined4 local_158;

  undefined4 local_154;

  code *local_150;

  undefined *local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined8 local_120;

  undefined8 local_118;

  undefined8 local_110;

  double local_108;

  undefined8 local_f0;

  double local_e8;

  undefined8 local_e0;

  double local_c0;

  int local_b4;

  double local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined4 local_98;

  byte local_91;

  undefined8 local_90;

  undefined1 local_88 [16];

  byte local_71;

  undefined8 local_70;

  byte local_61;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_40 = 0;

  _objc_storeStrong(&local_40,param_4);

  _objc_msgSend_request(local_40,local_178);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_URL(uVar2,local_178);

  local_48 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_lastPathComponent(local_48,local_178);

  local_50 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_characterSetWithCharactersInString_

            (&_OBJC_CLASS___NSCharacterSet,local_178,

             &cf_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789__);

  local_58 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_root(local_28,local_178);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = _objc_msgSend_length(uVar2,local_178);

  local_61 = 0;

  local_71 = 0;

  local_91 = 0;

  bVar1 = true;

  if (lVar3 != 0) {

    _objc_msgSend_host(local_48,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_61 = 1;

    local_60 = uVar4;

    _objc_msgSend_accountToken(local_28,local_178);

    local_70 = _objc_retainAutoreleasedReturnValue();

    local_71 = 1;

    uVar5 = _objc_msgSend_isEqualToString_(uVar4,local_178);

    bVar1 = true;

    if ((uVar5 & 1) != 0) {

      lVar3 = _objc_msgSend_length(local_50,local_178);

      bVar1 = true;

      if (lVar3 != 0) {

        uVar5 = _objc_msgSend_hasPrefix_(local_50,local_178,&cf__);

        uVar4 = local_50;

        bVar1 = true;

        if ((uVar5 & 1) == 0) {

          _objc_msgSend_invertedSet(local_58,local_178);

          local_90 = _objc_retainAutoreleasedReturnValue();

          local_91 = 1;

          local_88 = _objc_msgSend_rangeOfCharacterFromSet_(uVar4,local_178);

          bVar1 = local_88._0_8_ != 0x7fffffffffffffff;

        }

      }

    }

  }

  if ((local_91 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_90);

  }

  if ((local_71 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_70);

  }

  if ((local_61 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_60);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = local_40;

  if (bVar1) {

    _objc_msgSend_errorWithDomain_code_userInfo_

              (&_OBJC_CLASS___NSError,local_178,*(undefined8 *)PTR__NSURLErrorDomain_001101b0,

               0xfffffffffffffbb2,0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_didFailWithError_(uVar2,local_178);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_98 = 1;

  }

  else {

    _objc_msgSend_root(local_28,local_178);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_accountToken(local_28,local_178);

    local_a8 = _objc_retainAutoreleasedReturnValue();

    local_b4 = 0x200;

    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_178);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_e0 = _objc_msgSend_bounds(uVar2,local_178);

    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    dVar6 = (double)_objc_msgSend_scale(uVar4,local_178);

    dVar6 = (double)(long)(((in_d2 - 40.0) * dVar6) / 2.0) + 64.0;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    local_1e8 = dVar6;

    if (dVar6 <= (double)(long)local_b4) {

      local_1e8 = (double)(long)local_b4;

    }

    local_e8 = local_1e8;

    local_b0 = local_1e8;

    local_c0 = dVar6;

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_178,&cf_________0f);

    local_f0 = _objc_retainAutoreleasedReturnValue();

    uVar2 = (*(code *)PTR__objc_retain_00110460)(local_28);

    _objc_sync_enter();

    uVar4 = _objc_msgSend_activeTasks(local_28,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_addObject_(uVar4,local_178,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_sync_exit(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_decodeQueue(local_28,local_178);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_160 = PTR___NSConcreteStackBlock_001104f0;

    local_158 = 0xc2000000;

    local_154 = 0;

    local_150 = ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke;

    local_148 = &___block_descriptor_96_e8_32s40s48s56s64s72s80s_e5_v8__0l;

    local_140 = (*(code *)PTR__objc_retain_00110460)(local_28);

    local_138 = (*(code *)PTR__objc_retain_00110460)(local_40);

    local_130 = (*(code *)PTR__objc_retain_00110460)(local_f0);

    local_128 = (*(code *)PTR__objc_retain_00110460)(local_a0);

    local_120 = (*(code *)PTR__objc_retain_00110460)(local_50);

    local_108 = local_b0;

    local_118 = (*(code *)PTR__objc_retain_00110460)(local_a8);

    local_110 = (*(code *)PTR__objc_retain_00110460)(local_48);

    _objc_msgSend_addOperationWithBlock_(uVar2,local_178,&local_160);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_storeStrong(&local_110);

    _objc_storeStrong(&local_118,0);

    _objc_storeStrong(&local_120,0);

    _objc_storeStrong(&local_128,0);

    _objc_storeStrong(&local_130,0);

    _objc_storeStrong(&local_138,0);

    _objc_storeStrong(&local_140,0);

    _objc_storeStrong(&local_f0,0);

    _objc_storeStrong(&local_a8,0);

    _objc_storeStrong(&local_a0,0);

    local_98 = 0;

  }

  _objc_storeStrong(&local_58);

  _objc_storeStrong(&local_50,0);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke @0x4968 ----


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






// ---- ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47 @0x5730 ----


void ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke_47(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 local_48;

  

  uVar2 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));

  _objc_sync_enter();

  uVar3 = _objc_msgSend_activeTasks(*(undefined8 *)(param_1 + 0x20),local_48);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  uVar1 = _objc_msgSend_containsObject_(uVar3,local_48,*(undefined8 *)(param_1 + 0x28));

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if ((uVar1 & 1) != 0) {

    uVar3 = _objc_msgSend_activeTasks(*(undefined8 *)(param_1 + 0x20),local_48);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_removeObject_(uVar3,local_48,*(undefined8 *)(param_1 + 0x28));

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar5 = *(undefined8 *)(param_1 + 0x30);

    uVar3 = _objc_msgSend_accountToken(*(undefined8 *)(param_1 + 0x20),local_48);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar1 = _objc_msgSend_isEqual_(uVar5,local_48);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    if ((uVar1 & 1) == 0) {

      uVar5 = *(undefined8 *)(param_1 + 0x28);

      uVar3 = _objc_msgSend_errorWithDomain_code_userInfo_

                        (&_OBJC_CLASS___NSError,local_48,

                         *(undefined8 *)PTR__NSURLErrorDomain_001101b0,0xfffffffffffffc19,0);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      _objc_msgSend_didFailWithError_(uVar5,local_48);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    else if (*(long *)(param_1 + 0x38) == 0) {

      uVar5 = *(undefined8 *)(param_1 + 0x28);

      uVar3 = _objc_msgSend_errorWithDomain_code_userInfo_

                        (&_OBJC_CLASS___NSError,local_48,

                         *(undefined8 *)PTR__NSURLErrorDomain_001101b0,0xfffffffffffffbb4,0);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      _objc_msgSend_didFailWithError_(uVar5,local_48);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    else {

      uVar4 = *(undefined8 *)(param_1 + 0x28);

      uVar3 = _objc_alloc(&_OBJC_CLASS___NSURLResponse);

      uVar6 = *(undefined8 *)(param_1 + 0x40);

      uVar7 = *(undefined8 *)(param_1 + 0x48);

      uVar5 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x38),local_48);

      uVar3 = _objc_msgSend_initWithURL_MIMEType_expectedContentLength_textEncodingName_

                        (uVar3,local_48,uVar6,uVar7,uVar5,0);

      _objc_msgSend_didReceiveResponse_(uVar4,local_48,uVar3);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      _objc_msgSend_didReceiveData_

                (*(undefined8 *)(param_1 + 0x28),local_48,*(undefined8 *)(param_1 + 0x38));

      _objc_msgSend_didFinish(*(undefined8 *)(param_1 + 0x28),local_48);

    }

  }

  _objc_sync_exit(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return;

}






// ---- exportImage:nativePath:renderKey:mediaKey:quality: @0x32700 ----


/* Function Stack Size: 0x38 bytes */



void WCMFeedController::exportImage_nativePath_renderKey_mediaKey_quality_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7

               )



{

  bool bVar1;

  uint uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 local_230;

  undefined8 local_198;

  undefined *local_168;

  undefined4 local_160;

  undefined4 local_15c;

  code *local_158;

  undefined *local_150;

  undefined8 local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined8 local_120;

  undefined1 auStack_118 [8];

  long_long local_110;

  undefined8 local_108;

  undefined8 local_100;

  undefined8 local_f8;

  byte local_e9;

  undefined8 local_e8;

  byte local_d9;

  undefined8 local_d8;

  undefined8 local_c0;

  undefined1 auStack_b8 [8];

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  byte local_91;

  undefined8 local_90;

  undefined4 local_84;

  long_long local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  SEL local_58;

  ID local_50;

  cfstringStruct *local_48;

  cfstringStruct *local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_60 = 0;

  local_58 = param_2;

  local_50 = param_1;

  _objc_storeStrong(&local_60,param_3);

  local_68 = 0;

  _objc_storeStrong(&local_68,param_4);

  local_70 = 0;

  _objc_storeStrong(&local_70,param_5);

  local_78 = 0;

  _objc_storeStrong(&local_78,param_6);

  local_80 = param_7;

  uVar3 = _objc_msgSend_pendingExports(local_50,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  uVar2 = _objc_msgSend_containsObject_(uVar3,local_198,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if ((uVar2 & 1) == 0) {

    local_91 = 0;

    bVar1 = false;

    if (1 < (long)local_80) {

      uVar3 = _objc_msgSend_pendingOriginalExports(local_50,local_198);

      local_90 = _objc_retainAutoreleasedReturnValue(uVar3);

      local_91 = 1;

      uVar4 = _objc_msgSend_count(local_90,local_198);

      bVar1 = 1 < uVar4;

    }

    if ((local_91 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_90);

    }

    if (bVar1) {

      local_84 = 1;

    }

    else {

      uVar3 = _objc_msgSend_pendingExports(local_50,local_198);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      _objc_msgSend_addObject_(uVar3,local_198,local_70);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      if (local_80 - 1 != 0 && 0 < (long)local_80) {

        uVar3 = _objc_msgSend_pendingOriginalExports(local_80 - 1,local_50,local_198);

        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

        _objc_msgSend_addObject_(uVar3,local_198,local_70);

        (*(code *)PTR__objc_release_00110458)(uVar3);

      }

      uVar3 = _objc_msgSend_assetHandler(local_50,local_198);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      uVar5 = _objc_msgSend_root(uVar3,local_198);

      local_a0 = _objc_retainAutoreleasedReturnValue(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      uVar3 = _objc_msgSend_assetHandler(local_50,local_198);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      uVar5 = _objc_msgSend_accountToken(uVar3,local_198);

      local_a8 = _objc_retainAutoreleasedReturnValue(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_b0 = _objc_msgSend_mediaGeneration(local_50,local_198);

      _objc_initWeak(auStack_b8,local_50);

      local_d9 = 0;

      local_e9 = 0;

      if (local_80 - 1 == 0) {

        uVar3 = _objc_msgSend_previewQueue(local_50,local_198);

        local_230 = _objc_retainAutoreleasedReturnValue(uVar3);

        local_d9 = 1;

        local_d8 = local_230;

      }

      else {

        uVar3 = _objc_msgSend_mediaQueue(local_80 - 1,local_50,local_198);

        local_230 = _objc_retainAutoreleasedReturnValue(uVar3);

        local_e9 = 1;

        local_e8 = local_230;

      }

      local_c0 = (*(code *)PTR__objc_retain_00110460)(local_230);

      if ((local_e9 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_e8);

      }

      if ((local_d9 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_d8);

      }

      uVar3 = _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_198);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      uVar5 = _objc_msgSend_systemUptime(uVar3,local_198);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_48 = &cf_quality;

      local_f8 = uVar5;

      uVar3 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_198,local_80);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      local_40 = &cf_pending;

      local_38 = uVar3;

      uVar5 = _objc_msgSend_pendingExports(local_50,local_198);

      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

      uVar6 = _objc_msgSend_count(uVar5,local_198);

      uVar6 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_198,uVar6);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      local_30 = uVar6;

      uVar7 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                        (&_OBJC_CLASS___NSDictionary,local_198,&local_38,&local_48,2);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      _Trace(&cf_image_export_start);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      uVar3 = local_c0;

      local_168 = PTR___NSConcreteStackBlock_001104f0;

      local_160 = 0xc2000000;

      local_15c = 0;

      local_158 = 

      ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke;

      local_150 = &___block_descriptor_112_e8_32s40s48s56s64s72s80w_e5_v8__0l;

      local_148 = (*(code *)PTR__objc_retain_00110460)(local_68);

      local_140 = (*(code *)PTR__objc_retain_00110460)(local_60);

      local_138 = (*(code *)PTR__objc_retain_00110460)(local_70);

      local_130 = (*(code *)PTR__objc_retain_00110460)(local_a0);

      local_128 = (*(code *)PTR__objc_retain_00110460)(local_a8);

      local_110 = local_80;

      local_108 = local_f8;

      local_100 = local_b0;

      _objc_copyWeak(auStack_118,auStack_b8);

      local_120 = (*(code *)PTR__objc_retain_00110460)(local_78);

      _objc_msgSend_addOperationWithBlock_(uVar3,local_198,&local_168);

      _objc_storeStrong(&local_120,0);

      _objc_destroyWeak(auStack_118);

      _objc_storeStrong(&local_128,0);

      _objc_storeStrong(&local_130,0);

      _objc_storeStrong(&local_138,0);

      _objc_storeStrong(&local_140,0);

      _objc_storeStrong(&local_148,0);

      _objc_storeStrong(&local_c0,0);

      _objc_destroyWeak(auStack_b8);

      _objc_storeStrong(&local_a8,0);

      _objc_storeStrong(&local_a0,0);

      local_84 = 0;

    }

  }

  else {

    local_84 = 1;

  }

  _objc_storeStrong(&local_78,0);

  _objc_storeStrong(&local_70,0);

  _objc_storeStrong(&local_68,0);

  _objc_storeStrong(&local_60,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke @0x32ff4 ----


void ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke

               (long param_1)



{

  bool bVar1;

  undefined *puVar2;

  byte bVar3;

  int iVar4;

  undefined8 uVar5;

  long lVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  double dVar14;

  undefined8 local_170;

  undefined8 local_140;

  undefined8 local_138;

  undefined *local_120;

  undefined4 local_118;

  undefined4 local_114;

  code *local_110;

  undefined *local_108;

  undefined8 local_100;

  undefined8 local_f8;

  undefined8 local_f0;

  undefined1 auStack_e8 [8];

  undefined8 local_e0;

  undefined8 local_d8;

  bool local_c9;

  undefined8 local_c8;

  undefined8 local_c0;

  byte local_b1;

  undefined8 local_b0;

  undefined8 local_a8;

  char *local_a0;

  long local_98;

  bool local_89;

  undefined8 local_88;

  undefined8 local_80;

  long local_78;

  long local_70;

  cfstringStruct *local_68;

  cfstringStruct *local_60;

  cfstringStruct *local_58;

  cfstringStruct *local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_78 = param_1;

  local_70 = param_1;

  uVar5 = _objc_autoreleasePoolPush();

  lVar6 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x20),local_138);

  local_89 = false;

  if (lVar6 == 0) {

    local_140 = 0;

  }

  else {

    _objc_msgSend_dataWithContentsOfFile_options_error_

              (&_OBJC_CLASS___NSData,local_138,*(undefined8 *)(param_1 + 0x20),1,0);

    local_140 = _objc_retainAutoreleasedReturnValue();

    local_88 = local_140;

  }

  local_89 = lVar6 != 0;

  local_80 = (*(code *)PTR__objc_retain_00110460)(local_140);

  if ((local_89 & 1U) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_88);

  }

  local_98 = 0;

  uVar7 = _objc_msgSend_length(local_80,local_138);

  uVar9 = local_80;

  if (0xb < uVar7 && uVar7 - 0xc != 0) {

    _objc_retainAutorelease(uVar7 - 0xc);

    local_a0 = (char *)_objc_msgSend_bytes(uVar9,local_138);

    if ((*local_a0 == -1) && (local_a0[1] == -0x28)) {

      _objc_storeStrong(0,&local_98,&cf_jpg);

    }

    else if ((*local_a0 == -0x77) &&

            (((local_a0[1] == 'P' && (local_a0[2] == 'N')) && (local_a0[3] == 'G')))) {

      _objc_storeStrong(0,&local_98,&cf_png);

    }

    else {

      iVar4 = _memcmp(local_a0 + 4,"ftyp",4);

      if ((iVar4 == 0) &&

         (((iVar4 = _memcmp(local_a0 + 8,"heic",4), iVar4 == 0 ||

           (iVar4 = _memcmp(local_a0 + 8,"heix",4), iVar4 == 0)) ||

          ((iVar4 = _memcmp(local_a0 + 8,"mif1",4), iVar4 == 0 ||

           (iVar4 = _memcmp(local_a0 + 8,"msf1",4), iVar4 == 0)))))) {

        _objc_storeStrong(&local_98,&cf_heic);

      }

    }

  }

  if (local_98 == 0) {

    _UIImageJPEGRepresentation(0x3fef5c28f5c28f5c,*(undefined8 *)(param_1 + 0x28));

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uVar9 = local_80;

    local_80 = uVar8;

    (*(code *)PTR__objc_release_00110458)(uVar9);

    _objc_storeStrong(&local_98,&cf_jpg);

  }

  _Digest(*(undefined8 *)(param_1 + 0x30));

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_stringByAppendingPathExtension_(uVar9,local_138,local_98);

  local_a8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar9);

  _objc_msgSend_stringByAppendingPathComponent_(*(undefined8 *)(param_1 + 0x38),local_138,local_a8);

  local_b0 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_138);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  uVar7 = _objc_msgSend_fileExistsAtPath_(uVar9,local_138,local_b0);

  bVar3 = 1;

  if ((uVar7 & 1) == 0) {

    bVar3 = _objc_msgSend_writeToFile_options_error_(local_80,local_138,local_b0,0x40000001,0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar9);

  local_b1 = bVar3 & 1;

  local_c9 = false;

  bVar1 = (bVar3 & 1) == 0;

  if (bVar1) {

    local_170 = 0;

  }

  else {

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_138,&cf_wcm_cache________);

    local_170 = _objc_retainAutoreleasedReturnValue();

    local_c8 = local_170;

  }

  local_c9 = !bVar1;

  local_c0 = (*(code *)PTR__objc_retain_00110460)(local_170);

  if ((local_c9 & 1U) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_c8);

  }

  local_68 = &cf_quality;

  _objc_msgSend_numberWithInteger_

            (&_OBJC_CLASS___NSNumber,local_138,*(undefined8 *)(param_1 + 0x58));

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_60 = &cf_saved;

  local_48 = uVar9;

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_138,local_b1 & 1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_58 = &cf_bytes;

  local_40 = uVar8;

  uVar10 = _objc_msgSend_length(local_80,local_138);

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_138,uVar10);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_50 = &cf_ms;

  local_38 = uVar10;

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_138);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  dVar14 = (double)_objc_msgSend_systemUptime(uVar11,local_138);

  _objc_msgSend_numberWithDouble_

            ((dVar14 - *(double *)(param_1 + 0x60)) * 1000.0,&_OBJC_CLASS___NSNumber,local_138);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar12;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_138,&local_48,&local_68,4);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _Trace(&cf_image_export_finish);

  (*(code *)PTR__objc_release_00110458)(uVar13);

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  puVar2 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar9 = _objc_retainAutoreleasedReturnValue(puVar2);

  local_120 = PTR___NSConcreteStackBlock_001104f0;

  local_118 = 0xc2000000;

  local_114 = 0;

  local_110 = 

  ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke_2;

  local_108 = &___block_descriptor_80_e8_32s40s48s56w_e5_v8__0l;

  local_e0 = *(undefined8 *)(param_1 + 0x68);

  _objc_copyWeak(auStack_e8,param_1 + 0x50);

  local_100 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));

  local_f8 = (*(code *)PTR__objc_retain_00110460)(local_c0);

  local_d8 = *(undefined8 *)(param_1 + 0x58);

  local_f0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x48));

  _dispatch_async(uVar9,&local_120);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  _objc_storeStrong(&local_f0);

  _objc_storeStrong(&local_f8,0);

  _objc_storeStrong(&local_100,0);

  _objc_destroyWeak(auStack_e8);

  _objc_storeStrong(&local_c0,0);

  _objc_storeStrong(&local_b0,0);

  _objc_storeStrong(&local_a8,0);

  _objc_storeStrong(&local_98,0);

  _objc_storeStrong(&local_80,0);

  _objc_autoreleasePoolPop(uVar5);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2 @0x33950 ----


void ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke_2

               (long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 local_c8;

  long local_a8;

  undefined8 local_a0;

  long local_98;

  long local_90;

  undefined8 local_88;

  byte local_79;

  undefined8 local_78;

  byte local_69;

  undefined8 local_68;

  byte local_59;

  undefined8 local_58;

  long local_50;

  long local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  lVar6 = *(long *)(param_1 + 0x40);

  local_50 = param_1;

  local_48 = param_1;

  uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

  lVar3 = _objc_msgSend_mediaGeneration(uVar2,local_c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (lVar6 == lVar3) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

    _objc_msgSend_pendingExports(uVar2,local_c8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeObject_(uVar4,local_c8,*(undefined8 *)(param_1 + 0x20));

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

    _objc_msgSend_pendingOriginalExports(uVar2,local_c8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeObject_(uVar4,local_c8,*(undefined8 *)(param_1 + 0x20));

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    local_59 = 0;

    local_69 = 0;

    local_79 = 0;

    bVar1 = false;

    if (*(long *)(param_1 + 0x28) != 0) {

      lVar6 = *(long *)(param_1 + 0x48);

      local_58 = _objc_loadWeakRetained(param_1 + 0x38);

      local_59 = 1;

      _objc_msgSend_renderQualities(local_58,local_c8);

      local_68 = _objc_retainAutoreleasedReturnValue();

      local_69 = 1;

      _objc_msgSend_objectForKeyedSubscript_(local_68,local_c8,*(undefined8 *)(param_1 + 0x30));

      local_78 = _objc_retainAutoreleasedReturnValue();

      local_79 = 1;

      lVar3 = _objc_msgSend_integerValue(local_78,local_c8);

      bVar1 = lVar3 <= lVar6;

    }

    if ((local_79 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_78);

    }

    if ((local_69 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_68);

    }

    if ((local_59 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_58);

    }

    if (bVar1) {

      uVar7 = *(undefined8 *)(param_1 + 0x28);

      uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

      _objc_msgSend_renderKeys(uVar2,local_c8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setObject_forKeyedSubscript_

                (uVar4,local_c8,uVar7,*(undefined8 *)(param_1 + 0x30));

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_numberWithInteger_

                (&_OBJC_CLASS___NSNumber,local_c8,*(undefined8 *)(param_1 + 0x48));

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_loadWeakRetained(param_1 + 0x38);

      _objc_msgSend_renderQualities(uVar4,local_c8);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setObject_forKeyedSubscript_

                (uVar7,local_c8,uVar2,*(undefined8 *)(param_1 + 0x30));

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_componentsSeparatedByString_(*(undefined8 *)(param_1 + 0x30),local_c8,&cf__);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_firstObject(uVar2,local_c8);

      local_88 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar2);

      uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

      _objc_msgSend_cachedRows(uVar2,local_c8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_c8,local_88);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      local_90 = _objc_msgSend_mutableCopy(uVar7,local_c8);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      if (local_90 != 0) {

        uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

        lVar3 = _objc_msgSend_coverRevision(uVar2,local_c8);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        local_98 = lVar3 + 1;

        uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

        _objc_msgSend_setCoverRevision_(uVar2,local_c8,lVar3 + 1);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        _objc_msgSend_setObject_forKeyedSubscript_

                  (local_90,local_c8,*(undefined8 *)(param_1 + 0x28),&cf_image);

        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_c8,local_98);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_setObject_forKeyedSubscript_(local_90,local_c8,uVar2,&cf_coverVersion);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        lVar3 = local_90;

        uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

        _objc_msgSend_cachedRows(uVar2,local_c8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_setObject_forKeyedSubscript_(uVar4,local_c8,lVar3,local_88);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        local_40 = local_88;

        local_38 = *(undefined8 *)(param_1 + 0x28);

        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_c8,local_98);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        local_30 = uVar2;

        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_c8,&local_40,3);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_dataWithJSONObject_options_error_

                  (&_OBJC_CLASS___NSJSONSerialization,local_c8,uVar4,0,0);

        local_a0 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar4);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        uVar2 = _objc_alloc(&_OBJC_CLASS___NSString);

        local_a8 = _objc_msgSend_initWithData_encoding_(uVar2,local_c8,local_a0,4);

        uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

        uVar5 = _objc_msgSend_ready(uVar2,local_c8);

        bVar1 = local_a8 != 0;

        (*(code *)PTR__objc_release_00110458)(uVar2);

        if ((uVar5 & 1) != 0 && bVar1) {

          uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

          _objc_msgSend_web(uVar2,local_c8);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_c8,&cf_setCover_______);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_evaluateJavaScript_completionHandler_(uVar4,local_c8,uVar7,0);

          (*(code *)PTR__objc_release_00110458)(uVar7);

          (*(code *)PTR__objc_release_00110458)(uVar4);

          (*(code *)PTR__objc_release_00110458)(uVar2);

        }

        _objc_storeStrong(&local_a8);

        _objc_storeStrong(&local_a0,0);

      }

      uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

      _objc_msgSend_images(uVar2,local_c8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar7 = *(undefined8 *)(param_1 + 0x28);

      uVar8 = *(undefined8 *)(param_1 + 0x20);

      lVar3 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x28),local_c8);

      _objc_msgSend_setObject_forKey_cost_(uVar4,local_c8,uVar7,uVar8,lVar3 << 1);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      uVar2 = _objc_loadWeakRetained(param_1 + 0x38);

      _objc_msgSend_scheduleMediaReload(uVar2,local_c8);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_storeStrong(&local_90);

      _objc_storeStrong(&local_88,0);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke @0x36940 ----


void ___49__WCMFeedController_webView_didFinishNavigation___block_invoke(long param_1)



{

  undefined8 uVar1;

  double dVar2;

  double dVar3;

  undefined8 uVar4;

  double dVar5;

  double local_d8;

  undefined8 local_c8;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  local_d8 = (double)_objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);

  dVar2 = 19.0 / local_d8;

  _objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);

  local_d8 = 19.0 / local_d8;

  if (dVar2 < local_d8) {

    local_d8 = dVar2;

  }

  dVar3 = (double)_objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);

  dVar2 = local_d8;

  _objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);

  dVar2 = dVar2 * local_d8;

  dVar3 = (double)_CGSizeMake(dVar3 * local_d8);

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  dVar5 = (22.0 - dVar2) / 2.0;

  uVar4 = _CGRectMake((22.0 - dVar3) / 2.0);

  _objc_msgSend_drawInRect_(uVar4,dVar5,dVar3,dVar2,uVar1,local_c8);

  _objc_storeStrong(&local_20,0);

  return;

}





