// updateGallery @0x4a808

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::updateGallery(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double in_d1;
  undefined **local_710;
  long local_6f8;
  long local_6b8;
  cfstringStruct *local_628;
  cfstringStruct *local_620;
  ulong local_5d8;
  ulong local_5d0;
  undefined8 local_588;
  undefined8 local_578;
  ulong local_548;
  ulong local_540;
  ulong local_508;
  ulong local_500;
  undefined8 local_4c0;
  uint local_4a4;
  undefined *local_4a0;
  undefined4 local_498;
  undefined4 local_494;
  code *local_490;
  undefined *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined *local_460;
  undefined4 local_458;
  undefined4 local_454;
  code *local_450;
  undefined *local_448;
  undefined8 local_440;
  byte local_431;
  long local_430;
  undefined8 local_428;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  code *local_410;
  undefined *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  byte local_3e2;
  bool local_3e1;
  cfstringStruct *local_3e0;
  undefined8 local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  byte local_3b1;
  cfstringStruct *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  double local_398;
  double local_390;
  undefined8 local_388;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  undefined8 local_340;
  byte local_331;
  undefined8 local_330;
  long local_328;
  long local_320;
  bool local_311;
  undefined8 local_310;
  long local_308;
  bool local_2f9;
  undefined8 local_2f8;
  byte local_2e9;
  undefined8 local_2e8;
  undefined8 local_2e0;
  int local_2d4;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  long local_288;
  long local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined8 local_230;
  ulong local_228;
  byte local_219;
  undefined8 local_218;
  byte local_209;
  undefined8 local_208;
  byte local_1f9;
  undefined8 local_1f8;
  SEL local_1f0;
  ID local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_1f0 = param_2;
  local_1e8 = param_1;
  _objc_msgSend_gallery(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(uVar5,local_4c0);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  local_1f9 = 0;
  local_209 = 0;
  local_4a4 = 1;
  if (lVar6 != 0) {
    _objc_msgSend_galleryAccount(local_1e8,local_4c0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    local_1f9 = 1;
    local_1f8 = uVar7;
    _objc_msgSend_account(local_1e8,local_4c0);
    local_208 = _objc_retainAutoreleasedReturnValue();
    local_209 = 1;
    uVar8 = _objc_msgSend_isEqual_(uVar7,local_4c0);
    local_4a4 = 1;
    if ((uVar8 & 1) != 0) {
      local_4a4 = _objc_msgSend_galleryIsInteracting(local_1e8,local_4c0);
    }
  }
  if ((local_209 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_208);
  }
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_1f8);
  }
  (*(code *)PTR__objc_release_00110458)(lVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((local_4a4 & 1) == 0) {
    local_218 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
    local_219 = 0;
    local_228 = 0;
    _objc_msgSend_gallery(local_1e8,local_4c0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_dataSourceArray(uVar5,local_4c0);
    local_230 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _memset(auStack_278,0,0x40);
    _objc_msgSend_galleryMedia(local_1e8,local_4c0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_500 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar5,local_4c0,auStack_278,auStack_a8,0x10);
    if (local_500 != 0) {
      lVar6 = *local_268;
      local_508 = 0;
      do {
        do {
          if (*local_268 - lVar6 != 0) {
            _objc_enumerationMutation(*local_268 - lVar6,uVar5);
          }
          local_238 = *(undefined8 *)(local_270 + local_508 * 8);
          local_280 = 0;
          local_288 = 0;
          _memset(auStack_2d0,0,0x40);
          uVar7 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010faa0);
          local_540 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar7,local_4c0,auStack_2d0,auStack_128,0x10);
          if (local_540 != 0) {
            lVar15 = *local_2c0;
            local_548 = 0;
            do {
              do {
                if (*local_2c0 - lVar15 != 0) {
                  _objc_enumerationMutation(*local_2c0 - lVar15,uVar7);
                }
                IVar2 = local_1e8;
                uVar12 = local_238;
                local_290 = *(undefined8 *)(local_2c8 + local_548 * 8);
                uVar9 = _objc_msgSend_integerValue(local_290,local_4c0);
                _objc_msgSend_galleryPath_quality_(IVar2,local_4c0,uVar12,uVar9);
                lVar10 = _objc_retainAutoreleasedReturnValue();
                lVar1 = local_280;
                local_280 = lVar10;
                (*(code *)PTR__objc_release_00110458)(lVar1);
                if (local_280 != 0) {
                  local_288 = _objc_msgSend_integerValue(local_290,local_4c0);
                  local_2d4 = 4;
                  goto LAB_0004ac30;
                }
                local_548 = local_548 + 1;
              } while (local_548 < local_540);
              local_540 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                    (uVar7,local_4c0,auStack_2d0,auStack_128,0x10);
              local_548 = 0;
            } while (local_540 != 0);
          }
          local_2d4 = 0;
LAB_0004ac30:
          (*(code *)PTR__objc_release_00110458)(uVar7);
          local_2e9 = 0;
          local_2f9 = false;
          bVar3 = local_280 == 0;
          if (bVar3) {
            local_578 = 0;
          }
          else {
            _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_4c0);
            local_2e8 = _objc_retainAutoreleasedReturnValue();
            local_2e9 = 1;
            _objc_msgSend_attributesOfItemAtPath_error_(local_2e8,local_4c0,local_280,0);
            local_578 = _objc_retainAutoreleasedReturnValue();
            local_2f8 = local_578;
          }
          local_2f9 = !bVar3;
          local_2e0 = (*(code *)PTR__objc_retain_00110460)(local_578);
          if ((local_2f9 & 1U) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_2f8);
          }
          if ((local_2e9 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_2e8);
          }
          local_311 = false;
          bVar3 = local_280 == 0;
          if (bVar3) {
            local_588 = 0;
          }
          else {
            _objc_msgSend_galleryImageData_(local_1e8,local_4c0,local_280);
            local_588 = _objc_retainAutoreleasedReturnValue();
            local_310 = local_588;
          }
          local_311 = !bVar3;
          local_308 = (*(code *)PTR__objc_retain_00110460)(local_588);
          if ((local_311 & 1U) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_310);
          }
          uVar8 = local_228;
          local_320 = 0;
          local_328 = 0;
          if (local_280 == 0) {
            _objc_msgSend_gallery(local_1e8,local_4c0);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            uVar11 = _objc_msgSend_currentPage(uVar7,local_4c0);
            uVar13 = local_228;
            local_331 = 0;
            bVar3 = true;
            if (uVar8 != uVar11) {
              _objc_msgSend_gallery(local_1e8,local_4c0);
              local_330 = _objc_retainAutoreleasedReturnValue();
              local_331 = 1;
              lVar15 = _objc_msgSend_currentPage(local_330,local_4c0);
              bVar3 = uVar13 == lVar15 + 1U;
            }
            if ((local_331 & 1) != 0) {
              (*(code *)PTR__objc_release_00110458)(local_330);
            }
            (*(code *)PTR__objc_release_00110458)(uVar7);
            if (bVar3) {
              _memset(auStack_380,0,0x40);
              uVar7 = (*(code *)PTR__objc_retain_00110460)
                                (&PTR__OBJC_CLASS___NSConstantArray_0010fab8);
              local_5d0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                    (uVar7,local_4c0,auStack_380,auStack_1a8,0x10);
              if (local_5d0 != 0) {
                lVar15 = *local_370;
                local_5d8 = 0;
                do {
                  do {
                    if (*local_370 - lVar15 != 0) {
                      _objc_enumerationMutation(*local_370 - lVar15,uVar7);
                    }
                    uVar12 = local_238;
                    local_340 = *(undefined8 *)(local_378 + local_5d8 * 8);
                    local_1b0 = local_340;
                    _objc_msgSend_arrayWithObjects_count_
                              (&_OBJC_CLASS___NSArray,local_4c0,&local_1b0,1);
                    uVar9 = _objc_retainAutoreleasedReturnValue();
                    _Call(uVar12,&cf_imageOfSize_);
                    local_388 = _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_release_00110458)(uVar9);
                    uVar12 = local_388;
                    uVar9 = _objc_opt_class(&_OBJC_CLASS___UIImage);
                    uVar8 = _objc_opt_isKindOfClass(uVar12,uVar9);
                    bVar3 = false;
                    if ((uVar8 & 1) != 0) {
                      local_398 = (double)_objc_msgSend_size(local_388,local_4c0);
                      bVar3 = 0.0 < local_398;
                      local_390 = in_d1;
                    }
                    if (bVar3) {
                      _objc_storeStrong(&local_320,local_388);
                      local_328 = _objc_msgSend_integerValue(local_340,local_4c0);
                      local_2d4 = 6;
                    }
                    else {
                      local_2d4 = 0;
                    }
                    _objc_storeStrong(&local_388,0);
                    if (local_2d4 != 0) goto LAB_0004b0fc;
                    local_5d8 = local_5d8 + 1;
                  } while (local_5d8 < local_5d0);
                  local_5d0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                        (uVar7,local_4c0,auStack_380,auStack_1a8,0x10);
                  local_5d8 = 0;
                } while (local_5d0 != 0);
              }
              local_2d4 = 0;
LAB_0004b0fc:
              (*(code *)PTR__objc_release_00110458)(uVar7);
            }
            if (local_320 == 0) {
              _Call(local_238,&cf_imageOfSize_,&PTR__OBJC_CLASS___NSConstantArray_0010fad0);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              local_3a0 = uVar7;
              uVar12 = _objc_opt_class(&_OBJC_CLASS___UIImage);
              uVar8 = _objc_opt_isKindOfClass(uVar7,uVar12);
              if ((uVar8 & 1) != 0) {
                _objc_storeStrong(&local_320,local_3a0);
              }
              _objc_storeStrong(&local_3a0,0);
            }
          }
          local_3b1 = 0;
          local_3e1 = false;
          if (local_308 == 0) {
            bVar3 = local_320 == 0;
            if (bVar3) {
              local_628 = &cf_pending;
            }
            else {
              dVar16 = (double)_objc_msgSend_size(local_320,local_4c0);
              local_3c8 = dVar16;
              local_3c0 = in_d1;
              dVar17 = (double)_objc_msgSend_scale(local_320,local_4c0);
              in_d1 = dVar16 * dVar17;
              local_3d8 = _objc_msgSend_size(local_320,local_4c0);
              local_3d0 = dVar17;
              _objc_msgSend_scale(local_320,local_4c0);
              _objc_msgSend_stringWithFormat_
                        (&_OBJC_CLASS___NSString,local_4c0,&cf_native__ld___0fx__0f);
              local_628 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
              local_3e0 = local_628;
            }
            local_3e1 = !bVar3;
            local_620 = local_628;
          }
          else {
            _objc_msgSend_galleryFileSignature_(local_1e8,local_4c0,local_280);
            local_620 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
            local_3b1 = 1;
            local_3b0 = local_620;
          }
          local_3a8 = (*(code *)PTR__objc_retain_00110460)(local_620);
          if ((local_3e1 & 1U) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_3e0);
          }
          if ((local_3b1 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_3b0);
          }
          _objc_msgSend_galleryPaths(local_1e8,local_4c0);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_4c0,local_228);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar7,local_4c0);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          bVar4 = _objc_msgSend_isEqual_(uVar9,local_4c0,local_3a8);
          (*(code *)PTR__objc_release_00110458)(uVar9);
          (*(code *)PTR__objc_release_00110458)(uVar12);
          (*(code *)PTR__objc_release_00110458)(uVar7);
          uVar8 = local_228;
          local_3e2 = (bVar4 ^ 1) & 1;
          if ((((bVar4 ^ 1) & 1) == 0) &&
             (uVar13 = _objc_msgSend_count(local_230,local_4c0), uVar7 = local_218, uVar8 < uVar13))
          {
            _objc_msgSend_objectAtIndexedSubscript_(local_230,local_4c0,local_228);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_addObject_(uVar7,local_4c0);
            (*(code *)PTR__objc_release_00110458)(uVar12);
          }
          else {
            local_3f0 = _objc_opt_new(&objc::class_t::WCMYBIBImageData);
            _objc_msgSend_setAllowSaveToPhotoAlbum_(local_3f0,local_4c0,0);
            if (local_308 == 0) {
              local_431 = 0;
              bVar3 = local_320 == 0;
              if (bVar3) {
                _objc_msgSend_galleryPlaceholder(local_1e8,local_4c0);
                local_6b8 = _objc_retainAutoreleasedReturnValue();
                local_430 = local_6b8;
              }
              else {
                local_6b8 = local_320;
              }
              local_431 = bVar3;
              local_428 = (*(code *)PTR__objc_retain_00110460)(local_6b8);
              if ((local_431 & 1) != 0) {
                (*(code *)PTR__objc_release_00110458)(local_430);
              }
              local_460 = PTR___NSConcreteStackBlock_001104f0;
              local_458 = 0xc2000000;
              local_454 = 0;
              local_450 = ___34__WCMFeedController_updateGallery__block_invoke_2054;
              local_448 = &___block_descriptor_40_e8_32s_e14___UIImage_8__0l;
              local_440 = (*(code *)PTR__objc_retain_00110460)(local_428);
              _objc_msgSend_setImage_(local_3f0,local_4c0,&local_460);
              _objc_storeStrong(&local_440);
              _objc_storeStrong(&local_428,0);
            }
            else {
              local_3f8 = (*(code *)PTR__objc_retain_00110460)(local_308);
              local_420 = PTR___NSConcreteStackBlock_001104f0;
              local_418 = 0xc2000000;
              local_414 = 0;
              local_410 = ___34__WCMFeedController_updateGallery__block_invoke;
              local_408 = &___block_descriptor_40_e8_32s_e13___NSData_8__0l;
              local_400 = (*(code *)PTR__objc_retain_00110460)(local_3f8);
              _objc_msgSend_setImageData_(local_3f0,local_4c0,&local_420);
              _objc_storeStrong(&local_400);
              _objc_storeStrong(&local_3f8,0);
            }
            _objc_msgSend_addObject_(local_218,local_4c0,local_3f0);
            if ((local_308 != 0) || (local_328 != 0)) {
              local_1e0 = &cf_page;
              _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_4c0,local_228);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              local_1d8 = &cf_quality;
              if (local_308 == 0) {
                local_6f8 = local_328;
              }
              else {
                local_6f8 = local_288;
              }
              local_1c8 = uVar7;
              _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_4c0,local_6f8);
              uVar12 = _objc_retainAutoreleasedReturnValue();
              local_1d0 = &cf_bytes;
              local_1c0 = uVar12;
              _objc_msgSend_objectForKeyedSubscript_
                        (local_2e0,local_4c0,*(undefined8 *)PTR__NSFileSize_00110178);
              ppuVar14 = (undefined **)_objc_retainAutoreleasedReturnValue();
              local_710 = ppuVar14;
              if (ppuVar14 == (undefined **)0x0) {
                local_710 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
              }
              local_1b8 = local_710;
              _objc_msgSend_dictionaryWithObjects_forKeys_count_
                        (&_OBJC_CLASS___NSDictionary,local_4c0,&local_1c8,&local_1e0,3);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _Trace(&cf_gallery_original_ready);
              (*(code *)PTR__objc_release_00110458)(uVar9);
              (*(code *)PTR__objc_release_00110458)(ppuVar14);
              (*(code *)PTR__objc_release_00110458)(uVar12);
              (*(code *)PTR__objc_release_00110458)(uVar7);
            }
            _objc_storeStrong(&local_3f0,0);
          }
          uVar7 = local_3a8;
          local_219 = (local_219 & 1) != 0 || (local_3e2 & 1) != 0;
          _objc_msgSend_galleryPaths(local_1e8,local_4c0);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_4c0,local_228);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setObject_forKeyedSubscript_(uVar12,local_4c0,uVar7);
          (*(code *)PTR__objc_release_00110458)(uVar9);
          (*(code *)PTR__objc_release_00110458)(uVar12);
          local_228 = local_228 + 1;
          _objc_storeStrong(&local_3a8);
          _objc_storeStrong(&local_320,0);
          _objc_storeStrong(&local_308,0);
          _objc_storeStrong(&local_2e0,0);
          _objc_storeStrong(&local_280,0);
          local_508 = local_508 + 1;
        } while (local_508 < local_500);
        local_500 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar5,local_4c0,auStack_278,auStack_a8,0x10);
        local_508 = 0;
      } while (local_500 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar5);
    if (((local_219 & 1) != 0) || (lVar6 = _objc_msgSend_count(local_230,local_4c0), lVar6 == 0)) {
      _objc_msgSend_gallery(local_1e8,local_4c0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_currentPage(uVar5,local_4c0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_4a0 = PTR___NSConcreteStackBlock_001104f0;
      local_498 = 0xc2000000;
      local_494 = 0;
      local_490 = ___34__WCMFeedController_updateGallery__block_invoke_2058;
      local_488 = &___block_descriptor_56_e8_32s40s_e5_v8__0l;
      local_468 = uVar7;
      local_480 = (*(code *)PTR__objc_retain_00110460)(local_1e8);
      local_478 = (*(code *)PTR__objc_retain_00110460)(local_218);
      local_470 = local_468;
      _objc_msgSend_performWithoutAnimation_(&_OBJC_CLASS___UIView,local_4c0,&local_4a0);
      _objc_storeStrong(&local_478);
      _objc_storeStrong(&local_480,0);
    }
    _objc_msgSend_gallery(local_1e8,local_4c0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_currentPage(uVar5,local_4c0);
    _objc_msgSend_count(local_218,local_4c0);
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_4c0,&cf__ld__lu);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_galleryCounter(local_1e8,local_4c0);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar12,local_4c0,uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_218,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

