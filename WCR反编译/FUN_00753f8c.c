// FUN_00753f8c @ 00753f8c

void FUN_00753f8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_270;
  undefined *local_268;
  undefined *local_218;
  undefined *local_210;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar2;
  _memset(auStack_190,0,0x40);
  puVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_smallSignalSpecialUsers_026a7d28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_0074c198();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_210 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_210 != (undefined *)0x0) {
    lVar3 = *local_180;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar3 != 0) {
          _objc_enumerationMutation(*local_180 - lVar3,puVar2);
        }
        local_150 = *(undefined8 *)(local_188 + (long)local_218 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_150);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_1d8,0,0x40);
  puVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_smallSignalSpecialGuestWxids_026a7d48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_0074c198();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_268 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
  if (local_268 != (undefined *)0x0) {
    lVar3 = *local_1c8;
    local_270 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar3,puVar2);
        }
        local_198 = *(undefined8 *)(local_1d0 + (long)local_270 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_198);
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10
                );
      local_270 = (undefined *)0x0;
    } while (local_268 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

