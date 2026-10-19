// ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2 @0x33950

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

