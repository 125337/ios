// removeHiddenOwnMomentTid: @ 0205b810

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::removeHiddenOwnMomentTid_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  ulong local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_c4 = 1;
  }
  else {
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_momentsHiddenOwnMoments_026c11f0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_150 != (undefined *)0x0) {
      lVar4 = *local_110;
      local_158 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_118 + (long)local_158 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKey__0269e048,&cf_tid);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_158 = (undefined *)0x0;
      } while (local_150 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 != puVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setMomentsHiddenOwnMoments__026ca308,local_d8);
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

