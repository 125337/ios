// ___37-[WCMFeedController_openCacheManager]_block_invoke_2 @0x47a68

void ___37__WCMFeedController_openCacheManager__block_invoke_2(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_190;
  ulong local_188;
  undefined8 local_158;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_1;
  local_b0 = param_1;
  uVar2 = _objc_loadWeakRetained(param_1 + 0x38);
  _objc_msgSend_mediaQueue(uVar2,local_158);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_waitUntilAllOperationsAreFinished(uVar3,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x38);
  _objc_msgSend_previewQueue(uVar2,local_158);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_waitUntilAllOperationsAreFinished(uVar3,local_158);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _memset(auStack_100,0,0x40);
  _WCMCacheAssets(*(undefined8 *)(param_1 + 0x20));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_158,auStack_100,auStack_a8,0x10);
  if (local_188 != 0) {
    lVar5 = *local_f0;
    local_190 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar2);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_190 * 8);
        _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_158);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_objectForKeyedSubscript_(local_c0,local_158,&cf_path);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_removeItemAtPath_error_(uVar3,local_158,uVar4,0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_158,auStack_100,auStack_a8,0x10);
      local_190 = 0;
    } while (local_188 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_138 = PTR___NSConcreteStackBlock_001104f0;
  local_130 = 0xc2000000;
  local_12c = 0;
  local_128 = ___37__WCMFeedController_openCacheManager__block_invoke_3;
  local_120 = &___block_descriptor_56_e8_32s40bs48w_e5_v8__0l;
  _objc_copyWeak(auStack_108,param_1 + 0x38);
  local_118 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_110 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
  _dispatch_async(uVar2,&local_138);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_118,0);
  _objc_destroyWeak(auStack_108);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

