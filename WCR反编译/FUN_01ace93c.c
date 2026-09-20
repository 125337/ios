// FUN_01ace93c @ 01ace93c

void FUN_01ace93c(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  char *local_178;
  char *local_170;
  char *local_140;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MainSessionMgr";
  local_b0 = puVar1;
  _objc_getClass();
  FUN_01aad60c();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar2;
  FUN_01a9c574(pcVar2,&cf_allTopSessions);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b8;
  local_c0 = pcVar2;
  FUN_01a9c574(local_b8,&cf_topSessions);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c8 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     pcVar2 == (char *)0x0)) {
    local_140 = local_c8;
  }
  else {
    local_140 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)local_140 & 1) != 0) {
    puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    pcVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_170 != (char *)0x0) {
      lVar5 = *local_110;
      local_178 = (char *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,pcVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_178 * 8);
          puVar1 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_nativeSessionFromObject__026a2c00,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_d8;
          local_128 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_usernameForNativeObject__026a2c08,puVar1);
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,local_130);
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_178 = (char *)0x0;
      } while (local_170 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_d8,0);
  }
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

