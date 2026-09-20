// FUN_0004c170 @ 0004c170

void FUN_0004c170(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint local_1bc;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_160;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_autoreleasePoolPush();
  FUN_0004c598();
  pcVar2 = &cf_SSkbc_TR;
  FUN_0004ae0c();
  FUN_0004c65c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    local_e0 = (cfstringStruct *)0x5;
    pcVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    local_160 = pcVar2;
    if (local_e0 < pcVar2) {
      local_160 = local_e0;
    }
    local_f0 = local_160;
    local_d8 = local_160;
    local_e8 = pcVar2;
  }
  _memset(auStack_138,0,0x40);
  pcVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_180 != (cfstringStruct *)0x0) {
    lVar5 = *local_128;
    local_188 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_128 - lVar5 != 0) {
          _objc_enumerationMutation(*local_128 - lVar5,pcVar2);
        }
        local_f8 = *(undefined8 *)(local_130 + (long)local_188 * 8);
        if ((DAT_028c7b7a & 1) != 0) goto LAB_0004c4c0;
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar1 = (uint)puVar4;
        local_1bc = 1;
        if (((ulong)puVar4 & 1) != 0) {
          FUN_0004bf04();
          local_1bc = uVar1 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((local_1bc & 1) != 0) goto LAB_0004c4c0;
        FUN_0004cd90(local_f8);
        local_188 = (cfstringStruct *)((long)&local_188->field0_0x0 + 1);
      } while (local_188 < local_180);
      local_180 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_188 = (cfstringStruct *)0x0;
    } while (local_180 != (cfstringStruct *)0x0);
  }
LAB_0004c4c0:
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_c0,0);
  _objc_autoreleasePoolPop(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_flushPersistedRecords_0269d960);
  DAT_028c7b79 = 0;
  DAT_028c7b7a = 0;
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

