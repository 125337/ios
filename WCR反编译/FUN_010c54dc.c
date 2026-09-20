// FUN_010c54dc @ 010c54dc

void FUN_010c54dc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong local_258;
  ulong local_250;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_138 = param_1;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_mediaCopyQueue_026ae670);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_sync();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  _objc_alloc_init();
  local_140 = puVar2;
  _memset(auStack_188,0,0x40);
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR_s_contentsOfDirectoryAtPath_error__0269e088,
             *(undefined8 *)(param_1 + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  local_200 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_200 != (undefined *)0x0) {
    lVar7 = *local_178;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar7 != 0) {
          _objc_enumerationMutation(*local_178 - lVar7,puVar2);
        }
        uVar8 = *(ulong *)(local_180 + (long)local_208 * 8);
        local_148 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_hasSuffix__0269d018,&cf__dat);
        if ((uVar8 & 1) != 0) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
          *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
        }
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_prepareBrowseIndexMutation_026ae690);
  _memset(auStack_1d0,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_250 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10);
  if (local_250 != 0) {
    lVar7 = *local_1c0;
    local_258 = 0;
    do {
      do {
        if (*local_1c0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar7,uVar4);
        }
        local_190 = *(undefined8 *)(local_1c8 + local_258 * 8);
        uVar5 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_browseRecords_026ae688);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar6 & 1) != 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_browseRecords_026ae688);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        local_258 = local_258 + 1;
      } while (local_258 < local_250);
      local_250 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10)
      ;
      local_258 = 0;
    } while (local_250 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_scheduleBrowseIndexSave_026ae698);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

