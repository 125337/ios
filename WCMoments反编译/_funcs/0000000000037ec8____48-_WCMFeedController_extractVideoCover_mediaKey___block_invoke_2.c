// ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2 @0x37ec8

void ___48__WCMFeedController_extractVideoCover_mediaKey___block_invoke_2(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  local_50 = param_1;
  local_48 = param_1;
  uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
  _objc_msgSend_account(uVar3,local_a0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_isEqualToString_(uVar7,local_a0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
      _objc_msgSend_videoRequests(uVar3,local_a0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_removeObject_(uVar4,local_a0,*(undefined8 *)(param_1 + 0x30));
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
      _objc_msgSend_videoURIs(uVar3,local_a0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setObject_forKeyedSubscript_
                (uVar4,local_a0,uVar7,*(undefined8 *)(param_1 + 0x30));
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_componentsSeparatedByString_(*(undefined8 *)(param_1 + 0x30),local_a0,&cf__);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_firstObject(uVar3,local_a0);
      local_58 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
      _objc_msgSend_cachedRows(uVar3,local_a0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_a0,local_58);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      local_60 = _objc_msgSend_mutableCopy(uVar7,local_a0);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (local_60 != 0) {
        uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
        lVar5 = _objc_msgSend_coverRevision(uVar3,local_a0);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_68 = lVar5 + 1;
        uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
        _objc_msgSend_setCoverRevision_(uVar3,local_a0,lVar5 + 1);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_setObject_forKeyedSubscript_
                  (local_60,local_a0,*(undefined8 *)(param_1 + 0x28),&cf_image);
        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_a0,local_68);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setObject_forKeyedSubscript_(local_60,local_a0,uVar3,&cf_coverVersion);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        lVar5 = local_60;
        uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
        _objc_msgSend_cachedRows(uVar3,local_a0);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setObject_forKeyedSubscript_(uVar4,local_a0,lVar5,local_58);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_40 = local_58;
        local_38 = *(undefined8 *)(param_1 + 0x28);
        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_a0,local_68);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        local_30 = uVar3;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_a0,&local_40,3);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_dataWithJSONObject_options_error_
                  (&_OBJC_CLASS___NSJSONSerialization,local_a0,uVar4,0,0);
        local_70 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
        local_78 = _objc_msgSend_initWithData_encoding_(uVar3,local_a0,local_70,4);
        uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
        uVar6 = _objc_msgSend_ready(uVar3,local_a0);
        bVar1 = local_78 != 0;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        if ((uVar6 & 1) != 0 && bVar1) {
          uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
          _objc_msgSend_web(uVar3,local_a0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_a0,&cf_setCover_______);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_evaluateJavaScript_completionHandler_(uVar4,local_a0,uVar7,0);
          (*(code *)PTR__objc_release_00110458)(uVar7);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          (*(code *)PTR__objc_release_00110458)(uVar3);
        }
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
      uVar3 = _objc_loadWeakRetained(param_1 + 0x38);
      _objc_msgSend_scheduleMediaReload(uVar3,local_a0);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

