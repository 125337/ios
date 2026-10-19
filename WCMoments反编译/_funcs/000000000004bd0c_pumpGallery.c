// pumpGallery @0x4bd0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMFeedController::pumpGallery(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  ulong local_490;
  ulong local_488;
  ulong local_310;
  ulong local_308;
  undefined8 local_2c8;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  undefined8 local_240;
  byte local_231;
  long local_230;
  byte local_221;
  undefined8 local_220;
  byte local_211;
  undefined8 local_210;
  byte local_201;
  undefined8 local_200;
  byte local_1f1;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  ulong local_198;
  double local_190;
  byte local_181;
  undefined8 local_180;
  byte local_171;
  undefined8 local_170;
  byte local_161;
  undefined8 local_160;
  byte local_151;
  long local_150;
  byte local_141;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_138 = param_2;
  local_130 = param_1;
  uVar3 = _objc_msgSend_galleryPumping(param_1);
  local_141 = 0;
  local_151 = 0;
  local_161 = 0;
  local_171 = 0;
  local_181 = 0;
  bVar2 = true;
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_gallery(local_130,local_2c8);
    local_140 = _objc_retainAutoreleasedReturnValue();
    local_141 = 1;
    _objc_msgSend_superview(local_140,local_2c8);
    local_150 = _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    bVar2 = true;
    if (local_150 != 0) {
      _objc_msgSend_galleryAccount(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      local_160 = uVar4;
      _objc_msgSend_account(local_130,local_2c8);
      local_170 = _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      uVar3 = _objc_msgSend_isEqual_(uVar4,local_2c8);
      bVar2 = true;
      if ((uVar3 & 1) != 0) {
        _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_2c8);
        local_180 = _objc_retainAutoreleasedReturnValue();
        local_181 = 1;
        lVar5 = _objc_msgSend_applicationState(local_180,local_2c8);
        bVar2 = lVar5 != 0;
      }
    }
  }
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_160);
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_150);
  }
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_140);
  }
  if (!bVar2) {
    _objc_msgSend_setGalleryPumping_(local_130,local_2c8,1);
    _objc_msgSend_settleGalleryIfIdle(local_130,local_2c8);
    _objc_msgSend_updateGallery(local_130,local_2c8);
    _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_2c8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar11 = (double)_objc_msgSend_systemUptime(uVar4,local_2c8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_198 = 0;
    local_190 = dVar11;
    _memset(auStack_1e0,0,0x40);
    _objc_msgSend_galleryRequestTimes(local_130,local_2c8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_308 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar4,local_2c8,auStack_1e0,auStack_a8,0x10);
    if (local_308 != 0) {
      lVar5 = *local_1d0;
      local_310 = 0;
      do {
        do {
          if (*local_1d0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar5,uVar4);
          }
          local_1a0 = *(undefined8 *)(local_1d8 + local_310 * 8);
          _objc_msgSend_galleryRequestTimes(local_130,local_2c8);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar6,local_2c8,local_1a0);
          local_1e8 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar6);
          uVar3 = _objc_msgSend_unsignedIntegerValue(local_1a0,local_2c8);
          _objc_msgSend_galleryMedia(local_130,local_2c8);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_msgSend_count(uVar6,local_2c8);
          dVar11 = local_190;
          local_1f1 = 0;
          local_201 = 0;
          local_211 = 0;
          local_221 = 0;
          local_231 = 0;
          bVar2 = false;
          if (uVar3 < uVar7) {
            _objc_msgSend_objectForKeyedSubscript_(local_1e8,local_2c8,&cf_time);
            local_1f0 = _objc_retainAutoreleasedReturnValue();
            local_1f1 = 1;
            dVar12 = (double)_objc_msgSend_doubleValue(local_1f0,local_2c8);
            IVar1 = local_130;
            bVar2 = false;
            if (dVar11 - dVar12 < 8.0) {
              _objc_msgSend_galleryMedia(local_130,local_2c8);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              local_201 = 1;
              local_200 = uVar8;
              uVar9 = _objc_msgSend_unsignedIntegerValue(local_1a0,local_2c8);
              _objc_msgSend_objectAtIndexedSubscript_(uVar8,local_2c8,uVar9);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              local_211 = 1;
              local_210 = uVar8;
              _objc_msgSend_objectForKeyedSubscript_(local_1e8,local_2c8,&cf_quality);
              local_220 = _objc_retainAutoreleasedReturnValue();
              local_221 = 1;
              uVar9 = _objc_msgSend_integerValue(local_220,local_2c8);
              _objc_msgSend_galleryPath_quality_(IVar1,local_2c8,uVar8,uVar9);
              local_230 = _objc_retainAutoreleasedReturnValue();
              local_231 = 1;
              bVar2 = local_230 == 0;
            }
          }
          if ((local_231 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_230);
          }
          if ((local_221 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_220);
          }
          if ((local_211 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_210);
          }
          if ((local_201 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_200);
          }
          if ((local_1f1 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_1f0);
          }
          (*(code *)PTR__objc_release_00110458)(uVar6);
          if (bVar2) {
            local_198 = local_198 + 1;
          }
          _objc_storeStrong(&local_1e8,0);
          local_310 = local_310 + 1;
        } while (local_310 < local_308);
        local_308 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_2c8,auStack_1e0,auStack_a8,0x10);
        local_310 = 0;
      } while (local_308 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_240 = _objc_opt_new(&_OBJC_CLASS___NSMutableOrderedSet);
    _objc_msgSend_gallery(local_130,local_2c8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar5 = _objc_msgSend_currentPage(uVar4,local_2c8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = local_240;
    local_248 = lVar5;
    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,lVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(uVar4,local_2c8);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    local_250 = local_248;
    while( true ) {
      local_250 = local_250 + 1;
      lVar5 = local_250;
      _objc_msgSend_galleryMedia(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      lVar10 = _objc_msgSend_count(uVar4,local_2c8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if (lVar10 <= lVar5) break;
      _objc_msgSend_galleryRequestTimes(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_250);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_2c8);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar4 = local_240;
      if (lVar5 == 0) {
        _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_250);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addObject_(uVar4,local_2c8);
        (*(code *)PTR__objc_release_00110458)(uVar6);
      }
    }
    local_258 = 0;
    while( true ) {
      lVar5 = local_258;
      _objc_msgSend_galleryMedia(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      lVar10 = _objc_msgSend_count(uVar4,local_2c8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if (lVar10 <= lVar5) break;
      _objc_msgSend_galleryRequestTimes(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_258);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_2c8);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar4 = local_240;
      if (lVar5 == 0) {
        _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_258);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addObject_(uVar4,local_2c8);
        (*(code *)PTR__objc_release_00110458)(uVar6);
      }
      local_258 = local_258 + 1;
    }
    lVar5 = local_248 + 1;
    _objc_msgSend_galleryMedia(local_130,local_2c8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar10 = _objc_msgSend_count(uVar4,local_2c8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = local_240;
    if (lVar5 < lVar10) {
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_248 + 1);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar4,local_2c8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    local_260 = 0;
    while( true ) {
      lVar5 = local_260;
      _objc_msgSend_galleryMedia(local_130,local_2c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      lVar10 = _objc_msgSend_count(uVar4,local_2c8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar4 = local_240;
      if (lVar10 <= lVar5) break;
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2c8,local_260);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar4,local_2c8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      local_260 = local_260 + 1;
    }
    _memset(auStack_2a8,0,0x40);
    uVar4 = (*(code *)PTR__objc_retain_00110460)(local_240);
    local_488 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar4,local_2c8,auStack_2a8,auStack_128,0x10);
    if (local_488 != 0) {
      lVar5 = *local_298;
      local_490 = 0;
      do {
        do {
          if (*local_298 - lVar5 != 0) {
            _objc_enumerationMutation(*local_298 - lVar5,uVar4);
          }
          IVar1 = local_130;
          local_268 = *(undefined8 *)(local_2a0 + local_490 * 8);
          if (1 < local_198) goto LAB_0004cab8;
          uVar6 = _objc_msgSend_integerValue(local_268,local_2c8);
          uVar3 = _objc_msgSend_requestGalleryOriginal_(IVar1,local_2c8,uVar6);
          if ((uVar3 & 1) != 0) {
            local_198 = local_198 + 1;
          }
          local_490 = local_490 + 1;
        } while (local_490 < local_488);
        local_488 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_2c8,auStack_2a8,auStack_128,0x10);
        local_490 = 0;
      } while (local_488 != 0);
    }
LAB_0004cab8:
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_setGalleryPumping_(local_130,local_2c8,0);
    _objc_storeStrong(&local_240,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

