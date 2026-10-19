// ___39-[WCMFeedController_publishPendingFeed]_block_invoke @0x43514

void ___39__WCMFeedController_publishPendingFeed__block_invoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  ulong local_250;
  ulong local_248;
  undefined8 local_208;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 local_1a0;
  byte local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  byte local_111;
  long local_110;
  undefined8 local_108;
  double local_100;
  long local_f8;
  long local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_f8 = param_1;
  local_f0 = param_1;
  uVar2 = _objc_autoreleasePoolPush();
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_208);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar12 = (double)_objc_msgSend_systemUptime(uVar3,local_208);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_100 = dVar12;
  _objc_msgSend_dataWithJSONObject_options_error_
            (&_OBJC_CLASS___NSJSONSerialization,local_208,*(undefined8 *)(param_1 + 0x20),0,0);
  local_108 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
  local_110 = _objc_msgSend_initWithData_encoding_(uVar3,local_208,local_108,4);
  local_111 = false;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar4 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x28),local_208);
    lVar5 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x20),local_208);
    local_111 = lVar4 == lVar5;
  }
  local_120 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_128 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
  _memset(auStack_170,0,0x40);
  uVar3 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_248 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_208,auStack_170,auStack_a8,0x10);
  if (local_248 != 0) {
    lVar4 = *local_160;
    local_250 = 0;
    do {
      do {
        if (*local_160 - lVar4 != 0) {
          _objc_enumerationMutation(*local_160 - lVar4,uVar3);
        }
        local_130 = *(undefined8 *)(local_168 + local_250 * 8);
        _objc_msgSend_objectForKeyedSubscript_(local_130,local_208,&cf_id);
        local_178 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setObject_forKeyedSubscript_(local_128,local_208,local_130,local_178);
        _objc_msgSend_objectForKeyedSubscript_(*(undefined8 *)(param_1 + 0x28),local_208,local_178);
        local_180 = _objc_retainAutoreleasedReturnValue();
        if (local_180 == 0) {
          local_111 = 0;
        }
        uVar6 = _objc_msgSend_isEqual_(local_180,local_208,local_130);
        if ((uVar6 & 1) == 0) {
          _objc_msgSend_addObject_(local_120,local_208,local_130);
        }
        _objc_storeStrong(&local_180);
        _objc_storeStrong(&local_178,0);
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_208,auStack_170,auStack_a8,0x10);
      local_250 = 0;
    } while (local_248 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_188 = 0;
  if ((local_111 & 1) == 0) {
    lVar4 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x20),local_208);
    if ((lVar4 != 0) && (local_110 != 0)) {
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_208,&cf_setFeed_______);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_188;
      local_188 = uVar7;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  else {
    lVar4 = _objc_msgSend_count(local_120,local_208);
    if (lVar4 != 0) {
      _objc_msgSend_dataWithJSONObject_options_error_
                (&_OBJC_CLASS___NSJSONSerialization,local_208,local_120,0);
      local_190 = _objc_retainAutoreleasedReturnValue();
      uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
      uVar7 = _objc_msgSend_initWithData_encoding_(uVar3,local_208,local_190,4);
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_208,&cf_patchFeed____);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_188;
      local_188 = uVar8;
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_storeStrong(&local_190,0);
    }
  }
  local_e8 = &cf_ms;
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_208);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar12 = (double)_objc_msgSend_systemUptime(uVar3,local_208);
  _objc_msgSend_numberWithDouble_((dVar12 - local_100) * 1000.0,&_OBJC_CLASS___NSNumber,local_208);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_e0 = &cf_rows;
  local_c8 = uVar7;
  uVar8 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x20),local_208);
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_208,uVar8);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  local_d8 = &cf_main;
  local_c0 = uVar8;
  uVar9 = _objc_msgSend_isMainThread(&_OBJC_CLASS___NSThread,local_208);
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_208,uVar9);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_changed;
  local_b8 = uVar9;
  uVar10 = _objc_msgSend_count(local_120,local_208);
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_208,uVar10);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar10;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_208,&local_c8,&local_e8,4);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  _Trace(&cf_feed_serialize);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar3 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_1f0 = PTR___NSConcreteStackBlock_001104f0;
  local_1e8 = 0xc2000000;
  local_1e4 = 0;
  local_1e0 = ___39__WCMFeedController_publishPendingFeed__block_invoke_2;
  local_1d8 = &___block_descriptor_89_e8_32s40s48s56s64s72w_e5_v8__0l;
  _objc_copyWeak(auStack_1a8,param_1 + 0x38);
  local_1a0 = *(undefined8 *)(param_1 + 0x40);
  local_198 = *(byte *)(param_1 + 0x48) & 1;
  local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_110);
  local_1c8 = (*(code *)PTR__objc_retain_00110460)(local_128);
  local_1c0 = (*(code *)PTR__objc_retain_00110460)(local_188);
  local_1b8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
  local_1b0 = (*(code *)PTR__objc_retain_00110460)(local_108);
  _dispatch_async(uVar3,&local_1f0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_destroyWeak(auStack_1a8);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_autoreleasePoolPop(uVar2);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

