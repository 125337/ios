// FUN_005ca258 @ 005ca258

void FUN_005ca258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_280;
  undefined *local_278;
  undefined *local_260;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1f8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar1;
  _memset(auStack_178,0,0x40);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1f8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_210 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
  if (local_210 != (undefined *)0x0) {
    lVar3 = *local_168;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_168 - lVar3 != 0) {
          _objc_enumerationMutation(*local_168 - lVar3,local_1f8);
        }
        local_138 = *(undefined8 *)(local_170 + (long)local_218 * 8);
        FUN_005cc950(local_138,local_130);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                 0x10);
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_1f8);
  _memset(auStack_1d0,0,0x40);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_260 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_260 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_278 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_260,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10)
  ;
  if (local_278 != (undefined *)0x0) {
    lVar3 = *local_1c0;
    local_280 = (undefined *)0x0;
    do {
      do {
        if (*local_1c0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar3,local_260);
        }
        local_190 = *(undefined8 *)(local_1c8 + (long)local_280 * 8);
        FUN_005cc950(local_190,local_130);
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_260,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,
                 0x10);
      local_280 = (undefined *)0x0;
    } while (local_278 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_260);
  puVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

