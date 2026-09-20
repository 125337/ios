// FUN_01524d9c @ 01524d9c

undefined * FUN_01524d9c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *local_160;
  undefined *local_138;
  undefined *local_130;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  pcVar2 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  _memset(auStack_108,0,0x40);
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_130 != (undefined *)0x0) {
    lVar3 = *local_f8;
    local_138 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,puVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + (long)local_138 * 8);
        pcVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_usernameForNativeObject__026a2c08,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_160 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = local_160;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        lVar4 = (long)local_b8 * 0x1f;
        pcVar2 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_hash_0269ec90);
        local_b8 = (undefined *)((long)&pcVar2->field0_0x0 + lVar4);
        _objc_storeStrong(&local_110,0);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_138 = (undefined *)0x0;
    } while (local_130 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

