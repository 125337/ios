// requestGalleryOriginal: @0x4e4d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCMFeedController::requestGalleryOriginal_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  uint local_204;
  undefined8 local_1e8;
  undefined8 local_168;
  long local_148;
  undefined8 local_138;
  undefined8 local_128;
  long local_f8;
  undefined4 local_f0;
  byte local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b1;
  long local_b0;
  byte local_a1;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  long_long local_88;
  SEL local_80;
  ID local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  bVar5 = true;
  local_88 = param_3;
  local_80 = param_2;
  local_78 = param_1;
  if (-1 < (long)param_3) {
    _objc_msgSend_galleryMedia(param_1,local_168);
    local_90 = _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    uVar7 = _objc_msgSend_count(local_90,local_168);
    bVar5 = true;
    if (param_3 < uVar7) {
      _objc_msgSend_gallery(local_78,local_168);
      local_a0 = _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      _objc_msgSend_superview(local_a0,local_168);
      local_b0 = _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      bVar5 = local_b0 == 0;
    }
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  if (bVar5) {
    local_69 = 0;
    goto LAB_0004f3e0;
  }
  _objc_msgSend_galleryMedia(local_78,local_168);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectAtIndexedSubscript_(uVar8,local_168,local_88);
  local_c0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar8);
  puVar3 = PTR____NSArray0__struct_00110718;
  local_c8 = 2;
  _Call(local_c0,&cf_uhdUrl);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar8,&cf_url,puVar3);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _Text();
  uVar10 = _objc_retainAutoreleasedReturnValue();
  lVar11 = _objc_msgSend_length(uVar10,local_168);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  puVar3 = PTR____NSArray0__struct_00110718;
  if (lVar11 == 0) {
    _Call(local_c0,&cf_hdUrl);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar8,&cf_url,puVar3);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _Text();
    uVar10 = _objc_retainAutoreleasedReturnValue();
    lVar11 = _objc_msgSend_length(uVar10,local_168);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    if (lVar11 != 0) {
      local_c8 = 3;
    }
  }
  else {
    local_c8 = 4;
  }
  _objc_msgSend_galleryRequestTimes(local_78,local_168);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_88);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar8,local_168);
  local_d0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  if (local_d0 == 0) {
    lVar12 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
    lVar11 = local_d0;
    local_d0 = lVar12;
    (*(code *)PTR__objc_release_00110458)(lVar11);
  }
  _objc_msgSend_objectForKeyedSubscript_(local_d0,local_168,&cf_attempts);
  local_d8 = _objc_retainAutoreleasedReturnValue();
  if (local_d8 == 0) {
    lVar12 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
    lVar11 = local_d8;
    local_d8 = lVar12;
    (*(code *)PTR__objc_release_00110458)(lVar11);
    _objc_msgSend_setObject_forKeyedSubscript_(local_d0,local_168,local_d8,&cf_attempts);
  }
  _objc_msgSend_galleryPath_quality_(local_78,local_168,local_c0,2);
  lVar11 = _objc_retainAutoreleasedReturnValue();
  local_e9 = 0;
  if (lVar11 == 0) {
    _objc_msgSend_objectForKeyedSubscript_
              (local_d8,local_168,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fcc8);
    local_e8 = _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    lVar12 = _objc_msgSend_integerValue(local_e8,local_168);
    if (1 < lVar12) goto LAB_0004ea20;
    local_1e8 = 2;
  }
  else {
LAB_0004ea20:
    local_1e8 = local_c8;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_e8);
  }
  (*(code *)PTR__objc_release_00110458)(lVar11);
  local_e0 = local_1e8;
  _objc_msgSend_galleryPath_quality_(local_78,local_168,local_c0,local_c8);
  lVar11 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar11 == 0) {
    _objc_msgSend_galleryPath_quality_(local_78,local_168,local_c0,local_e0);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar11 == 0) {
      _objc_msgSend_galleryRawPath_quality_(local_78,local_168,local_c0,local_e0);
      local_f8 = _objc_retainAutoreleasedReturnValue();
      local_204 = 0;
      if (local_f8 != 0) {
        _objc_msgSend_galleryInvalidFiles(local_78,local_168);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_galleryFileSignature_(local_78,local_168,local_f8);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        local_204 = _objc_msgSend_containsObject_(uVar8,local_168);
        local_204 = local_204 ^ 1;
        (*(code *)PTR__objc_release_00110458)(uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar8);
      }
      if ((local_204 & 1) == 0) {
        _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_168);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        dVar15 = (double)_objc_msgSend_systemUptime(uVar8,local_168);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        _objc_msgSend_objectForKeyedSubscript_(local_d0,local_168,&cf_time);
        lVar11 = _objc_retainAutoreleasedReturnValue();
        bVar2 = false;
        bVar1 = false;
        bVar5 = false;
        bVar6 = false;
        if (lVar11 != 0) {
          _objc_msgSend_objectForKeyedSubscript_(local_d0,local_168,&cf_time);
          local_128 = _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          dVar16 = (double)_objc_msgSend_doubleValue(local_128,local_168);
          IVar4 = local_78;
          uVar8 = local_c0;
          bVar6 = false;
          if (dVar15 - dVar16 < 8.0) {
            _objc_msgSend_objectForKeyedSubscript_(local_d0,local_168,&cf_quality);
            local_138 = _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar9 = _objc_msgSend_integerValue(local_138,local_168);
            _objc_msgSend_galleryPath_quality_(IVar4,local_168,uVar8,uVar9);
            local_148 = _objc_retainAutoreleasedReturnValue();
            bVar5 = true;
            bVar6 = local_148 == 0;
          }
        }
        if (bVar5) {
          (*(code *)PTR__objc_release_00110458)(local_148);
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_00110458)(local_138);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_00110458)(local_128);
        }
        (*(code *)PTR__objc_release_00110458)(lVar11);
        lVar11 = local_d8;
        if (bVar6) {
          local_69 = 0;
        }
        else {
          _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(lVar11,local_168);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          lVar12 = _objc_msgSend_integerValue(uVar9,local_168);
          (*(code *)PTR__objc_release_00110458)(uVar9);
          (*(code *)PTR__objc_release_00110458)(uVar8);
          lVar11 = local_d8;
          if (lVar12 < 3) {
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_objectForKeyedSubscript_(lVar11,local_168);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            lVar11 = _objc_msgSend_integerValue(uVar9,local_168);
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,lVar11 + 1);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            lVar11 = local_d8;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar13 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(lVar11,local_168,uVar10);
            (*(code *)PTR__objc_release_00110458)(uVar13);
            (*(code *)PTR__objc_release_00110458)(uVar10);
            (*(code *)PTR__objc_release_00110458)(uVar9);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(local_d0,local_168);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            _objc_msgSend_numberWithDouble_(dVar15,&_OBJC_CLASS___NSNumber,local_168);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(local_d0,local_168,uVar8,&cf_time);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            lVar11 = local_d0;
            _objc_msgSend_galleryRequestTimes(local_78,local_168);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_88);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(uVar8,local_168,lVar11);
            (*(code *)PTR__objc_release_00110458)(uVar9);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            _objc_msgSend_facade(local_78,local_168);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            local_38 = local_c0;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            local_30 = uVar9;
            _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_168,&local_38,2);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            _Call(uVar8,&cf_downloadMedia_downloadType_);
            _objc_unsafeClaimAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)(uVar10);
            (*(code *)PTR__objc_release_00110458)(uVar9);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            local_68 = &cf_page;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_88);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            local_60 = &cf_quality;
            local_50 = uVar8;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            lVar11 = local_d8;
            local_58 = &cf_attempt;
            local_48 = uVar9;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_168,local_e0);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_objectForKeyedSubscript_(lVar11,local_168);
            uVar13 = _objc_retainAutoreleasedReturnValue();
            local_40 = uVar13;
            _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_168,&local_50,&local_68,3);
            uVar14 = _objc_retainAutoreleasedReturnValue();
            _Trace(&cf_gallery_original_request);
            (*(code *)PTR__objc_release_00110458)(uVar14);
            (*(code *)PTR__objc_release_00110458)(uVar13);
            (*(code *)PTR__objc_release_00110458)(uVar10);
            (*(code *)PTR__objc_release_00110458)(uVar9);
            (*(code *)PTR__objc_release_00110458)(uVar8);
            local_69 = 1;
          }
          else {
            local_69 = 0;
          }
        }
      }
      else {
        _objc_msgSend_galleryImageData_(local_78,local_168,local_f8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_69 = 0;
      }
      local_f0 = 1;
      _objc_storeStrong(&local_f8,0);
    }
    else {
      local_69 = 0;
      local_f0 = 1;
    }
  }
  else {
    local_69 = 0;
    local_f0 = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
LAB_0004f3e0:
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return local_69 & 1;
}

