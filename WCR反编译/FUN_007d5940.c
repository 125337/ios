// FUN_007d5940 @ 007d5940

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007d5940(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0 [3];
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar2 = DAT_028ccd18;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028ccd18 == (undefined *)0x0) || ((DAT_026f46ca & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_d0[0] = puVar2;
    _memset(auStack_118,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_158 != (undefined *)0x0) {
      lVar3 = *local_108;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_110 + (long)local_160 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), uVar4 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_addObject__0269d180,local_d8);
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_copy_0269d150);
    puVar2 = DAT_028ccd18;
    DAT_028ccd18 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    DAT_026f46ca = 0;
    puVar2 = DAT_028ccd18;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    _objc_storeStrong(local_d0);
    _objc_storeStrong(&local_b8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

