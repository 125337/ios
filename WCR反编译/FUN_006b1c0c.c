// FUN_006b1c0c @ 006b1c0c

void FUN_006b1c0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined *local_140 [4];
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  if ((local_c8 == (undefined *)0x0) || ((DAT_028cc038 & 1) != 0)) {
    local_cc = 1;
  }
  else {
    DAT_028cc038 = 1;
    _memset(auStack_118,0,0x40);
    local_c0 = &cf_topSessions;
    local_b8 = &cf_normalSessions;
    local_b0 = &cf_allTopSessions;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != (undefined *)0x0) {
      lVar4 = *local_108;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,puVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_170 * 8);
          local_120 = (undefined *)0x0;
          puVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_120;
          local_120 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_120;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            local_cc = 3;
          }
          else {
            puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_filteredArray__026a6640,
                       local_120);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_120;
            local_140[0] = puVar2;
            if (puVar2 == local_120) {
              local_cc = 3;
            }
            else {
              puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
              puVar2 = local_c8;
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = local_140[0];
                (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_mutableCopy_0269d8a0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,local_d8);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_setArray__026a30c0,local_140[0]);
              }
              local_cc = 0;
            }
            _objc_storeStrong(local_140,0);
          }
          _objc_storeStrong(&local_120,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    DAT_028cc038 = 0;
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

