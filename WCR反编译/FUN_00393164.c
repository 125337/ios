// FUN_00393164 @ 00393164

void FUN_00393164(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_148;
  undefined *local_140;
  char *local_118;
  char *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "MainSessionMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  _memset(auStack_108,0,0x40);
  local_b8 = &cf_allTopSessions;
  local_b0 = &cf_topSessions;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (undefined *)0x0) {
    lVar6 = *local_f8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,puVar3);
        }
        local_c8 = *(undefined8 *)(local_100 + (long)local_148 * 8);
        pcVar2 = local_c0;
        FUN_003612b8(local_c0,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_110 = pcVar2;
        FUN_003c4310();
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
        pcVar4 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
        if ((pcVar2 == pcVar4) &&
           (pcVar4 = local_118,
           (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isEqualToArray__0269e9b0,local_110)
           , pcVar2 = local_110, ((ulong)pcVar4 & 1) == 0)) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          pcVar4 = local_c0;
          uVar1 = local_c8;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
            FUN_00367110(pcVar4,uVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setArray__026a30c0,local_118);
          }
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

