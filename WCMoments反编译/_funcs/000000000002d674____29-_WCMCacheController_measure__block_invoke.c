// ___29-[WCMCacheController_measure]_block_invoke @0x2d674

void ___29__WCMCacheController_measure__block_invoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong local_170;
  ulong local_168;
  undefined8 local_158;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_108,0,0x40);
  _WCMCacheAssets(*(undefined8 *)(param_1 + 0x20));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_168 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_158,auStack_108,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar5 = *local_f8;
    local_170 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,uVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_170 * 8);
        _objc_msgSend_objectForKeyedSubscript_(local_c8,local_158,&cf_bytes);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        lVar4 = _objc_msgSend_unsignedLongLongValue(uVar3,local_158);
        local_c0 = local_c0 + lVar4;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_158,auStack_108,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_138 = PTR___NSConcreteStackBlock_001104f0;
  local_130 = 0xc2000000;
  local_12c = 0;
  local_128 = ___29__WCMCacheController_measure__block_invoke_2;
  local_120 = &___block_descriptor_48_e8_32s_e5_v8__0l;
  local_118 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_110 = local_c0;
  _dispatch_async(uVar2,&local_138);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

